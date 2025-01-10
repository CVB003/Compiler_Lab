FILE* fp1;
int curr=0;
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

	}	
	return 0;
}

