FILE* fp1;
int curr=0;

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
    return temp;
}

void prefix(struct tnode* t){
	if(t==NULL){
		return;
	}
	if(t->nodetype==id || t->nodetype==num){
		if(t->nodetype==id){
			printf("%s ",t->varname);
		}else{
			printf("%d ",t->val);
		}
	}
	else{
		switch((t->nodetype)){
            		case ps : printf("+ ");
                       		   break;
            		case ms : printf("- ");
                       		   break;
            		case ml : printf("* ");
                        	   break;
            		case dv : printf("/ ");
                        	   break;
                        case rd : printf("READ ");
                        	    break;
                        case wr : printf("WRITE ");
                        	    break;
                        case asg : printf("= ");
                        	    break;
                        case cnn : printf("Connector ");
                        	    break;
                        
                        
                        
        	}
		prefix(t->left);
		prefix(t->right);
	}

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


int get_reg(){
    if(curr==20){
        printf("All registers used!\n");
        exit(1);
    }
    return curr++;
}

int free_reg(){
    if(curr==0){
        printf("Invalid free\n");
        exit(1);
    }
    return curr--;
}

int code_gen(struct tnode* t){
	if(t==NULL){
		return 0;
	}
	int i,j;
	
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
