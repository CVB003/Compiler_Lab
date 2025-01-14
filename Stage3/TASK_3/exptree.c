int curr_reg=0;
int curr_label=0;
FILE* fp1;


struct tnode* createTree(int val, int type, char* c, int ntype, struct tnode *l, struct tnode *r)
{
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->type = type;
    temp->val = val;
    temp->left = l;
    temp->varname=(char*)malloc(sizeof(char));
    *(temp->varname)=*(c);
    temp->nodetype=ntype;
    temp->right = r;
    switch((ntype)){
    	case ps: checktype(l,inttype,r,inttype);
    		 break;
    	case ms: checktype(l,inttype,r,inttype);
    		 break;
    	case ml: checktype(l,inttype,r,inttype);
    		 break;
    	case dv: checktype(l,inttype,r,inttype);
    		 break;
    	case asg: checktype(l,inttype,r,inttype);
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
    	case el: checktype(l,notype,r,notype);
    		  break;
    	case wr: if((l->type)!=inttype){
    		 	printf("Type Mismatch!\n");
    		 	exit(1);
    		 }
    		 break;
    	   
    }
    return temp;
}

void checktype(struct tnode* l,int ltype,struct tnode* r,int rtype){
	if((l->type)!=ltype || (r->type)!=rtype){
    		printf("Type mismatch!\n");
    		exit(1);
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
     	fprintf(fp1,"MOV SP,4121\n");
     	fprintf(fp1,"JMP 2120\n");
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
                case rd : i=code_gen(t->left);
                	  fprintf(fp1,"MOV R1,%d\n",*(t->left->varname)-'a'+4096);
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
                case asg : i=code_gen(t->right);
                	   fprintf(fp1,"MOV [%d],R%d\n",*(t->left->varname)-'a' + 4096,i);
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
                	 
                	  fprintf(fp1,"MOV R%d,[%d]\n",i,4096+(*(t->varname)-'a'));
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
                
	}
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
