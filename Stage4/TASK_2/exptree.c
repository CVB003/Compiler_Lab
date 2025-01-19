int curr_reg=0;
int curr_label=0;
int inside_while=0;
int curr_jump_break=0,curr_jump_cont=0;
FILE* fp1;
int curr_SP=4096;
struct Gsymbol* symbtable=NULL;

struct tnode* createTree(int val, int type, char* c, int ntype, struct tnode *l, struct tnode *r)
{
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->type = type;
    temp->val = val;
    temp->left = l;
    temp->varname=(char*)malloc(strlen(c)*sizeof(char));
    strcpy(temp->varname,c);
    temp->nodetype=ntype;
    temp->right = r;
    struct Gsymbol* t;
    switch((ntype)){
    	case ps: checktype(l,inttype,r,inttype);
    		 break;
    	case ms: checktype(l,inttype,r,inttype);
    		 break;
    	case ml: checktype(l,inttype,r,inttype);
    		 break;
    	case dv: checktype(l,inttype,r,inttype);
    		 break;
    	case mod: checktype(l,inttype,r,inttype);
    		 break;
    	case asg: 
    		  if((l->Gentry->type)!=r->type){
    		  	printf("Type mismatch!\n");
    		  	exit(1);
    		  }
    		  break;
    	case le: checktype(l,inttype,r,inttype);
    		 break;
    	case lt: checktype(l,inttype,r,inttype);
    		 break;
    	case ge: checktype(l,inttype,r,inttype);
    		 break;
    	case gt: checktype(l,inttype,r,inttype);
    		 break;
    	case ne: checktype(l,inttype,r,inttype);
    		 break;
    	case eq: checktype(l,inttype,r,inttype);
    		 break;
    	case whl: checktype(l,booltype,r,notype);
    		  break;
    	case ifel:  checktype(l,booltype,r,notype);
    		   break;
    	case el: checktype(l,notype,r,-1);
    		  break;
    	case wr: if((l->type)!=inttype && (l->type)!=strtype){
    		 	
    		 	printf("Type Mismatch!\n");
    		 	exit(1);
    		 }
    		 break;
    	case dow: checktype(l,notype,r,booltype);
    		  break;
    	case rpt: checktype(l,notype,r,booltype);
    		  break;
    	case id: t=lookup(temp->varname);
    		 if(t!=NULL){
    		 	temp->type=t->type;
    		 }
    	   	 temp->Gentry=t;
    	   	 break;
    	case arrval: t=lookup(temp->left->varname);
    		     temp->Gentry=t;
    		     if(temp->right->type!=inttype){
    		     	printf("Array index expression is not of type int\n");
    		     	exit(1);
    		     }
    		     break;
        case arrasg: t=lookup(temp->left->varname);
    		     temp->Gentry=t;
    		     if(temp->right->type!=inttype){
    		     	printf("Array index expression is not of type int\n");
    		     	exit(1);
    		     }
    		     break;
        
    }
    return temp;
}

void checktype(struct tnode* l,int ltype,struct tnode* r,int rtype){
	
	if(ltype!=-1 && (l->type)!=ltype){
    		
    		printf("Type mismatch!\n");
    		exit(1);
    	}
    	if(rtype!=-1 && (r->type)!=rtype){
    		
    		printf("Type mismatch!\n");
    		exit(1);
    	}
    	return;
}

void assign_type(struct tnode* t,int type){
	if(t==NULL){
		return;
	}
	
	if(t->nodetype==id){
		t->type=type;
		install(t->varname,type,1);
		t->Gentry=lookup(t->varname);
		return;
	}else if(t->nodetype==arrdecl){
		t->left->type=type;
		install(t->left->varname,type,t->right->val);
		t->left->Gentry=lookup(t->left->varname);
		return;
		
	}
	assign_type(t->left,type);
	assign_type(t->right,type);
	return;

}

struct Gsymbol* lookup(char* name){
	struct Gsymbol* t=symbtable;
	while(t!=NULL){
		if(strcmp(t->name,name)==0){
			return t;
		}
		t=t->next;
	}
	return t;

}

void install(char* name,int type,int size){
	struct Gsymbol* t=lookup(name);
	if(t!=NULL){
		printf("Variable with name: %s is redeclared\n",name);
		exit(1);
	}
	t=symbtable;
	while(t!=NULL && t->next!=NULL){
		t=t->next;
	}
	struct Gsymbol* s=(struct Gsymbol*)malloc(sizeof(struct Gsymbol));
	s->type=type;
	s->size=size;
	s->name=(char*)malloc(strlen(name)*sizeof(char));
	strcpy(s->name,name);
	s->binding=curr_SP;
	curr_SP+=size;
	s->next=NULL;
	
	if(t==NULL){
		symbtable=s;
	}else{
		t->next=s;
	}
	return;
}

int get_reg(){
    if(curr_reg==20){
        printf("All registers used!\n");
        exit(1);
    }
    return curr_reg++;
}

int free_reg(){
    if(curr_reg==0){
        printf("Invalid free\n");
        exit(1);
    }
    return curr_reg--;
}

int get_label(){

	return curr_label++;
}

void before_code(){
        printf("reached here\n");
	fp1=fopen("code.xsm","w");
     	fprintf(fp1, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",0,2056,0,0,0,0,0,0);
     	fprintf(fp1,"MOV SP,%d\n",curr_SP);
     	fprintf(fp1,"JMP 2144\n");
     	fprintf(fp1,"MOV R4 , \"Read\"\n");
    	fprintf(fp1,"PUSH R4\n");
    	fprintf(fp1,"MOV R4 ,-1\n");
    	fprintf(fp1,"PUSH R4\n");
    	fprintf(fp1,"MOV R4,R1\n");
    	fprintf(fp1,"PUSH R4\n");
    	fprintf(fp1,"PUSH R4\n");
    	fprintf(fp1,"PUSH R4\n");
    	fprintf(fp1,"CALL 0\n");
    	fprintf(fp1,"POP R4\n");
    	fprintf(fp1,"POP R4\n");
    	fprintf(fp1,"POP R4\n");
    	fprintf(fp1,"POP R4\n");
    	fprintf(fp1,"POP R4\n");
     	fprintf(fp1,"RET\n");
     	
     	fprintf(fp1,"MOV R4 , \"Write\"\n");
    	fprintf(fp1,"PUSH R4\n");
    	fprintf(fp1,"MOV R4 ,-2\n");
    	fprintf(fp1,"PUSH R4\n");
    	fprintf(fp1,"MOV R4,R1\n");
    	fprintf(fp1,"PUSH R4\n");
    	fprintf(fp1,"PUSH R4\n");
    	fprintf(fp1,"PUSH R4\n");
    	fprintf(fp1,"CALL 0\n");
    	fprintf(fp1,"POP R4\n");
    	fprintf(fp1,"POP R4\n");
    	fprintf(fp1,"POP R4\n");
    	fprintf(fp1,"POP R4\n");
    	fprintf(fp1,"POP R4\n");
     	fprintf(fp1,"RET\n");
     	
     	fprintf(fp1,"MOV R4 , \"Exit\"\n");
	fprintf(fp1,"PUSH R4\n");
	fprintf(fp1,"PUSH R4\n");
	fprintf(fp1,"PUSH R4\n");
	fprintf(fp1,"PUSH R4\n");
	fprintf(fp1,"PUSH R4\n");
	fprintf(fp1,"CALL 0\n");
	fprintf(fp1,"POP R4\n");
	fprintf(fp1,"POP R4\n");
	fprintf(fp1,"POP R4\n");
	fprintf(fp1,"POP R4\n");
	fprintf(fp1,"POP R4\n");
	
     	printf("done till here\n");
     	return;
}

int code_gen(struct tnode* t){
	if(t==NULL){
		return 0;
	}
	
	int i,j;
	int l1,l2;
	switch ((t->nodetype)){
		case ps: i=code_gen(t->left);
			 j=code_gen(t->right);	
			 fprintf(fp1,"ADD R%d,R%d\n",i,j);
			 free_reg();
			 return i;
			 break;
		case ms : i=code_gen(t->left);
			  j=code_gen(t->right);	
			  fprintf(fp1,"SUB R%d,R%d\n",i,j);
			  free_reg();
			  return i;
                       	  break;
            	case ml : i=code_gen(t->left);
			  j=code_gen(t->right);	
			  fprintf(fp1,"MUL R%d,R%d\n",i,j);
			  free_reg();
			  return i;
                          break;
            	case dv : i=code_gen(t->left);
			  j=code_gen(t->right);	
			  fprintf(fp1,"DIV R%d,R%d\n",i,j);
			  free_reg();
			  return i;
                          break;
                case mod : i=code_gen(t->left);
			  j=code_gen(t->right);	
			  fprintf(fp1,"MOD R%d,R%d\n",i,j);
			  free_reg();
			  return i;
                          break;
                case rd : i=code_gen(t->left);
                	  
                	  if(t->left->nodetype==id){
                	  	fprintf(fp1,"MOV R1,%d\n",t->left->Gentry->binding);
                	  }else if(t->left->nodetype==arrasg){
                	  	fprintf(fp1,"MOV R1,R%d\n",i);
                	  }
                	  
                	  fprintf(fp1,"CALL 2060\n");
                	  free_reg();
                	  return 30;
                          break;
                case wr : i=code_gen(t->left);
                	  fprintf(fp1,"MOV R1,R%d\n",i);
                	  fprintf(fp1,"CALL 2090\n");
                	  free_reg();
                	  return 30;
                          break;
                case asg : printf("Inside asg\n");
                	   i=code_gen(t->right);
                	   if(t->left->nodetype==arrasg){
                	   	j=code_gen(t->left);
                	   	fprintf(fp1,"MOV [R%d],R%d\n",j,i);
                	   	if(j!=30)
                	   		free_reg();
                	   }else if(t->left->nodetype==id){
                	   	fprintf(fp1,"MOV [%d],R%d\n",t->left->Gentry->binding,i);
                	   }
                	   
                	   
                	  
                	   if(i!=30)
                	   	free_reg();
                	   return 30;
                           break;
                case cnn : i=code_gen(t->left);
                	   j=code_gen(t->right);
                	   
                	   if(j!=30)
                	   	free_reg();;
                	   if(i!=30)
                	   	free_reg();
                	   return 30;
                           break;
                case id : i=get_reg();
                	  
                	  fprintf(fp1,"MOV R%d,[%d]\n",i,t->Gentry->binding);
                	  return i;
                	  break;
                case str_const: i=get_reg();
                		
                		fprintf(fp1,"MOV R%d,\"%s\"\n",i,t->varname);
                		return i;
                		break;
                case num : i=get_reg();
                	   fprintf(fp1,"MOV R%d,%d\n",i,t->val);
                	   return i;
                	   break;
                case lt : i=code_gen(t->left);
                	  j=code_gen(t->right);
                	  fprintf(fp1,"LT R%d,R%d\n",i,j);
                	  free_reg();
                	  return i;
                	  break;
                case gt : i=code_gen(t->left);
                	  j=code_gen(t->right);
                	  fprintf(fp1,"GT R%d,R%d\n",i,j);
                	  free_reg();
                	  return i;
                	  break;
                case le : i=code_gen(t->left);
                	  j=code_gen(t->right);
                	  fprintf(fp1,"LE R%d,R%d\n",i,j);
                	  free_reg();
                	  return i;
                	  break;
                case ge : i=code_gen(t->left);
                	  j=code_gen(t->right);
                	  fprintf(fp1,"GE R%d,R%d\n",i,j);
                	  free_reg();
                	  return i;
                	  break;
                case ne : i=code_gen(t->left);
                	  j=code_gen(t->right);
                	  fprintf(fp1,"NE R%d,R%d\n",i,j);
                	  free_reg();
                	  return i;
                	  break;
                case eq : i=code_gen(t->left);
                	  j=code_gen(t->right);
                	  fprintf(fp1,"EQ R%d,R%d\n",i,j);
                	  free_reg();
                	  return i;
                	  break;
                case whl : l1=get_label();
                	   l2=get_label();
                	   inside_while=1;
                	   curr_jump_break=l2;
                	   curr_jump_cont=l1;
                	   fprintf(fp1,"L%d:\n",l1);
                	   i=code_gen(t->left);
                	   fprintf(fp1,"JZ R%d,L%d\n",i,l2);
                	   j=code_gen(t->right);
                	   fprintf(fp1,"JMP L%d\n",l1);
                	   fprintf(fp1,"L%d:\n",l2);
                	   if(j!=30)
                	   	free_reg();;
                	   if(i!=30)
                	   	free_reg();
                	   inside_while=0;
                	   return 30;
                           break;
                case ifel : i=code_gen(t->left);
                	    l1=get_label();
                	    fprintf(fp1,"JZ R%d,L%d\n",i,l1);
                	    j=code_gen(t->right->left);
                	    if(t->right->right!=NULL){
                	    	l2=get_label();
                	    	fprintf(fp1,"JMP L%d\n",l2);
                	    	fprintf(fp1,"L%d:\n",l1);
                	    	int k=code_gen(t->right->right);
                	    	if(k!=30){
                	    		free_reg();
                	    	}
                	    	fprintf(fp1,"L%d:\n",l2);
                	    }else{
                	    	fprintf(fp1,"L%d:\n",l1);
                	    }
                	    if(j!=30)
                	   	free_reg();;
                	    if(i!=30)
                	   	free_reg();
                	    return 30;
                            break;
                case brek: if(inside_while==1){
                		fprintf(fp1,"JMP L%d\n",curr_jump_break);
                	  }
                	  return 30;
                	  break;
                case cont: if(inside_while==1){
                		fprintf(fp1,"JMP L%d\n",curr_jump_cont);
                	   }
                	   return 30;
                	   break;
                case dow: l1=get_label();
                	  l2=get_label();
                	  fprintf(fp1,"L%d:\n",l1);
                	  inside_while=1;
                	  curr_jump_break=l2;
                	  curr_jump_cont=l1;
                	  i=code_gen(t->left);
                	  j=code_gen(t->right);
                	  fprintf(fp1,"JNZ R%d,L%d\n",j,l1);
                	  fprintf(fp1,"L%d:\n",l2);
                	  if(j!=30)
                	   	free_reg();;
                	   if(i!=30)
                	   	free_reg();
                	   inside_while=0;
                	   return 30;
                           break;
                case rpt: l1=get_label();
                	  l2=get_label();
                	  fprintf(fp1,"L%d:\n",l1);
                	  inside_while=1;
                	  curr_jump_break=l2;
                	  curr_jump_cont=l1;
                	  i=code_gen(t->left);
                	  j=code_gen(t->right);
                	  fprintf(fp1,"JZ R%d,L%d\n",j,l1);
                	  fprintf(fp1,"L%d:\n",l2);
                	  if(j!=30)
                	   	free_reg();;
                	   if(i!=30)
                	   	free_reg();
                	   inside_while=0;
                	   return 30;
                           break;
                case arrval: i=code_gen(t->right);
                	     
                	     fprintf(fp1,"ADD R%d,%d\n",i,t->left->Gentry->binding);
                	     fprintf(fp1,"MOV R%d,[R%d]\n",i,i);
                	   
                	     return i;
                	     break;
                case arrasg:i=code_gen(t->right);
                	    
                	     fprintf(fp1,"ADD R%d,%d\n",i,t->left->Gentry->binding);
       
                	     return i;
                	     break;
                	    
                case declst: 
                	     return 30;
                
                	  
                	  
                
	}
	return 30;
}

void after_code(){
	fprintf(fp1,"MOV R4 , \"Exit\"\n");
	fprintf(fp1,"PUSH R4\n");
	fprintf(fp1,"PUSH R4\n");
	fprintf(fp1,"PUSH R4\n");
	fprintf(fp1,"PUSH R4\n");
	fprintf(fp1,"PUSH R4\n");
	fprintf(fp1,"CALL 0\n");
	fprintf(fp1,"POP R4\n");
	fprintf(fp1,"POP R4\n");
	fprintf(fp1,"POP R4\n");
	fprintf(fp1,"POP R4\n");
	fprintf(fp1,"POP R4\n");
	
	return;

}
