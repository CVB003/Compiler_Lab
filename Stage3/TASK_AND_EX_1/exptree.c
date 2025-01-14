int arr[26];


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
                        case lt : printf("< ");
                       		   break;
                        case le : printf("<= ");
                       		   break;
                        case gt : printf("> ");
                       		   break;
                        case ge : printf(">= ");
                       		   break;
                       	case ne : printf("!= ");
                       		   break;
                       	case eq : printf("== ");
                       		   break;
            		case ms : printf("- ");;
                       		   break;
            		case ml : printf("* ");;
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
                        case ifel : printf("If-else  ");
                        	    break;
                        case whl  : printf("While ");
                        	    break;
                        case el : printf("Else ");
                        	  break;
                
        	}
		prefix(t->left);
		prefix(t->right);
	}

}


int evaluate(struct tnode* t){
	if(t==NULL){
		return 0;
	}
	int i,j;
	switch ((t->nodetype)){
		case ps: 
			 return evaluate(t->left)+evaluate(t->right);
			 break;
		case ms : return evaluate(t->left)-evaluate(t->right);
                       	  break;
            	case ml : return evaluate(t->left)*evaluate(t->right);
                          break;
            	case dv : return evaluate(t->left)/evaluate(t->right);
                          break;
                case rd : printf("Enter input for var %s:\n",(t->left->varname));
                	  scanf("%d",arr+(*(t->left->varname)-'a'));
                	  return 0;
                          break;
                case wr : i=evaluate(t->left);
                	  printf("%d\n",i);
                	  return 0;
                          break;
                case asg : i=evaluate(t->right);
                	   arr[*(t->left->varname)-'a']=i;
                	   return 0;
                           break;
                case cnn : i=evaluate(t->left);
                	   j=evaluate(t->right);
                	   return 0;
                           break;
                case id : return arr[(*(t->varname)-'a')];
                	  break;
                case num : return t->val;
                	   break;
                case le: return evaluate(t->left)<=evaluate(t->right);
                	 break;
                case lt: return evaluate(t->left)<evaluate(t->right);
                	 break;
                case ge: return evaluate(t->left)>=evaluate(t->right);
                	 break;
                case gt: return evaluate(t->left)>evaluate(t->right);
                	 break;
                case ne: return evaluate(t->left)!=evaluate(t->right);
                	 break;
                case eq: return evaluate(t->left)==evaluate(t->right);
                	 break;
                case ifel: if(evaluate(t->left)){
                		i=evaluate(t->right->left);
                		return 0;
                	   }else{
                	   	i=evaluate(t->right->right);
                	   	return 0;
                	   }
                	   break;
                case whl: while(evaluate(t->left)){
                		i=evaluate(t->right);
                	  }
                	  return 0;

	}	
	return 0;
}
