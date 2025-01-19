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
    switch((ntype)){
    	case ps: checktype(l,inttype,r,inttype);
    		 break;
    	case ms: checktype(l,inttype,r,inttype);
    		 break;
    	case ml: checktype(l,inttype,r,inttype);
    		 break;
    	case dv: checktype(l,inttype,r,inttype);
    		 break;
    	case asg: 
    		  if((lookup(l->varname)->type)!=r->type){
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
    	case el: checktype(l,notype,r,notype);
    		  break;
    	case wr: if((l->type)!=inttype && (l->type)!=strtype){
    		 	
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

void assign_type(struct tnode* t,int type){
	if(t==NULL){
		return;
	}
	
	if(t->nodetype==id){
		t->type=type;
		install(t->varname,type,1);
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
	curr_SP++;
	s->next=NULL;
	
	if(t==NULL){
		symbtable=s;
	}else{
		t->next=s;
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
                        case varlst: printf("VarList ");
                        	     break;
                        case intnd: printf("INT ");
                        	    break;
                        case strnd: printf("STR ");
                        	    break;
                        case decl: printf("Decl ");
                        	   break;
                        case declst: printf("DeclList ");
                       		     break;
                       	case str_const: printf("String Const ");
                       			break;
                
        	}
		prefix(t->left);
		prefix(t->right);
	}

}
