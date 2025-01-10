
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
                        
                        
                        
        	}
		prefix(t->left);
		prefix(t->right);
	}

}
