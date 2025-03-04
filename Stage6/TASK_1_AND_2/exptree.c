int curr_reg=0;
int curr_label=0;
int inside_while=0;
int curr_jump_break=0,curr_jump_cont=0;
FILE* fp1;
int curr_SP=4096;
int curr_flabel=1;
int curr_main=0;
int curr_findex=0;
struct Gsymbol* symbtable=NULL;
struct Lsymbol* lsymbtable=NULL;
struct Typetable* typetable=NULL; 

struct tnode* createTree(int val, char* type, char* c, int ntype, struct tnode *l, struct tnode *r)
{
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->type = TLookup(type);
    temp->val = val;
    temp->Lentry=NULL;
    temp->Gentry=NULL;
    temp->left = l;
    temp->varname=(char*)malloc(strlen(c)*sizeof(char));
    strcpy(temp->varname,c);
    temp->nodetype=ntype;
    temp->right = r;
    struct Gsymbol* t;
    switch((ntype)){
    	
    	
    	
     	case andnd: checktype(l,TLookup("bool"),r,TLookup("bool"));
     		    break;
    	
    	case whl: checktype(l,TLookup("bool"),r,TLookup("void"));
    		  break;
    	case ifel:  checktype(l,TLookup("bool"),r,TLookup("void"));
    		   break;
    	case el: checktype(l,TLookup("void"),r,TLookup("NULL"));
    		  break;
    	
    	case dow: checktype(l,TLookup("void"),r,TLookup("bool"));
    		  break;
    	case rpt: checktype(l,TLookup("void"),r,TLookup("bool"));
    		  break;
    	case id: t=lookup(temp->varname);
    		 if(t!=NULL){
    		 	temp->type=t->type;
    		 }
    	   	 temp->Gentry=t;
    	   	 break;
    	case arrval: t=lookup(temp->left->varname);
    		     temp->Gentry=t;
    		     if(strcmp(temp->right->type->name,"INT")!=0){
    		     	printf("Array index expression is not of type int\n");
    		     	exit(1);
    		     }
    		     break;
        case arrasg: t=lookup(temp->left->varname);
    		     temp->Gentry=t;
    		     if(strcmp(temp->right->type->name,"INT")!=0){
    		     	printf("Array index expression is not of type int\n");
    		     	exit(1);
    		     }
    		     break;
       case fndef: 
       		   t=lookup(temp->left->right->varname);
       		   
       		   temp->Gentry=t;
       		   if(strcmp(t->type->name,temp->left->left->type->name)!=0){
       		   	printf("Type mismatch in funcn declaration and definition\n");
       		   	exit(1);
       		   }
       		   
       		   if(t->paramlist==NULL && temp->right->left!=NULL){
       		   	printf("Arguments mismatch in declaration and definition\n");
       		   	exit(1);
       		   }
       		   t->flabel=curr_flabel++;
       		   struct Paramstruct* pt=(struct Paramstruct*)malloc(sizeof(struct Paramstruct));
       		   pt=NULL;
       		   struct Paramstruct* curr=(struct Paramstruct*)malloc(sizeof(struct Paramstruct)); 
       		   curr=NULL;
       		   convert_lst(&pt,&curr,temp->right->left);
       		   
       		   
       		   name_eq_args(t->paramlist,pt);
       		   
       		   struct Lsymbol* ls=(struct Lsymbol*)malloc(sizeof(struct Lsymbol)); 
       		   ls=NULL;
       		   struct Lsymbol* curr_ls=(struct Lsymbol*)malloc(sizeof(struct Lsymbol));
       		   curr_ls=NULL;
       		   
       		   struct Paramstruct* p100=t->paramlist;
       		   add_paramlst_Ltable(&(p100),&ls,&curr_ls);
        	
        	   
        	  
        	   struct Paramstruct* p2=(struct Paramstruct*)malloc(sizeof(struct Paramstruct)); 
        	   p2=NULL;
        	   struct Paramstruct* curr_p=(struct Paramstruct*)malloc(sizeof(struct Paramstruct)); 
        	   curr_p=NULL;
        	   convert_ldecl(temp->right->right->left,&p2,&curr_p);
        	   
        	   add_lvars_Ltable(&p2,&ls,&curr_ls);
        	  		  
        	   struct Lsymbol* gg=ls;
        	   while(gg!=NULL){
        	   	printf("%s\n",gg->name);
        	   	gg=gg->next;
        	   }
        	   temp->Lentry=ls;
        	   lsymbtable=ls;
        	   
        	   
        	   break;
        case mainnd: install("main",TLookup("INT"),0);
        	     t=lookup("main");
        	     temp->Gentry=t;
        	     t->flabel=0;
        	     
        	     struct Paramstruct* pr1=(struct Paramstruct*)malloc(sizeof(struct Paramstruct));
        	     struct Paramstruct* pr2=(struct Paramstruct*)malloc(sizeof(struct Paramstruct));
        	     pr1=NULL;
        	     pr2=NULL;
        	     convert_ldecl(temp->left,&pr1,&pr2);
        	     
        	     struct Lsymbol* lt=(struct Lsymbol*)malloc(sizeof(struct Lsymbol));
        	     lt=NULL;
        	     struct Lsymbol* lt2=(struct Lsymbol*)malloc(sizeof(struct Lsymbol));
        	     lt2=NULL;
        	     add_lvars_Ltable(&pr1,&lt,&lt2);
       
        	     temp->Lentry=lt;
        	     lsymbtable=lt;
        	     break;
         
        	      
    }
    return temp;
}

struct Typetable* TLookup(char* name){
	struct Typetable* curr=typetable;
	while(curr!=NULL){
		if(strcmp(curr->name,name)==0){
			return curr;
		}
		curr=curr->next;
	}
	return NULL;
}

struct Typetable* TInstall(char *name,int size, struct Fieldlist *fields){
	struct Typetable* entry=(struct Typetable*)malloc(sizeof(struct Typetable));
	
	if(size>8){
		printf("More than 8 member fields\n");
		exit(1);
	}
	
	if(TLookup(name)!=NULL){
		printf("Same type name is being used again\n");
		exit(1);
	}
	struct Fieldlist* p1=fields;
	struct Fieldlist* p2;
	
	
	
	if(p1!=NULL){
		
		while(p1!=NULL){
			
			p2=p1->next;
			while(p2!=NULL){
				if(strcmp(p1->name,p2->name)==0){
					printf("Field members are having same name\n");
					exit(1);
				}
				p2=p2->next;
			}
			p1=p1->next;
		}
	}
	
	entry->name=(char*)malloc(strlen(name)*sizeof(char));
	strcpy(entry->name,name);
	entry->size=size;
	entry->fields=fields;
	entry->next=NULL;
	
	if(typetable==NULL){
		typetable=entry;
	}else{
		struct Typetable* curr=typetable;
		while(curr->next!=NULL){
			curr=curr->next;
		}
		curr->next=entry;
	}
	
	p1=fields;
	while(p1!=NULL){
		if(strcmp(p1->type->name,"TEMP")==0){
			p1->type=TLookup(name);
		}
		p1=p1->next;
	}
	
	return entry;

}

void TypeTableCreate(){
	TInstall("INT",1,NULL);
	TInstall("STR",1,NULL);
	TInstall("bool",1,NULL);
	TInstall("void",0,NULL);
	TInstall("NULL",0,NULL);
	TInstall("TEMP",0,NULL);
	return;
}

struct Fieldlist* FLookup(struct Typetable *type, char *name){
	struct Fieldlist* f=type->fields;
	while(f!=NULL){
		if(strcmp(f->name,name)==0){
			return f;
		}
		f=f->next;
	}
	return NULL;
}

struct Fieldlist* convert_fldlst(struct tnode* t,char* name){
	struct Fieldlist* f=NULL;
	curr_findex=0;
	convert_flds(&f,t->left,name);
	convert_flds(&f,t->right,name);
	return f;

}

int count_fields(struct Fieldlist* f){
	if(f==NULL){
		return 0;
	}
	return 1+count_fields(f->next);
}

void convert_flds(struct Fieldlist** f,struct tnode* t,char* name){
	if(t==NULL){
		return;
	}
	if(t->nodetype==fielddecl){
		struct Fieldlist* temp=(struct Fieldlist*)malloc(sizeof(struct Fieldlist));
		temp->name=(char*)malloc(strlen(t->right->varname)*sizeof(char));
		strcpy(temp->name,t->right->varname);
		if(strcmp(name,t->left->varname)==0){
			temp->type=TLookup("TEMP");
		}else{
			temp->type=TLookup(t->left->varname);
			if(TLookup(t->left->varname)==NULL){
				printf("Member field is declared of a type which is not defined before it\n");
				exit(1);
			}
		}
		
		
		temp->fieldindex=curr_findex++;
		temp->next=NULL;
		
		struct Fieldlist* c=*f;
		if(*f==NULL){
			*f=temp;
		}else{
			while(c->next!=NULL){
				c=c->next;
			}
			c->next=temp;
		}
		return;
	}
	convert_flds(f,t->left,name);
	convert_flds(f,t->right,name);
	return;
}

void convert_arglst(struct tnode* t,struct Paramstruct** par1,struct Paramstruct** par2,struct Typetable* type){
	
	if(t==NULL){
		return;
	}
	
	if(t->nodetype==arglst){
	
		convert_arglst(t->left,par1,par2,type);
		convert_arglst(t->right,par1,par2,type);
		return;
		
	}
	printf("TILL HERE\n");
	struct Paramstruct* p=(struct Paramstruct*)malloc(sizeof(struct Paramstruct));
	
	if(t->nodetype==fieldval){
		check_decl(type,t->left);
		t->type=t->left->type;
		printf("PAR TYPE %s\n",t->type->name);
	}else{
		check_decl(type,t);
	}
	p->type=t->type;
	p->next=NULL;
	if(*par1==NULL){
		
		*par1=p;
		
		*par2=p;
	}else{
		(*par2)->next=p;
		*par2=p;
	}
	return;
	
}

void add_lvars_Ltable(struct Paramstruct** p2,struct Lsymbol** ls,struct Lsymbol** curr_ls){
	int curr_bind=1;
	
	while(*p2!=NULL){
		struct Lsymbol* l2=(struct Lsymbol*)malloc(sizeof(struct Lsymbol));
		l2->name=(char*)malloc(strlen((*p2)->name)*sizeof(char));
		strcpy(l2->name,(*p2)->name);
		
		
		l2->type=(*p2)->type;
		
		l2->binding=curr_bind++;
		l2->next=NULL;
		
		if(*ls==NULL){
			*ls=l2;
			*curr_ls=l2;
		}else{
			(*curr_ls)->next=l2;
			*curr_ls=l2;
		}
		*p2=(*p2)->next;
	}
	return;
}

void convert_ldecl(struct tnode* t,struct Paramstruct** p2,struct Paramstruct** curr_p){
	if(t==NULL){
		return;
	}
	if(t->nodetype==ldeclblk || t->nodetype==ldecllst){
		convert_ldecl(t->left,p2,curr_p);
		convert_ldecl(t->right,p2,curr_p);
		return;
	}
	
	assg_type_idlst(t->right,p2,curr_p,TLookup(t->left->varname));
	return;
	
	
	
	
}

void assg_type_idlst(struct tnode* t,struct Paramstruct** p2,struct Paramstruct** curr_p,struct Typetable* type){
	if(t==NULL){
		return;
	}
	if(t->nodetype==idlst){
		assg_type_idlst(t->left,p2,curr_p,type);
		assg_type_idlst(t->right,p2,curr_p,type);
		return;
	}
	struct Paramstruct* p=(struct Paramstruct*)malloc(sizeof(struct Paramstruct));
	p->name=(char*)malloc(strlen(t->varname)*sizeof(char));
	strcpy(p->name,t->varname);
	p->type=type;
	p->next=NULL;
	if(*p2==NULL){
		*p2=p;
		*curr_p=p;
	}else{
		(*curr_p)->next=p;
		*curr_p=p;
	}
	return;
	
}

void add_paramlst_Ltable(struct Paramstruct** p,struct Lsymbol** ls,struct Lsymbol** curr_ls){
	int curr_bind=-3;
	while(*p!=NULL){
		struct Lsymbol* l=(struct Lsymbol*)malloc(sizeof(struct Lsymbol));
		l->name=(char*)malloc(strlen((*p)->name)*sizeof(char));
		printf("IN PARAM %s\n",(*p)->name);
		strcpy(l->name,(*p)->name);
		l->type=(*p)->type;
		l->binding=curr_bind--;
		l->next=NULL;
		if(*ls==NULL){
			*ls=l;
			*curr_ls=l;
		}else{
			(*curr_ls)->next=l;
			*curr_ls=l;
		}
		*p=(*p)->next;
	}
	return;
}

void convert_lst(struct Paramstruct** pt,struct Paramstruct** curr,struct tnode* t){
	if(t==NULL){
		return;
	}
	if(t->nodetype==paramlst){
		convert_lst(pt,curr,t->left);
		convert_lst(pt,curr,t->right);
		return;
	}
	struct Paramstruct* prm=(struct Paramstruct*)malloc(sizeof(struct Paramstruct));
	prm->name=(char*)malloc(strlen(t->right->varname)*sizeof(char));
	strcpy(prm->name,t->right->varname);
	prm->type=t->left->type;
	prm->next=NULL;
	if(*pt==NULL){
		*pt=prm;
		*curr=prm;
	}else{
		(*curr)->next=prm;
		*curr=prm;
	}
	return;
}

void name_eq_args(struct Paramstruct* p1,struct Paramstruct* p2){
	if(p1==NULL && p2==NULL){
		return;
	}
	if((p1==NULL && p2!=NULL) || (p1!=NULL && p2==NULL)){
		printf("Args mismatch in declaration and definition\n");
		exit(1);
	}
	if(strcmp(p1->name,p2->name)==0 && p1->type==p2->type){
		name_eq_args(p1->next,p2->next);
	}else{
		printf("Args mismatch in declaration and definition\n");
		exit(1);
	}
	return;
}

void checktype(struct tnode* l,struct Typetable* ltype,struct tnode* r,struct Typetable* rtype){
	
	if(strcmp(ltype->name,"NULL")!=0 && strcmp(l->type->name,ltype->name)!=0){
    		
    		printf("Type mismatch!\n");
    		exit(1);
    	}
    	if(strcmp(rtype->name,"NULL")!=0 && strcmp(r->type->name,rtype->name)!=0){
    		
    		printf("Type mismatch!\n");
    		exit(1);
    	}
    	return;
}

void assign_type(struct tnode* t,struct Typetable* type){
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
		
	}else if(t->nodetype==funcdecl){
		t->left->type=type;
		
		
		install(t->left->varname,type,0);
		t->left->Gentry=lookup(t->left->varname);
		
		insert_paramlst(lookup(t->left->varname),t->right);
		return;
		
	}
	assign_type(t->left,type);
	assign_type(t->right,type);
	return;

}

void insert_paramlst(struct Gsymbol* t,struct tnode* temp){
	struct Paramstruct* p=t->paramlist;
	if(temp==NULL) return;
	while(p!=NULL && p->next!=NULL){
		p=p->next;
	}
	if(temp->nodetype==paramlst){
		insert_paramlst(t,temp->left);
		insert_paramlst(t,temp->right);
		return;
	}
	search_paramlst(t->paramlist,temp->right->varname);
	struct Paramstruct* prm=(struct Paramstruct*)malloc(sizeof(struct Paramstruct));
	prm->name=(char*)malloc(strlen(temp->right->varname)*sizeof(char));
	strcpy(prm->name,temp->right->varname);
	prm->type=temp->left->type;
	if(p==NULL){
		t->paramlist=prm;
	}else{
		p->next=prm;
		
	}
	prm->next=NULL;
	return;
}
void search_paramlst(struct Paramstruct* p,char* p_name){
	while(p!=NULL){
		if(strcmp(p->name,p_name)==0){
			printf("Same param name has been used more than once\n");
			exit(1);
		}
		p=p->next;
	}
	return;
}

void check_decl(struct Typetable* type,struct tnode* t){
	if(t==NULL){
		return;
	}
	int done=0;
	
	switch((t->nodetype)){
		case rd: 
			if(t->left->nodetype==id && LLookup(t->left->varname)==NULL && lookup(t->left->varname)==NULL){
			 	printf("ID %s is undeclared\n",t->left->varname);
			 	exit(1);
			}
			if(t->left->nodetype==arrasg && lookup(t->left->left->varname)==NULL){
				printf("Arr %s is undeclared\n",t->left->left->varname);
			 	exit(1);
			}
			check_decl(type,t->left);
			check_decl(type,t->right);
			done=1;
			break;
		case wr: 
		 	if(t->left->nodetype==id && LLookup(t->left->varname)==NULL && lookup(t->left->varname)==NULL){
			 	printf("ID %s is undeclared\n",t->left->varname);
			 	exit(1);
			}
			if(t->left->nodetype==arrasg && lookup(t->left->left->varname)==NULL){
				printf("Arr %s is undeclared\n",t->left->left->varname);
			 	exit(1);
			}
			check_decl(type,t->left);
			if(strcmp(t->left->type->name,"INT")!=0 && strcmp(t->left->type->name,"STR")!=0){
    		 	
    		 		printf("Type Mismatch!\n");
    		 		exit(1);
    		 	}
			
			done=1;
			break;
		case asg: printf("hereeeee asg\n");
			  printf("%s\n",t->left->varname);
			  printf("%s\n",t->right->varname); 
			check_decl(type,t->left);
			if(strcmp(t->left->varname,"q")==0){
				printf("Atleast here\n");
			}
			check_decl(type,t->right);
			
			if(t->left->nodetype==id && LLookup(t->left->varname)==NULL && lookup(t->left->varname)==NULL){
			 	printf("ID %s is undeclared\n",t->left->varname);
			 	exit(1);
			}
			
			if(t->right->nodetype==allocnd){
				if(t->left->nodetype!=id){
					printf("Alloc used for non-id var\n");
					exit(1);
				}
				
				if(LLookup(t->left->varname)!=NULL){
					if(strcmp(LLookup(t->left->varname)->type->name,"INT")==0 || strcmp(LLookup(t->left->varname)->type->name,"STR")==0 || strcmp(LLookup(t->left->varname)->type->name,"bool")==0 || strcmp(LLookup(t->left->varname)->type->name,"void")==0 || strcmp(LLookup(t->left->varname)->type->name,"NULL")==0){
						printf("Alloc used for non-user defined type var\n");
						exit(1);
					}
				}else if(lookup(t->left->varname)!=NULL){
					if(strcmp(lookup(t->left->varname)->type->name,"INT")==0 || strcmp(lookup(t->left->varname)->type->name,"STR")==0 || strcmp(lookup(t->left->varname)->type->name,"bool")==0 || strcmp(lookup(t->left->varname)->type->name,"void")==0 || strcmp(lookup(t->left->varname)->type->name,"NULL")==0){
						printf("Alloc used for non-user defined type var\n");
						exit(1);
					}
				}
				done=1;
				break;
			
			}
			
			if(t->right->nodetype==nullnd){
				
				
				if(strcmp(t->left->type->name,"INT")==0 || strcmp(t->left->type->name,"STR")==0 || strcmp(t->left->type->name,"bool")==0 || strcmp(t->left->type->name,"void")==0){
						printf("NULL used for non-user defined type var\n");
						exit(1);
					}
				printf("NULL CHECK DONE\n");
				done=1;
				break;
			
			}
			
			if(t->left->nodetype==id && LLookup(t->left->varname)!=NULL){
				if(strcmp(LLookup(t->left->varname)->type->name,t->right->type->name)!=0){
					printf("Type mismatch\n");
					exit(1);
				}
			}else if(t->left->nodetype==id && lookup(t->left->varname)!=NULL){
				if(strcmp(lookup(t->left->varname)->type->name,t->right->type->name)!=0){
					printf("Type mismatch\n");
					exit(1);
				}
			}
			if(t->left->nodetype==arrasg && lookup(t->left->left->varname)==NULL){
				printf("Arr %s is undeclared\n",t->left->left->varname);
			 	exit(1);
			}
			if(t->left->nodetype==fieldlst || t->left->nodetype==field || t->right->nodetype==fieldlst || t->right->nodetype==field){
				printf("enterrrring\n");
				if(strcmp(t->left->type->name,t->right->type->name)!=0){
					printf("Type mismatch\n");
					exit(1);
				}
				printf("exittring\n");
			}
			done=1;
			break;
		case retnd:printf("hereeeee retnd\n"); 
			   check_decl(type,t->left);
			   if(strcmp(t->left->type->name,type->name)!=0){
				printf("Funcn return type not matching with retstmt\n");
				exit(1);
			   }
			   done=1;
			   break;
		case id:printf("hereeeee id\n"); if(lookup(t->varname)==NULL && lsymbtable==NULL && LLookup(t->varname)==NULL){
	 				printf("Variable %s is undeclared\n",t->varname);
	 				exit(1);
	 			 }
	 			 if(LLookup(t->varname)!=NULL){
	 			 	t->Lentry=LLookup(t->varname);
	 			 	t->type=LLookup(t->varname)->type;
	 			 }else{
	 			 	t->Gentry=lookup(t->varname);
	 			 	t->type=lookup(t->varname)->type;
	 			 }
	 			 printf("exit hereeeee id\n");
	 			 done=1;
	 			 break;
	 	case ps: check_decl(type,t->left);
	 		 check_decl(type,t->right);
	 		 if(strcmp(t->left->type->name,"INT")==0 && strcmp(t->right->type->name,"INT")==0){
	 		 	t->type=TLookup("INT");
	 		 }else{
	 		 	printf("Type mismtach in PLUS\n");
	 		 	exit(1);
	 		 }
	 		 
	 		 done=1;
	 		 break;
	 	case ms: printf("Entering minus\n");
	 		 check_decl(type,t->left);
	 		 check_decl(type,t->right);
	 		 if(strcmp(t->left->type->name,"INT")==0 && strcmp(t->right->type->name,"INT")==0){
	 		 	t->type=TLookup("INT");
	 		 }else{
	 		 	printf("Type mismtach in MINUS\n");
	 		 	exit(1);
	 		 }
	 		 
	 		 done=1;
	 		 break;
	 	case ml: check_decl(type,t->left);
	 		 check_decl(type,t->right);
	 		 if(strcmp(t->left->type->name,"INT")==0 && strcmp(t->right->type->name,"INT")==0){
	 		 	t->type=TLookup("INT");
	 		 }else{
	 		 	printf("Type mismtach in MUL\n");
	 		 	exit(1);
	 		 }
	 		 
	 		 done=1;
	 		 break;
	 	case dv: check_decl(type,t->left);
	 		 check_decl(type,t->right);
	 		 if(strcmp(t->left->type->name,"INT")==0 && strcmp(t->right->type->name,"INT")==0){
	 		 	t->type=TLookup("INT");
	 		 }else{
	 		 	printf("Type mismtach in DIV\n");
	 		 	exit(1);
	 		 }
	 		 
	 		 done=1;
	 		 break;
	 	case mod: check_decl(type,t->left);
	 		 check_decl(type,t->right);
	 		 if(strcmp(t->left->type->name,"INT")!=0 || strcmp(t->right->type->name,"INT")!=0){
	 		 	printf("Type mismtach in MOD\n");
	 		 	exit(1);
	 		 }
	 		 done=1;  
	 		 break;
	 	case lt: check_decl(type,t->left);
	 		 check_decl(type,t->right);
	 		 if((strcmp(t->left->type->name,"INT")==0 && strcmp(t->right->type->name,"INT")!=0) || (strcmp(t->left->type->name,"STR")==0 && strcmp(t->right->type->name,"STR")!=0) ){
	 		 	printf("Type mismtach in LT\n");
	 		 	exit(1);
	 		 }
	 		 done=1;  
	 		 break;
	 	case le: check_decl(type,t->left);
	 		 check_decl(type,t->right);
	 		 if((strcmp(t->left->type->name,"INT")==0 && strcmp(t->right->type->name,"INT")!=0) || (strcmp(t->left->type->name,"STR")==0 && strcmp(t->right->type->name,"STR")!=0) ){
	 		 	printf("Type mismtach in LE\n");
	 		 	exit(1);
	 		 }
	 		 done=1;  
	 		 break;
	 	case ge: check_decl(type,t->left);
	 		 check_decl(type,t->right);
	 		 if((strcmp(t->left->type->name,"INT")==0 && strcmp(t->right->type->name,"INT")!=0) || (strcmp(t->left->type->name,"STR")==0 && strcmp(t->right->type->name,"STR")!=0) ){
	 		 	printf("Type mismtach in GE\n");
	 		 	exit(1);
	 		 }
	 		 done=1;  
	 		 break;
	 	case gt: check_decl(type,t->left);
	 		 check_decl(type,t->right);
	 		 if((strcmp(t->left->type->name,"INT")==0 && strcmp(t->right->type->name,"INT")!=0) || (strcmp(t->left->type->name,"STR")==0 && strcmp(t->right->type->name,"STR")!=0) ){
	 		 	printf("Type mismtach in GT\n");
	 		 	exit(1);
	 		 }
	 		 done=1;  
	 		 break;
	 	case eq: printf("hereeeee eq\n"); 
	 		 check_decl(type,t->left);
	 		 check_decl(type,t->right);
	 		 
	 		 if(t->right->nodetype==nullnd){
	 		 	if(strcmp(t->left->type->name,"INT")==0 || strcmp(t->left->type->name,"STR")==0 || strcmp(t->left->type->name,"bool")==0 || strcmp(t->left->type->name,"void")==0){
	 		 		printf("Type mismtach in EQ\n");
	 		 		exit(1);
	 		 	}
	 		 }else if(strcmp(t->left->type->name,t->right->type->name)!=0){
	 		 	printf("Type mismtach in EQ\n");
	 		 	exit(1);
	 		 
	 		 }
	 		 
	 		 done=1;  
	 		 break;
	 	case ne: printf("hereeeee ne\n");
	 		  check_decl(type,t->left);
	 		 check_decl(type,t->right);
	 		 if(t->right->nodetype==nullnd){
	 		 	if(strcmp(t->left->type->name,"INT")==0 || strcmp(t->left->type->name,"STR")==0 || strcmp(t->left->type->name,"bool")==0 || strcmp(t->left->type->name,"void")==0){
	 		 		printf("Type mismtach in NE\n");
	 		 		exit(1);
	 		 	}
	 		 }else if(strcmp(t->left->type->name,t->right->type->name)!=0){
	 		 	printf("Type mismtach in NE\n");
	 		 	exit(1);
	 		 
	 		 }
	 		 done=1;  
	 		 break;
	 	case andnd: check_decl(type,t->left);
	 		 check_decl(type,t->right);
	 		 if(strcmp(t->left->type->name,"bool")!=0 || strcmp(t->right->type->name,"bool")!=0){
	 		 	printf("Type mismtach in andnd\n");
	 		 	exit(1);
	 		 }
	 		 done=1;  
	 		 break;
	 	case fieldlst:check_decl(type,t->left);
	 		      struct Fieldlist* f1=FLookup(t->left->type,t->right->varname);
	 		      if(f1==NULL){
	 		      	printf("Member field %s is not defined\n",t->right->varname);
	 		      	exit(1);
	 		      }
	 		      t->type=f1->type;
	 		      done=1;
	 		      break;
	 	
	 	case field:check_decl(type,t->left);
	 		      struct Fieldlist* f2=FLookup(t->left->type,t->right->varname);
	 		      if(f2==NULL){
	 		      	printf("Member field %s is not defined\n",t->right->varname);
	 		      	exit(1);
	 		      }
	 		      t->type=f2->type;
	 		      done=1;
	 		      break;
	 	case fieldval: check_decl(type,t->left);
	 		      
	 		      t->type=t->left->type;
	 		      done=1;
	 		      break;
	 	case freend: check_decl(type,t->left);
	 		     if(strcmp(t->left->type->name,"INT")==0 || strcmp(t->left->type->name,"STR")==0 || strcmp(t->left->type->name,"bool")==0 || strcmp(t->left->type->name,"void")==0 || strcmp(t->left->type->name,"NULL")==0){
	 		     	printf("Trying to free a non-user defined type var\n");
	 		     	exit(1);
	 		     }
	 		     done=1;
	 		     break;
	 	case fncall: struct Lsymbol* tt=lsymbtable;
	 		     printf("JUST BEFORE fncall table..................");
	 		     while(tt!=NULL){
	 		     	printf("%s %s\n",tt->name,tt->type->name);
	 		     	tt=tt->next;
	 		     }struct Paramstruct* par1=(struct Paramstruct*)malloc(sizeof(struct Paramstruct));
        	     struct Paramstruct* par2=(struct Paramstruct*)malloc(sizeof(struct Paramstruct));
        	     par1=NULL;
        	     par2=NULL;
        	     
        	     
        	     convert_arglst(t->right,&par1,&par2,type);
        	     printf("Entring fncall\n");
        	     
        	     
        	     par2=lookup(t->left->varname)->paramlist;
        	     
        	     if(par2==NULL){
        	     	printf("par2 null\n");
        	     }
        	     while(par1!=NULL && par2!=NULL){
        	     	if(strcmp(par1->type->name,par2->type->name)!=0){
        	     		printf("%s %s\n",par1->type->name,par2->type->name);
        	     		printf("Arg type mismatch in funcn call of %s\n",t->left->varname);
        	     		exit(1);
        	     	}
        	     	par1=par1->next;
        	     	par2=par2->next;
        	     }
        	     if((par1==NULL && par2!=NULL) || (par1!=NULL && par2==NULL)){
        	     	printf("Incorrect number of args in funcn call of %s\n",t->left->varname);
        	     	exit(1);
        	     }
        	     done=1;
        	     break;
	 	
	}
	if(done==0){
		check_decl(type,t->left);
		check_decl(type,t->right);
	}
	
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

struct Lsymbol* LLookup(char* name){
	struct Lsymbol* t=lsymbtable;
	
	while(t!=NULL){
		if(strcmp(t->name,name)==0){
			return t;
		}
		t=t->next;
	}
	return t;
}

void install(char* name,struct Typetable* type,int size){
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
	s->paramlist=NULL;
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
     	fprintf(fp1,"CALL F0\n");
     	
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
     	
     	fprintf(fp1,"MOV R4 , \"Alloc\"\n");
    	fprintf(fp1,"PUSH R4\n");
    	fprintf(fp1,"MOV R4 ,8\n");
    	fprintf(fp1,"PUSH R4\n");
    	fprintf(fp1,"PUSH R4\n");
    	fprintf(fp1,"PUSH R4\n");
    	fprintf(fp1,"PUSH R4\n");
    	fprintf(fp1,"CALL 0\n");
    	fprintf(fp1,"POP R5\n");
    	fprintf(fp1,"POP R4\n");
    	fprintf(fp1,"POP R4\n");
    	fprintf(fp1,"POP R4\n");
    	fprintf(fp1,"POP R4\n");
     	fprintf(fp1,"RET\n");
     	
     	fprintf(fp1,"MOV R4 , \"Free\"\n");
    	fprintf(fp1,"PUSH R4\n");
    	fprintf(fp1,"MOV R4 ,R1\n");
    	fprintf(fp1,"PUSH R4\n");
    	fprintf(fp1,"PUSH R4\n");
    	fprintf(fp1,"PUSH R4\n");
    	fprintf(fp1,"PUSH R4\n");
    	fprintf(fp1,"CALL 0\n");
    	fprintf(fp1,"POP R5\n");
    	fprintf(fp1,"POP R4\n");
    	fprintf(fp1,"POP R4\n");
    	fprintf(fp1,"POP R4\n");
    	fprintf(fp1,"POP R4\n");
     	fprintf(fp1,"RET\n");
     	
     	fprintf(fp1,"MOV R4 , \"Heapset\"\n");
    	fprintf(fp1,"PUSH R4\n");
    	fprintf(fp1,"PUSH R4\n");
    	fprintf(fp1,"PUSH R4\n");
    	fprintf(fp1,"PUSH R4\n");
    	fprintf(fp1,"PUSH R4\n");
    	fprintf(fp1,"CALL 0\n");
    	fprintf(fp1,"POP R19\n");
    	fprintf(fp1,"POP R4\n");
    	fprintf(fp1,"POP R4\n");
    	fprintf(fp1,"POP R4\n");
    	fprintf(fp1,"POP R4\n");
     	fprintf(fp1,"RET\n");
	
     	printf("done till here\n");
     	return;
}

void destroy_lsymbtable(){
	while(lsymbtable!=NULL){
		struct Lsymbol* t=lsymbtable->next;
		free(lsymbtable);
		lsymbtable=t;
	}

}

int code_gen(struct tnode* t){
	if(t==NULL){
		return 0;
	}
	
	int i,j;
	int l1,l2;
	int temp_use;
	int field_pos;
	struct Lsymbol* lf=NULL;
	struct Gsymbol* gf=NULL;
	struct Paramstruct* pf=NULL;
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
                	  	if(LLookup(t->left->varname)!=NULL){
                	        	
                	        	j=get_reg();
                	  		fprintf(fp1,"MOV R%d,BP\n",j);
                	  		fprintf(fp1,"ADD R%d,%d\n",j,LLookup(t->left->varname)->binding);
                	  		fprintf(fp1,"MOV R1,R%d\n",j);
                	  		free_reg();
                	        }else{
                	        	fprintf(fp1,"MOV R1,%d\n",t->left->Gentry->binding);
                	        }
                	  	
                	  }else if(t->left->nodetype==arrasg){
                	  	fprintf(fp1,"MOV R1,R%d\n",i);
                	  }
                	  free_reg();
                	  for(int e=0;e<curr_reg;e++){
                		fprintf(fp1,"PUSH R%d\n",e);
                	  }
                	  fprintf(fp1,"CALL 2084\n");
                	  for(int e=curr_reg-1;e>=0;e--){
                		fprintf(fp1,"POP R%d\n",e);
                	  }
                	  return 30;
                          break;
                case wr : i=code_gen(t->left);
                	  fprintf(fp1,"MOV R1,R%d\n",i);
                	  free_reg();
                	  for(int e=0;e<curr_reg;e++){
                		fprintf(fp1,"PUSH R%d\n",e);
                	  }
                	  fprintf(fp1,"CALL 2114\n");
                	  for(int e=curr_reg-1;e>=0;e--){
                		fprintf(fp1,"POP R%d\n",e);
                	  }
                	  return 30;
                          break;
                case allocnd: for(int e=0;e<curr_reg;e++){
                		fprintf(fp1,"PUSH R%d\n",e);
                	     }
                	     fprintf(fp1,"CALL 2144\n");
                	     i=get_reg();
                	     fprintf(fp1,"MOV R%d,R5\n",i);
                	     for(int e=curr_reg-2;e>=0;e--){
                		fprintf(fp1,"POP R%d\n",e);
                	    }
                	    return i;
                	    break;
                case freend: i=code_gen(t->left);
                	     fprintf(fp1,"MOV R1,R%d\n",i);
                	     free_reg();
                	     for(int e=0;e<curr_reg;e++){
                		fprintf(fp1,"PUSH R%d\n",e);
                	     }
                	     fprintf(fp1,"CALL 2172\n");
                	     for(int e=curr_reg-1;e>=0;e--){
                		fprintf(fp1,"POP R%d\n",e);
                	     }
                	     return 30;
                	     break;
                case initnd: for(int e=0;e<curr_reg;e++){
                		fprintf(fp1,"PUSH R%d\n",e);
                	     }
                	     fprintf(fp1,"CALL 2200\n");
                	     i=get_reg();
                	     fprintf(fp1,"MOV R%d,R19\n",i);
                	     for(int e=curr_reg-2;e>=0;e--){
                		fprintf(fp1,"POP R%d\n",e);
                	     }
                	     return i;
                	     break;    
                case asg : printf("Inside asg\n");
                	   i=code_gen(t->right);
                	   
                	   
                	   if(t->left->nodetype==arrasg){
                	   	j=code_gen(t->left);
                	   	fprintf(fp1,"MOV [R%d],R%d\n",j,i);
                	   	if(j!=30)
                	   		free_reg();
                	   }else if(t->left->nodetype==id){
                	        int b;
                	        if(LLookup(t->left->varname)!=NULL){
                	        	b=LLookup(t->left->varname)->binding;
                	        	j=get_reg();
                	  		fprintf(fp1,"MOV R%d,BP\n",j);
                	  		fprintf(fp1,"ADD R%d,%d\n",j,b);
                	  		fprintf(fp1,"MOV [R%d],R%d\n",j,i);
                	  		free_reg();
                	        }else{
                	        	b=t->left->Gentry->binding;
                	        	fprintf(fp1,"MOV [%d],R%d\n",b,i);
                	        }
                	   	
                	   }else if(t->left->nodetype==field || t->left->nodetype==fieldlst){
                	   	j=code_gen(t->left);
                	   	fprintf(fp1,"MOV [R%d],R%d\n",j,i);
                	   	free_reg();
                	   }
                	   
                	   
                	  
                	   if(i!=30)
                	   	free_reg();
                	   return 30;
                           break;
                case field: i=code_gen(t->left);
                	    field_pos=0;
                	    struct Fieldlist* ff=t->left->type->fields;
                	    while(ff!=NULL){
                	    	if(strcmp(ff->name,t->right->varname)==0){
                	    		break;
                	    	}
                	    	field_pos++;
                	    	ff=ff->next;
                	    }
                	    fprintf(fp1,"ADD R%d,%d\n",i,field_pos);
                	    return i;
                	    break;
                case fieldlst: i=code_gen(t->left);
                	    field_pos=0;
                	    struct Fieldlist* ff1=t->left->type->fields;
                	    while(ff1!=NULL){
                	    	if(strcmp(ff1->name,t->right->varname)==0){
                	    		break;
                	    	}
                	    	field_pos++;
                	    	ff1=ff1->next;
                	    }
                	    fprintf(fp1,"ADD R%d,%d\n",i,field_pos);
                	    return i;
                	    break;
                case fieldval: i=code_gen(t->left);
                	    
                	    fprintf(fp1,"MOV R%d,[R%d]\n",i,i);
                	    return i;
                	    break;
                case nullnd: i=get_reg();
                	     fprintf(fp1,"MOV R%d,-1\n",i);
                	     return i;
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
                	  
                	  int v;
                	  
                	  struct Lsymbol* y=LLookup(t->varname);
                	
                	  
                	  if(y!=NULL){
                	        
                	  	v=y->binding;
                	  	j=get_reg();
                	  	fprintf(fp1,"MOV R%d,BP\n",j);
                	  	fprintf(fp1,"ADD R%d,%d\n",j,v);
                	  	fprintf(fp1,"MOV R%d,[R%d]\n",i,j);
                	  	free_reg();
                	  }else{
                	  	v=t->Gentry->binding;
                	  	fprintf(fp1,"MOV R%d,[%d]\n",i,v);
                	  }
                	  
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
                case andnd: i=code_gen(t->left);
               	 	    l1=get_label();
               	 	    l2=get_label();
                	    fprintf(fp1,"JZ R%d,L%d\n",i,l1);
                	    j=code_gen(t->right);
                	    fprintf(fp1,"JZ R%d,L%d\n",j,l1);
                	    free_reg();
                	    free_reg();
                	    i=get_reg();
                	    fprintf(fp1,"MOV R%d,1\n",i);
                	    fprintf(fp1,"JMP L%d\n",l2);
                	    fprintf(fp1,"L%d:\n",l1);
                	    fprintf(fp1,"MOV R%d,0\n",i);
                	    fprintf(fp1,"L%d:\n",l2);
                	    return i;
                	    break;
                case ge : i=code_gen(t->left);
                	  j=code_gen(t->right);
                	  fprintf(fp1,"GE R%d,R%d\n",i,j);
                	  free_reg();
                	  return i;
                	  break;
                case ne : if(t->left->nodetype==nullnd || t->right->nodetype==nullnd){
                	  	if(t->left->nodetype==nullnd){
                	  		i=code_gen(t->right);
                	  		j=get_reg();
                	  		fprintf(fp1,"MOV R%d,-1\n",j);
                	  		fprintf(fp1,"NE R%d,R%d\n",i,j);
                	  		free_reg();
                	  	}else{
                	  		i=code_gen(t->left);
                	  		j=get_reg();
                	  		fprintf(fp1,"MOV R%d,-1\n",j);
                	  		fprintf(fp1,"NE R%d,R%d\n",i,j);
                	  		free_reg();
                	  	}
                	  }else{
                	  	i=code_gen(t->left);
                	  	printf("NE CHECK\n");
                	  	j=code_gen(t->right);
                	  	fprintf(fp1,"NE R%d,R%d\n",i,j);
                	  	free_reg();
                	  } 
                	  
                	  
                	  return i;
                	  break;
                case eq : 
                	  if(t->left->nodetype==nullnd || t->right->nodetype==nullnd){
                	  	if(t->left->nodetype==nullnd){
                	  		i=code_gen(t->right);
                	  		j=get_reg();
                	  		fprintf(fp1,"MOV R%d,-1\n",j);
                	  		fprintf(fp1,"EQ R%d,R%d\n",i,j);
                	  		free_reg();
                	  	}else{
                	  		i=code_gen(t->left);
                	  		fprintf(fp1,"BRKP\n");
                	  		j=get_reg();
                	  		fprintf(fp1,"MOV R%d,-1\n",j);
                	  		fprintf(fp1,"EQ R%d,R%d\n",i,j);
                	  		free_reg();
                	  	}
                	  }else{
                	  	i=code_gen(t->left);
                	  	printf("EQ CHECK\n");
                	  	j=code_gen(t->right);
                	  	fprintf(fp1,"EQ R%d,R%d\n",i,j);
                	  	free_reg();
                	  } 
                	  
                	  
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
                case fncall:printf("FN CALL\n");
                	    temp_use=curr_reg;
                	    for(int e=0;e<curr_reg;e++){
                		fprintf(fp1,"PUSH R%d\n",e);
                	    }
                	    curr_reg=0;
                	    int no_args=0;
                	    gf=lookup(t->left->varname);
                	    pf=gf->paramlist;
                	    while(pf!=NULL){
                	    	no_args++;
                	    	pf=pf->next;
                	    }
                	    eval_and_push(t->right);
                	    fprintf(fp1,"PUSH R0\n");
                	    fprintf(fp1,"CALL F%d\n",gf->flabel);
                	    
                	    curr_reg=temp_use;
                	    i=get_reg();
                	    fprintf(fp1,"MOV R%d,[SP]\n",i);
                	    
                	    fprintf(fp1,"POP R19\n");
                	    for(int d=0;d<no_args;d++){
                	    	fprintf(fp1,"POP R19\n");
                	    }
                	    for(int e=curr_reg-2;e>=0;e--){
                		fprintf(fp1,"POP R%d\n",e);
                	    }
                	    return i;
                	    break;
                
                case fndef: fprintf(fp1,"F%d:\n",t->Gentry->flabel);
                	    fprintf(fp1,"PUSH BP\n");
                	    fprintf(fp1,"MOV BP,SP\n");
                	    
                	    lf=lsymbtable;
                	    fprintf(fp1,"MOV R19,-1\n");
                	    while(lf!=NULL){
                	    	if(lf->binding>0){
                	    		fprintf(fp1,"PUSH R19\n");
                	    	}
                	    	lf=lf->next;
                	    }
                	    
                	    printf("TILL HERE\n");
			    i=code_gen(t->right->right->right);
			    
			    if(i!=30){
			    	free_reg();
			    }
                	    return 30;
                	    break;
                
                case mainnd:fprintf(fp1,"F0:\n");
                	    fprintf(fp1,"MOV BP,SP\n");
              		    curr_main=1;
                	    lf=lsymbtable;
                	    fprintf(fp1,"MOV R19,-1\n");
                	    while(lf!=NULL){
                	    	if(lf->binding>0){
                	    		fprintf(fp1,"PUSH R19\n");
                	    	}
                	    	lf=lf->next;
                	    }
			    i=code_gen(t->right);
			    if(i!=30){
			    	free_reg();
			    }
			    curr_main=0;
                	    return 30;
                	    break;
                
                
                case retnd: i=get_reg();
                	    lf=lsymbtable;
                	    printf("IS REACH?\n");
                	    while(lf!=NULL){
                	    	if((lf->binding)>0){
                	    		fprintf(fp1,"POP R%d\n",i);
                	    	}
                	    	lf=lf->next;
                	    }
                	    
                	    free_reg();
                	    if(curr_main==0){
                	    	i=code_gen(t->left);
                	    	j=get_reg();
                	    	fprintf(fp1,"MOV R%d,BP\n",j);
                	    	fprintf(fp1,"SUB R%d,2\n",j);
                	    	fprintf(fp1,"MOV [R%d],R%d\n",j,i);
                	    	free_reg();
                	    	free_reg();
                	    
                	    	fprintf(fp1,"POP BP\n");
                	    	
                	    }
                	    
                	    fprintf(fp1,"RET\n");
                	    
                	    return 30;
                	    break;
                 
                	    
                
                	  
                	  
                
	}
	return 30;
}

void eval_and_push(struct tnode* t){
	if(t==NULL){
		return;
	}
	if(t->nodetype!=arglst){
		int i=code_gen(t);
		fprintf(fp1,"PUSH R%d\n",i);
		if(i!=30){
			free_reg();
		}
	}else{
		int i=code_gen(t->right);
		fprintf(fp1,"PUSH R%d\n",i);
		if(i!=30){
			free_reg();
		}
		eval_and_push(t->left);
	}
	return;
	
	
}

