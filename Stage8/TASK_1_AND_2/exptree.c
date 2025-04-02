int curr_reg=0;
int curr_label=0;
int inside_while=0;
int curr_jump_break=0,curr_jump_cont=0;
FILE* fp1;
int curr_SP=4096;
int curr_flabel=1;
int curr_main=0;
int curr_findex=0;
int temp_use[1000];
int curr_temp_use=0;
int curr_classindex=0;
int curr_fpos=0;
struct Gsymbol* symbtable=NULL;
struct Lsymbol* lsymbtable=NULL;
struct Typetable* typetable=NULL; 
struct Classtable* classtable=NULL;

struct Classtable* curr_class=NULL;

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
       		   int gg=add_paramlst_Ltable(&(p100),&ls,&curr_ls);
        	
        	   
        	  
        	   struct Paramstruct* p2=(struct Paramstruct*)malloc(sizeof(struct Paramstruct)); 
        	   p2=NULL;
        	   struct Paramstruct* curr_p=(struct Paramstruct*)malloc(sizeof(struct Paramstruct)); 
        	   curr_p=NULL;
        	   convert_ldecl(temp->right->right->left,&p2,&curr_p);
        	   
        	   add_lvars_Ltable(&p2,&ls,&curr_ls);
        	  		  
        	  
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
        case cnamend: if(temp->right==NULL){
        	      		CInstall(temp->left->varname,"");
        	      		
        	      }else{
        	      	if(CLookup(temp->right->varname)==NULL){
        	      		printf("Parent class is not declared yet\n");
        	      		exit(1);
        	      	}
        	      	CInstall(temp->left->varname,temp->right->varname);;
        	      }
        	      break;
         case classdef:struct Classtable* class=CLookup(temp->left->left->varname);
         
         	       //Code for inheritance to copy parents fields and methods needs to be added in Stage 8
         	       
         	       
         	       
         	       if(temp->right->left!=NULL){
         	       
         	       		struct Fieldlist* fields=(struct Fieldlist*)malloc(sizeof(struct Fieldlist));
         	       		fields=NULL;
         	       		convert_fldlst_class(temp->right->left,temp->left->left->varname,&fields);
         	       		
         	       		class->fieldcount=(class->fieldcount)+count_fields(fields);
         	       		struct Fieldlist* curr_fields=(struct Fieldlist*)malloc(sizeof(struct Fieldlist));
         	       		curr_fields=class->memberfield;
         	       		if(curr_fields==NULL){
         	       			printf("curr_fields null here......................................................\n");
         	       			
         	       			class->memberfield=fields;
         	       			
         	       			
         	       		}else{
         	       			while(curr_fields->next!=NULL){
         	       				curr_fields=curr_fields->next;
         	       			}
         	       			curr_fields->next=fields;
         	       		}
         	       		curr_fields=class->memberfield;
         	       		struct Fieldlist* temp_fields=curr_fields->next;
         	       		
         	       		while(curr_fields!=NULL){
         	       		
         	       		temp_fields=curr_fields->next;
         	       		if(temp_fields==NULL){
         	       			printf("YES NULL\n");
         	       		}
         	       		printf("here???\n");
         	       			while(temp_fields!=NULL){
         	       				if(strcmp(curr_fields->name,temp_fields->name)==0){
         	       					printf("Two fields of same name not allowed\n");
         	       					exit(1);
         	       				}
         	       				temp_fields=temp_fields->next;
         	       			}
         	       			curr_fields=curr_fields->next;
         	       		}
         	       		
         	       		
         	       }
         	       
         	       if(temp->right->right->left!=NULL){
         	       
         	       		curr_fpos=class->methodcount;
         	       		struct Paramstruct* func_names=(struct Paramstruct*)malloc(sizeof(struct Paramstruct));
         	       		func_names=NULL;
         	       		convert_methods_params(temp->right->right->left,&func_names);
         	       		
         	       		add_funcdecl_class(temp->right->right->left,class);
         	       		class->methodcount=curr_fpos;
         	       }
         	       
         	       if(curr_findex>8 || class->methodcount>8){
         	       		printf("More than 8 fields/methods are declared for a class\n");
         	       		exit(1);
         	       }
         	       break;
         	      
         	       
         	       
        	      
    }
    return temp;
}



void add_funcdefs_class(struct tnode* t){
	if(t==NULL){
		return;
	}
	if(t->nodetype==classdeflst){
		add_funcdefs_class(t->left);
		add_funcdefs_class(t->right);
		return;
	}
	struct Classtable* class=CLookup(t->left->left->varname);
	if(t->right->right->right!=NULL){
		add_mdefs_class(t->right->right->right,class);
	}
	return;
	
}

void add_mdefs_class(struct tnode* t,struct Classtable* class){
	
	if(t==NULL){
		return;
	}
	if(t->nodetype==mdeflst){
		add_mdefs_class(t->left,class);
		add_mdefs_class(t->right,class);
		return;
	}
	
	if(MLookup(class,t->right->left->varname)==NULL){
		printf("Func is not declared/inherited\n");
		exit(1);
	}
	
	if(TLookup(t->left->varname)==NULL){
		printf("Type declared in mdef is not known type\n");
		exit(1);
	}
	
	struct Memberfunclist* memfunc=MLookup(class,t->right->left->varname);
	
	if(strcmp(memfunc->type->name,TLookup(t->left->varname)->name)!=0){
       		printf("Type mismatch in funcn declaration and definition\n");
       		exit(1);
        }
        
        
        if((t->right->right->left==NULL && memfunc->paramlist!=NULL) || (t->right->right->left!=NULL && memfunc->paramlist==NULL) ){
       		printf("Arguments mismatch in declaration and definition\n");
       		exit(1);
        }
        t->ctype=class;
        struct Paramstruct* pt=(struct Paramstruct*)malloc(sizeof(struct Paramstruct));
        pt=NULL;
       	struct Paramstruct* curr=(struct Paramstruct*)malloc(sizeof(struct Paramstruct)); 
       	curr=NULL;
       	convert_lst(&pt,&curr,t->right->right->left);
       	name_eq_args(memfunc->paramlist,pt);
	
	struct Lsymbol* ls=(struct Lsymbol*)malloc(sizeof(struct Lsymbol)); 
       	ls=NULL;
       	struct Lsymbol* curr_ls=(struct Lsymbol*)malloc(sizeof(struct Lsymbol));
       	curr_ls=NULL;
       		   
       	struct Paramstruct* p100=memfunc->paramlist;
       	int curr_bind=add_paramlst_Ltable(&(p100),&ls,&curr_ls);
       	struct Lsymbol* l1=(struct Lsymbol*)malloc(sizeof(struct Lsymbol));
       	
       	char mem_field[10]="mem_field";
	l1->name=(char*)malloc(strlen(mem_field)*sizeof(char));
	
	strcpy(l1->name,mem_field);
	l1->type=TLookup("INT");
	l1->binding=curr_bind--;
	l1->next=NULL;
	if(ls==NULL){
		ls=l1;
		curr_ls=l1;
	}else{
		curr_ls->next=l1;
		curr_ls=l1;
	}
       	struct Lsymbol* l2=(struct Lsymbol*)malloc(sizeof(struct Lsymbol));
       	
       	char met_field[10]="met_field";
	l2->name=(char*)malloc(strlen(met_field)*sizeof(char));
	
	strcpy(l2->name,met_field);
	l2->type=TLookup("INT");
	l2->binding=curr_bind--;
	l2->next=NULL;
	curr_ls->next=l2;
	curr_ls=l2;
	
	struct Paramstruct* p2=(struct Paramstruct*)malloc(sizeof(struct Paramstruct)); 
        p2=NULL;
        struct Paramstruct* curr_p=(struct Paramstruct*)malloc(sizeof(struct Paramstruct)); 
        curr_p=NULL;
        convert_ldecl(t->right->right->right->left,&p2,&curr_p);
        	   
        add_lvars_Ltable(&p2,&ls,&curr_ls);
	
	lsymbtable=ls;
	
	curr_class=class;
	
	check_decl(TLookup(t->left->varname),t->right->right->right->right);
	printf("Entering mdefs %s %s\n",class->name,memfunc->name);
	code_gen(t);
	curr_class=NULL;
	destroy_lsymbtable();
}

void convert_methods_params(struct tnode* t,struct Paramstruct** p){
	if(t==NULL){
		return;
	}
	if(t->nodetype==mdeclst){
		convert_methods_params(t->left,p);
		convert_methods_params(t->right,p);
		return;
	}
	
	struct Paramstruct* p1=(struct Paramstruct*)malloc(sizeof(struct Paramstruct));
	p1->name=(char*)malloc(sizeof(char)*strlen(t->right->left->varname));
	strcpy(p1->name,t->right->left->varname);
	
	p1->type=TLookup(t->left->varname);
	p1->next=NULL;
	struct Paramstruct* temp=(*p);
	
	if(temp==NULL){
		
		(*p)=p1;
	}else{
		while(temp->next!=NULL){
			if(strcmp(temp->name,p1->name)==0){
				printf("Two method declarations with same name not allowed\n");
				exit(1);
			}
			temp=temp->next;
		}
		temp->next=p1;
	}
	
	return;
}

void add_funcdecl_class(struct tnode* t,struct Classtable* class){
	if(t==NULL){
		return;
	}
	if(t->nodetype==mdeclst){
		add_funcdecl_class(t->left,class);
		add_funcdecl_class(t->right,class);
		return;
	}
	
	
	
	if(MLookup(class,t->right->left->varname)!=NULL){
		printf("HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH\n");
		printf("ENTERING HERE %s\n",class->name);
		//To be added for inheritance.
		struct Memberfunclist* me=MLookup(class,t->right->left->varname);
		me->flabel=curr_flabel++;
		struct Paramstruct* pt=(struct Paramstruct*)malloc(sizeof(struct Paramstruct));
       		pt=NULL;
       		struct Paramstruct* curr=(struct Paramstruct*)malloc(sizeof(struct Paramstruct)); 
       		curr=NULL;
       		convert_lst_class(&pt,&curr,t->right->right);
       		struct Paramstruct* prev=me->paramlist;
       		while(prev!=NULL && pt!=NULL){
       			if(strcmp(prev->name,pt->name)!=0){
       				printf("Different args for method decl of child class\n");
       				exit(1); 
       			}
       			if(prev->type!= NULL && pt->type!=NULL && strcmp(prev->type->name,pt->type->name)!=0){
       				printf("Different type of args for method decl of child class\n");
       				exit(1); 
       			}
       			prev=prev->next;
       			pt=pt->next;
       		}
       		if((prev==NULL && pt!=NULL) || (prev!=NULL && pt==NULL)){
       			printf("incorrect number of args while fun overriding\n");
       			exit(1);
       		}
		
	}else{
		struct Memberfunclist* mflst=class->vfunptr;
		struct Memberfunclist* temp=(struct Memberfunclist*)malloc(sizeof(struct Memberfunclist));
		temp->name=(char*)malloc(sizeof(char)*strlen(t->right->left->varname));
		strcpy(temp->name,t->right->left->varname);
		temp->type=TLookup(t->left->varname);
		temp->funcposition=curr_fpos++;
		temp->flabel=curr_flabel++;
		temp->next=NULL;
		
		if(t->right->right!=NULL){
			struct Paramstruct* pt=(struct Paramstruct*)malloc(sizeof(struct Paramstruct));
       			pt=NULL;
       			struct Paramstruct* curr=(struct Paramstruct*)malloc(sizeof(struct Paramstruct)); 
       			curr=NULL;
       			convert_lst_class(&pt,&curr,t->right->right);
       			temp->paramlist=pt;
		}else{
			temp->paramlist=NULL;
		}
		
		
		if(mflst!=NULL){
			while(mflst->next!=NULL){
				mflst=mflst->next;
			}
			mflst->next=temp;
		}else{
			class->vfunptr=temp;
		}
		
		
	}
	return;
}

struct Memberfunclist* MLookup (struct Classtable* class,char* name){
	struct Memberfunclist* mflst=class->vfunptr;
	while(mflst!=NULL){
		if(strcmp(name,mflst->name)==0){
			return mflst;
		}
		mflst=mflst->next;
	}
	return NULL;

}

struct Fieldlist* Flookup(struct Classtable* class,char* name){
	printf("Reaching Flookup\n");
	struct Fieldlist* flst=class->memberfield;
	printf("Reaching Flookup\n");
	while(flst!=NULL){
		printf("afsdfs\n");
		if(strcmp(name,flst->name)==0){
			return flst;
		}
		flst=flst->next;
	}
	return NULL;
}

struct Classtable* CInstall(char *name,char* parent){
    struct Classtable* temp = (struct Classtable*)malloc(sizeof(struct Classtable));

    if ( CLookup(name) != NULL ){
    	printf("Class already exists: %s\n", name);
    	exit(1);
    }

    temp->name = (char*)malloc(sizeof(char)*strlen(name));
    strcpy(temp->name, name);
    temp->memberfield = NULL;      
    temp->vfunptr = NULL;
    temp->parentptr = CLookup(parent);
    temp->fieldcount=0;
    temp->methodcount = 0; 
    if(CLookup(parent)!=NULL){
    	printf("RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR\n");
    	printf("%s\n",name);
    	struct Fieldlist* tempf=(struct Fieldlist*)malloc(sizeof(struct Fieldlist));
    	tempf=CLookup(parent)->memberfield;
    	
    	struct Fieldlist* newf=(struct Fieldlist*)malloc(sizeof(struct Fieldlist));
    	newf=NULL;
    	struct Fieldlist* currf=(struct Fieldlist*)malloc(sizeof(struct Fieldlist));
    	currf=NULL;
    	while(tempf!=NULL){
    	
    		struct Fieldlist* ff=(struct Fieldlist*)malloc(sizeof(struct Fieldlist));
    		ff->type=tempf->type;
    		ff->ctype=tempf->ctype;
    		ff->fieldindex=tempf->fieldindex;
    		ff->next=NULL;
    		ff->name=(char*)malloc(strlen(tempf->name)*sizeof(char));
    		strcpy(ff->name,tempf->name);
    		if(newf==NULL){
    			newf=ff;
    			currf=ff;
    		}else{
    			currf->next=ff;
    			currf=ff;
    		}
    		tempf=tempf->next;
    		temp->fieldcount = (temp->fieldcount) + 1;
    	}
    	temp->memberfield=newf;
    	struct Memberfunclist* tempm=CLookup(parent)->vfunptr;
    	struct Memberfunclist* newm=(struct Memberfunclist*)malloc(sizeof(struct Memberfunclist));
    	newm=NULL;
    	struct Memberfunclist* currm=(struct Memberfunclist*)malloc(sizeof(struct Memberfunclist));
    	currm=NULL;
    	while(tempm!=NULL){
    		struct Memberfunclist* tt=(struct Memberfunclist*)malloc(sizeof(struct Memberfunclist));
    		tt->type=tempm->type;
    		tt->funcposition=tempm->funcposition;
    		tt->flabel=tempm->flabel;
    		tt->next=NULL;
    		tt->paramlist=tempm->paramlist;
    		tt->name=(char*)malloc(strlen(tempm->name)*sizeof(char));
    		strcpy(tt->name,tempm->name);
    		if(newm==NULL){
    			newm=tt;
    			currm=tt;
    		}else{
    			currm->next=tt;
    			currm=tt;
    		}
    		tempm=tempm->next;
    		temp->methodcount = (temp->methodcount) + 1;  
    	}
    	temp->vfunptr=newm;
    	
    }
    temp->class_index = curr_classindex++;
                         
                      
    temp->next = NULL;
    
    //For virt table
    curr_SP+=8;
    if ( classtable == NULL ){
    	classtable = temp;
    }else{
        struct Classtable* t = classtable;
        while(t->next!=NULL){
        	t=t->next;
        }
        t->next = temp;
    }

}

struct Classtable* CLookup(char *name){
	struct Classtable* temp=classtable;
	while(temp!=NULL){
		if(strcmp(name,temp->name)==0){
			return temp;
		}
		temp=temp->next;
	}
	return NULL;
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

struct Fieldlist* convert_fldlst_class(struct tnode* t,char* name,struct Fieldlist** f){
	
	struct Fieldlist* temp=CLookup(name)->memberfield;
	printf("-------------------------------------------------------------------------------------------------\n");
	if(temp==NULL){
		curr_findex=0;
	}else{
		while(temp->next!=NULL){
			temp=temp->next;
		}
		if(temp->type==NULL){
			curr_findex=temp->fieldindex+2;
		}else{
			curr_findex=temp->fieldindex+1;
		}
	}
	printf("Calling here\n");
	convert_flds_class(f,t,name);
	
	return *f;

}

void convert_flds_class(struct Fieldlist** f,struct tnode* t,char* name){
	if(t==NULL){
		return;
	}
	if(t->nodetype==fielddecl){
		struct Fieldlist* temp=(struct Fieldlist*)malloc(sizeof(struct Fieldlist));
		temp->name=(char*)malloc(strlen(t->right->varname)*sizeof(char));
		strcpy(temp->name,t->right->varname);
		printf("FIeld name %s-------------------------------------------------------------------------\n",t->right->varname);
		if(TLookup(t->left->varname)!=NULL){
			temp->type=TLookup(t->left->varname);
		}else{
			if(CLookup(t->left->varname)==NULL){
			
				printf("Member field in class is of prev undeclared type in %s\n",t->left->varname);
				exit(1);
			}
			temp->ctype=CLookup(t->left->varname);
		}
		temp->fieldindex=curr_findex;
		if(temp->type==NULL){
			
			curr_findex+=2;
		}else{
			curr_findex++;
		}
		
		temp->next=NULL;
		
		struct Fieldlist* c=(*f);
		if((*f)==NULL){
			*f=temp;
		}else{
			while(c->next!=NULL){
				c=c->next;
			}
			c->next=temp;
		}
		return;
	}
	convert_flds_class(f,t->left,name);
	convert_flds_class(f,t->right,name);
	return;
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

int add_paramlst_Ltable(struct Paramstruct** p,struct Lsymbol** ls,struct Lsymbol** curr_ls){
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
	return curr_bind;
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

void convert_lst_class(struct Paramstruct** pt,struct Paramstruct** curr,struct tnode* t){
	if(t==NULL){
		return;
	}
	if(t->nodetype==paramlst){
		convert_lst_class(pt,curr,t->left);
		convert_lst_class(pt,curr,t->right);
		return;
	}
	struct Paramstruct* prm=(struct Paramstruct*)malloc(sizeof(struct Paramstruct));
	prm->name=(char*)malloc(strlen(t->right->varname)*sizeof(char));
	strcpy(prm->name,t->right->varname);
	//If needed change this if params can be smthg else other than int /str
	prm->type=TLookup(t->left->varname);
	prm->next=NULL;
	if(*pt==NULL){
		*pt=prm;
		*curr=prm;
	}else{
		struct Paramstruct* tt=*pt;
		while(tt!=NULL){
			if(strcmp(tt->name,prm->name)==0){
				printf("Two params with same name declared in methods\n");
				exit(1);
			}
			tt=tt->next;
		}
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

void assign_type(struct tnode* t,char* name){
	if(t==NULL){
		return;
	}
	struct Typetable* type;
	if(TLookup(name)!=NULL){
		type=TLookup(name);
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
	}
	if(CLookup(name)!=NULL){
		struct Classtable* class=CLookup(name);
		if(t->nodetype==id){
			t->ctype=class;
			struct Gsymbol* te=lookup(name);
	
	
			if(te!=NULL){
				printf("Variable with name: %s is redeclared\n",name);
				exit(1);
			}
			te=symbtable;
			while(te!=NULL && te->next!=NULL){
				te=te->next;
			}
			struct Gsymbol* s=(struct Gsymbol*)malloc(sizeof(struct Gsymbol));
			s->cptr=class;
			s->size=2;
			s->name=(char*)malloc(strlen(t->varname)*sizeof(char));
			strcpy(s->name,t->varname);
			s->binding=curr_SP;
			s->paramlist=NULL;
			curr_SP+=2;
			s->next=NULL;
			
			if(te==NULL){
				symbtable=s;
			}else{
				te->next=s;
			}
			t->Gentry=lookup(t->varname);
			return;
		}
	}
	
	assign_type(t->left,name);
	assign_type(t->right,name);
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
	 
	struct Paramstruct* par1;
	struct Paramstruct* par2;
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
			  printf("hereeeee asdfsd\n");
			check_decl(type,t->left);
			
			check_decl(type,t->right);
			
			if(t->left->nodetype==id && LLookup(t->left->varname)==NULL && lookup(t->left->varname)==NULL){
			 	printf("ID %s is undeclared\n",t->left->varname);
			 	exit(1);
			}
			
			if(t->right->nodetype==newnd){
				
				if(t->left->ctype==NULL || t->right->ctype==NULL){
					printf("Incorrect var types in new asg\n");
					exit(1);
				}
				if(strcmp(t->left->ctype->name,t->right->ctype->name)!=0){
					struct Classtable* rhs_class=t->right->ctype->parentptr;
					while(rhs_class!=NULL){
						if(strcmp(t->left->ctype->name,rhs_class->name)==0){
							break;
						}
						rhs_class=rhs_class->parentptr;
					}
					if(rhs_class==NULL){
						printf("RHS in new asg is not in LHS inheritance hierarchy\n");
						exit(1);
					}
				}
				//t->left->ctype=t->right->ctype;
				done=1;
				break;
			}
			
			if(t->left->nodetype==id && t->left->ctype!=NULL){
				if(t->right->nodetype!=id){
					printf("Incorrect assignment to a class var\n");
					exit(1);
				}
				if(t->right->ctype==NULL){
					printf("RHS in asg is not a class var\n");
					exit(1);
				}
				struct Classtable* te=t->right->ctype;
				while(te!=NULL){
					if(strcmp(t->left->ctype->name,te->name)==0){
						break;
					}
					te=te->parentptr;
				}
				if(te==NULL){
					printf("RHS is a class var but not in LHS inh heirarchy\n");
					exit(1);
				}
				done=1;
				break;
			}
			
			if(t->right->nodetype==allocnd){
				
				if(t->left->nodetype==self_field){
					struct Typetable* tr=Flookup(t->left->left->ctype,t->left->right->varname)->type;
					if(tr==NULL){
						printf("Incorrect use of alloc\n");
						exit(1);
					}
					if(strcmp(tr->name,"INT")==0 || strcmp(tr->name,"STR")==0 || strcmp(tr->name,"void")==0 || strcmp(tr->name,"bool")==0){
					printf("Incorrect member field type to use alloc with\n");
					exit(1);
					}
				}else if(LLookup(t->left->varname)!=NULL){
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
				
				printf("Prob here\n");
				if(t->left->nodetype==self_field){
					struct Typetable* tr=Flookup(t->left->left->ctype,t->left->right->varname)->type;
					if(tr==NULL){
						printf("Incorrect use of null\n");
						exit(1);
					}
					if(strcmp(tr->name,"INT")==0 || strcmp(tr->name,"STR")==0 || strcmp(tr->name,"void")==0 || strcmp(tr->name,"bool")==0){
					printf("Incorrect member field type to use null with\n");
					exit(1);
					}
				}else if(LLookup(t->left->varname)!=NULL){
					if(strcmp(LLookup(t->left->varname)->type->name,"INT")==0 || strcmp(LLookup(t->left->varname)->type->name,"STR")==0 || strcmp(LLookup(t->left->varname)->type->name,"bool")==0 || strcmp(LLookup(t->left->varname)->type->name,"void")==0){
						printf("NULL used for non-user defined type var\n");
						exit(1);
					}
				}else if(lookup(t->left->varname)!=NULL){
					if(strcmp(lookup(t->left->varname)->type->name,"INT")==0 || strcmp(lookup(t->left->varname)->type->name,"STR")==0 || strcmp(lookup(t->left->varname)->type->name,"bool")==0 || strcmp(lookup(t->left->varname)->type->name,"void")==0){
						printf("NULL used for non-user defined type var\n");
						exit(1);
					}
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
			if(t->left->nodetype==self_field){
				if(t->left->type==NULL){
					if(t->right->nodetype!=self_field){
						printf("Incorrect asg for member in method\n");
						exit(1);
					}
					if(t->left->ctype==NULL || t->right->ctype==NULL){
						printf("Incorrect assignment for self\n");
						exit(1);
					}
					
					if(strcmp(t->left->ctype->name,t->right->ctype->name)!=0){
						printf("Incorrect type of member fields in LHS and RHS\n");
						exit(1);
					}
				}else{
					if(strcmp(t->left->type->name,t->right->type->name)!=0){
						printf("Type mismatch\n");
						exit(1);
					}
				}
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
		case id:printf("hereeeee id\n"); 
			if(lookup(t->varname)==NULL && lsymbtable==NULL && LLookup(t->varname)==NULL){
	 				printf("Variable %s is undeclared\n",t->varname);
	 				exit(1);
	 			 }
	 			 if(LLookup(t->varname)!=NULL){
	 			 	t->Lentry=LLookup(t->varname);
	 			 	t->type=LLookup(t->varname)->type;
	 			 }else{
	 			 	t->Gentry=lookup(t->varname);
	 			 	t->type=lookup(t->varname)->type;
	 			 	if(t->type==NULL){
	 			 		t->ctype=lookup(t->varname)->cptr;
	 			 	}
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
	 	case self_field:
	 			if(Flookup(curr_class,t->right->varname)==NULL){
	 				printf("self_field till here\n"); 
        			 		printf("Member field: %s , does not exist for class: %s\n",t->right->varname,curr_class->name);
        			 		exit(1);
        			 	}
        			 	
        			 t->type=Flookup(curr_class,t->right->varname)->type;
        			 
        			 t->left->ctype=curr_class;
        			 t->ctype=Flookup(curr_class,t->right->varname)->ctype;
	 			 done=1;
	 			break;
	 	case fieldlst:
	 		      
	 		      check_decl(type,t->left);
	 		      if(t->left->type!=NULL){
	 		      		struct Fieldlist* f1=FLookup(t->left->type,t->right->varname);
		 		      if(f1==NULL){
		 		      	printf("Member field %s is not defined\n",t->right->varname);
		 		      	exit(1);
		 		      }
		 		      t->type=f1->type;
	 		      }else{
	 		      		printf("Incorrect usage of self\n");
	 		      }
	 		      
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
	 		     }
	 		     par1=(struct Paramstruct*)malloc(sizeof(struct Paramstruct));
        	     	par2=(struct Paramstruct*)malloc(sizeof(struct Paramstruct));
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
        	case newnd:printf("Entering newnd check\n");
        		   if(CLookup(t->left->varname)==NULL){
        		   	printf("Argument of new is not of class type\n");
        		   	exit(1);
		           }
        		   t->left->ctype=CLookup(t->left->varname);
        		   t->ctype=t->left->ctype;
        		   done=1;
        	
        		   break;
        	
        	case delnd:check_decl(type,t->left);
        		   if(t->left->ctype==NULL){
        		   	printf("Argument of new is not of class type\n");
        		   	exit(1);
        		   }
        		   t->ctype=t->left->ctype;
        		   done=1;
        	
        		   break;
        		   
        	case metcall: struct Memberfunclist* mflst=NULL; 
        			if(t->left->nodetype==self_field){
        			 	if(MLookup(curr_class,t->left->right->varname)==NULL){
        			 		printf("Method: %s , does not exist for class: %s\n",t->left->right->varname,curr_class->name);
        			 		exit(1);
        			 	}
        			 	t->left->left->ctype=curr_class;
        			 	mflst=MLookup(curr_class,t->left->right->varname);
        		      }else if(t->left->nodetype==fieldlst){
        		      		if(t->left->left->nodetype!=self_field){
        		      			printf("Method invocation apart for using self is not allowed\n");
						exit(1);
        		      		}
        		      		struct Classtable* class_of_member=Flookup(curr_class,t->left->left->right->varname)->ctype;
        		      		t->left->left->left->ctype=curr_class;
        		      		if(class_of_member==NULL){
        		      			printf("Invalid member accessed for class: %s\n",curr_class->name);
        		      			exit(1);
        		      		}
        		      		if(MLookup(class_of_member,t->left->right->varname)==NULL){
        			 		printf("Method: %s , does not exist for class: %s\n",t->left->right->varname,curr_class->name);
        			 		exit(1);
        			 	}
        			 	mflst=MLookup(class_of_member,t->left->right->varname);
        		      }else if(t->left->nodetype==field){
        		      		if(lookup(t->left->left->varname)->cptr==NULL){
        		      			printf("Method invocation from a non-class var\n");
        		      			exit(1);
        		      		}
        		      		t->left->left->ctype=lookup(t->left->left->varname)->cptr;
        		      		if(MLookup(lookup(t->left->left->varname)->cptr,t->left->right->varname)==NULL){
        		      			printf("Method: %s , does not exist for class: %s\n",t->left->right->varname,lookup(t->left->left->varname)->cptr->name);
        			 		exit(1);
        		      		}
        		      		mflst=MLookup(lookup(t->left->left->varname)->cptr,t->left->right->varname);
        		      }else{

					printf("Method invocation apart for using self is not allowed\n");
					exit(1);
			      }
			      par1=(struct Paramstruct*)malloc(sizeof(struct Paramstruct));
        	     	      par2=(struct Paramstruct*)malloc(sizeof(struct Paramstruct));
        	     	      par1=NULL;
        	     	      par2=NULL;
        	     
        	     
        	     	      convert_arglst(t->right,&par1,&par2,type);
        	              printf("Entring fncall\n");
        	     
        	     
        	     	      par2=mflst->paramlist;
        	     
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
        	     	t->type=mflst->type;
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
    	fprintf(fp1,"MOV R4,R19\n");
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
	int no_args;
	int field_pos;
	struct Lsymbol* lf=NULL;
	struct Lsymbol* y=NULL;
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
                	  }else if(t->left->nodetype==self_field){
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
                	  fprintf(fp1,"MOV R19,R%d\n",i);
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
                
                	   if(t->right->nodetype==newnd){
                	   	for(int e=0;e<curr_reg;e++){
		        		fprintf(fp1,"PUSH R%d\n",e);
		        	   }
		        	   
		        	   fprintf(fp1,"CALL 2144\n");
		        	   i=get_reg();
		        	   fprintf(fp1,"MOV R%d,R5\n",i);
		        	   for(int e=curr_reg-2;e>=0;e--){
		        		fprintf(fp1,"POP R%d\n",e);
		        	   }
		        	   if(t->left->nodetype==id){
		        	   	fprintf(fp1,"MOV [%d],R%d\n",lookup(t->left->varname)->binding,i);
		        	   	fprintf(fp1,"MOV [%d],%d\n",(lookup(t->left->varname)->binding)+1,(4096+(t->right->ctype->class_index)*8));
		        	   }else if(t->left->nodetype==self_field){
		        	   	y=LLookup("mem_field");
		        	   	int bi=y->binding;
		        	   	j=get_reg();
                	  		fprintf(fp1,"MOV R%d,BP\n",j);
                	  		fprintf(fp1,"ADD R%d,%d\n",j,bi);
                	  		fprintf(fp1,"MOV R%d,[R%d]\n",j,j);
                	  		fprintf(fp1,"ADD R%d,%d\n",j,Flookup(t->left->left->ctype,t->left->right->varname)->fieldindex);
                	  		fprintf(fp1,"MOV [R%d],R%d\n",j,i);
                	  		fprintf(fp1,"ADD R%d,1\n",j);
                	  		fprintf(fp1,"MOV [R%d],%d\n",j,(4096+(t->right->ctype->class_index)*8));
                	  		free_reg();
                	  		
		        	   	
		        	   }
		        	   
		        	   
		        	   
                	   }else if(t->left->nodetype==arrasg){
                	   	i=code_gen(t->right);
                	   	j=code_gen(t->left);
                	   	fprintf(fp1,"MOV [R%d],R%d\n",j,i);
                	   	if(j!=30)
                	   		free_reg();
                	   }else if(t->left->nodetype==id && t->left->ctype!=NULL){
                	   	i=30;
                	   	
                	   	fprintf(fp1,"MOV [%d],[%d]\n",lookup(t->left->varname)->binding,lookup(t->right->varname)->binding);
                	   	
                	   	fprintf(fp1,"MOV [%d],[%d]\n",(lookup(t->left->varname)->binding)+1,(lookup(t->right->varname)->binding)+1);
                	   
                	   
                	   }else if(t->left->nodetype==id){
                	   	
                	   
                	        fprintf(fp1,"BRKP\n");
                	   	i=code_gen(t->right);
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
                	   	
                	   }else if(t->left->nodetype==self_field){
                	   	if(t->left->ctype!=NULL){
                	   		y=LLookup("mem_field");
		        	   	int ba=y->binding;
		        	   	j=get_reg();
                	  		fprintf(fp1,"MOV R%d,BP\n",j);
                	  		fprintf(fp1,"ADD R%d,%d\n",j,ba);
                	  		fprintf(fp1,"MOV R%d,[R%d]\n",j,j);
                	  		
                	  		fprintf(fp1,"ADD R%d,%d\n",j,Flookup(t->left->left->ctype,t->left->right->varname)->fieldindex);
                	  		int k=get_reg();
                	  		fprintf(fp1,"MOV R%d,BP\n",k);
                	  		fprintf(fp1,"ADD R%d,%d\n",k,ba);
                	  		fprintf(fp1,"MOV R%d,[R%d]\n",k,k);
                	  		
                	  		fprintf(fp1,"ADD R%d,%d\n",k,Flookup(t->right->left->ctype,t->right->right->varname)->fieldindex);
                	  		fprintf(fp1,"MOV [R%d],[R%d]\n",j,k);
                	  		fprintf(fp1,"ADD R%d,1\n",j);
                	  		fprintf(fp1,"ADD R%d,1\n",k);
                	  		fprintf(fp1,"MOV [R%d],[R%d]\n",j,k);
                	  		free_reg();
                	  		free_reg();
                	  		i=30;
                	  		
                	   	}else{
                	   		i=code_gen(t->right);
                	   		j=code_gen(t->left);
                	   		fprintf(fp1,"MOV [R%d],R%d\n",j,i);
                	   		free_reg();
                	   	}
                	   }else if(t->left->nodetype==field || t->left->nodetype==fieldlst){
                	   	i=code_gen(t->right);
                	   	
                	   	j=code_gen(t->left);
                	   	fprintf(fp1,"MOV [R%d],R%d\n",j,i);
                	   	free_reg();
                	   }
                	   
                	   
                	  
                	   if(i!=30)
                	   	free_reg();
                	   return 30;
                           break;
                case self_field: lf=LLookup("mem_field");
                	         i=get_reg();
                	         int bj=lf->binding;
                	         fprintf(fp1,"BRKP\n");
                	    	 fprintf(fp1,"MOV R%d,BP\n",i);
                	  	 fprintf(fp1,"ADD R%d,%d\n",i,bj);
                	  	 fprintf(fp1,"MOV R%d,[R%d]\n",i,i);
                	  	 fprintf(fp1,"ADD R%d,%d\n",i,Flookup(t->left->ctype,t->right->varname)->fieldindex);
                	  	 return i;
                
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
                	    fprintf(fp1,"MOV R%d,[R%d]\n",i,i);
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
                	  
                	  y=LLookup(t->varname);
                	
                	  
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
                	  		if(t->right->nodetype==self_field){
                	  			fprintf(fp1,"MOV R%d,[R%d]\n",i,i);
                	  		}
                	  		fprintf(fp1,"NE R%d,R%d\n",i,j);
                	  		free_reg();
                	  	}else{
                	  		i=code_gen(t->left);
                	  		j=get_reg();
                	  		fprintf(fp1,"MOV R%d,-1\n",j);
                	  		if(t->left->nodetype==self_field){
                	  			fprintf(fp1,"MOV R%d,[R%d]\n",i,i);
                	  		}
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
                case brkpnd: fprintf(fp1,"BRKP\n");
                	     return 30;
                	     break;
                case eq : 
                	  if(t->left->nodetype==nullnd || t->right->nodetype==nullnd){
                	  	if(t->left->nodetype==nullnd){
                	  		i=code_gen(t->right);
                	  		j=get_reg();
                	  		fprintf(fp1,"MOV R%d,-1\n",j);
                	  		if(t->right->nodetype==self_field){
                	  			fprintf(fp1,"MOV R%d,[R%d]\n",i,i);
                	  		}
                	  		fprintf(fp1,"EQ R%d,R%d\n",i,j);
                	  		free_reg();
                	  	}else{
                	  		i=code_gen(t->left);
                	  		fprintf(fp1,"BRKP\n");
                	  		j=get_reg();
                	  		fprintf(fp1,"MOV R%d,-1\n",j);
                	  		if(t->left->nodetype==self_field){
                	  			fprintf(fp1,"MOV R%d,[R%d]\n",i,i);
                	  		}
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
                	    temp_use[curr_temp_use++]=curr_reg;
                	    for(int e=0;e<curr_reg;e++){
                		fprintf(fp1,"PUSH R%d\n",e);
                	    }
                	    curr_reg=0;
                	     no_args=0;
                	    gf=lookup(t->left->varname);
                	    pf=gf->paramlist;
                	    while(pf!=NULL){
                	    	no_args++;
                	    	pf=pf->next;
                	    }
                	    eval_and_push(t->right);
                	    fprintf(fp1,"PUSH R0\n");
                	    fprintf(fp1,"CALL F%d\n",gf->flabel);
                	    
                	    curr_temp_use--;
                	    curr_reg=temp_use[curr_temp_use];
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
                case mdef:fprintf(fp1,"F%d:\n",MLookup(t->ctype,t->right->left->varname)->flabel);
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
			    i=code_gen(t->right->right->right->right);
			    
			    if(i!=30){
			    	free_reg();
			    }
                	    return 30;
                	   break;
                case metcall: printf("FN CALL\n");
                	    temp_use[curr_temp_use++]=curr_reg;
                	    for(int e=0;e<curr_reg;e++){
                		fprintf(fp1,"PUSH R%d\n",e);
                	    }
                	    curr_reg=0;
                	     no_args=0;
                	    struct Memberfunclist* tmf=NULL;
                	    if(t->left->nodetype==self_field){
                	    	pf=MLookup(t->left->left->ctype,t->left->right->varname)->paramlist;
                	    	tmf=MLookup(t->left->left->ctype,t->left->right->varname);
                	        lf=LLookup("met_field");
                	        i=get_reg();
                	        fprintf(fp1,"MOV R%d,BP\n",i);
                	        fprintf(fp1,"ADD R%d,%d\n",i,lf->binding);
                	        fprintf(fp1,"MOV R%d,[R%d]\n",i,i);
                	        fprintf(fp1,"PUSH R%d\n",i);
                	        
                	        
                	        lf=LLookup("mem_field");
                	        
                	        fprintf(fp1,"MOV R%d,BP\n",i);
                	        fprintf(fp1,"ADD R%d,%d\n",i,lf->binding);
                	        fprintf(fp1,"MOV R%d,[R%d]\n",i,i);
                	        fprintf(fp1,"PUSH R%d\n",i);
                	        free_reg();
                	        
                	        
                	    }else if(t->left->nodetype==field){
                	    	pf=MLookup(t->left->left->ctype,t->left->right->varname)->paramlist;
                	        tmf=MLookup(t->left->left->ctype,t->left->right->varname);
                	        
                	        i=get_reg();
                	        fprintf(fp1,"MOV R%d,%d\n",i,(lookup(t->left->left->varname)->binding)+1);
                	        fprintf(fp1,"MOV R%d,[R%d]\n",i,i);
                	        fprintf(fp1,"PUSH R%d\n",i);
                	        fprintf(fp1,"MOV R%d,%d\n",i,lookup(t->left->left->varname)->binding);
                	        fprintf(fp1,"MOV R%d,[R%d]\n",i,i);
                	        fprintf(fp1,"PUSH R%d\n",i);
                	        
                	        free_reg();
                	    }else if(t->left->nodetype==fieldlst){
                	    	pf=MLookup(Flookup(t->left->left->left->ctype,t->left->left->right->varname)->ctype,t->left->right->varname)->paramlist;
                	    	tmf=MLookup(Flookup(t->left->left->left->ctype,t->left->left->right->varname)->ctype,t->left->right->varname);
                	    	lf=LLookup("mem_field");
                	        i=get_reg();
                	        fprintf(fp1,"MOV R%d,BP\n",i);
                	        fprintf(fp1,"ADD R%d,%d\n",i,lf->binding);
                	        fprintf(fp1,"MOV R%d,[R%d]\n",i,i);
                	        //fprintf(fp1,"MOV R%d,[R%d]\n",i,i);
                	        fprintf(fp1,"ADD R%d,%d\n",i,Flookup(t->left->left->left->ctype,t->left->left->right->varname)->fieldindex);
                	        fprintf(fp1,"ADD R%d,1\n",i);
                	        fprintf(fp1,"MOV R%d,[R%d]\n",i,i);
                	        fprintf(fp1,"PUSH R%d\n",i);
                	        
                	        fprintf(fp1,"MOV R%d,BP\n",i);
                	        fprintf(fp1,"ADD R%d,%d\n",i,lf->binding);
                	        fprintf(fp1,"MOV R%d,[R%d]\n",i,i);
                	        //fprintf(fp1,"MOV R%d,[R%d]\n",i,i);
                	        fprintf(fp1,"ADD R%d,%d\n",i,Flookup(t->left->left->left->ctype,t->left->left->right->varname)->fieldindex);
                	        
                	        fprintf(fp1,"MOV R%d,[R%d]\n",i,i);
                	        fprintf(fp1,"PUSH R%d\n",i);
                	        
                	       
                	        
                	        
                	        
                	        free_reg();
                	        
                	    }
                	    
                	    
                	    while(pf!=NULL){
                	    	no_args++;
                	    	pf=pf->next;
                	    }
                	    
                	    eval_and_push(t->right);
                	    fprintf(fp1,"PUSH R0\n");
                	    int bb;
                	    struct Lsymbol* tl=NULL;
                	    if(t->left->nodetype==self_field){
                	    	tl=LLookup("met_field");
                	        bb=tl->binding;
		        	
		        	i=get_reg();
                	  	fprintf(fp1,"MOV R%d,BP\n",i);
                	  	fprintf(fp1,"ADD R%d,%d\n",i,bb);
                	  	fprintf(fp1,"MOV R%d,[R%d]\n",i,i);
                	  	//fprintf(fp1,"MOV R%d,[R%d]\n",i,i);
                	    	fprintf(fp1,"ADD R%d,%d\n",i,tmf->funcposition);
                	    	fprintf(fp1,"MOV R%d,[R%d]\n",i,i);
                	    	free_reg();
                	    }else if(t->left->nodetype==field){
                	    	i=get_reg();
                	    	fprintf(fp1,"MOV R%d,%d\n",i,(lookup(t->left->left->varname)->binding)+1);
                	    	fprintf(fp1,"MOV R%d,[R%d]\n",i,i);
                	    	fprintf(fp1,"ADD R%d,%d\n",i,tmf->funcposition);
                	    	fprintf(fp1,"MOV R%d,[R%d]\n",i,i);
                	    	free_reg();
                	    
                	    }else if(t->left->nodetype==fieldlst){
                	    	tl=LLookup("mem_field");
                	        bb=tl->binding;
                	        i=get_reg();
                	    	fprintf(fp1,"MOV R%d,BP\n",i);
                	  	fprintf(fp1,"ADD R%d,%d\n",i,bb);
                	  	fprintf(fp1,"MOV R%d,[R%d]\n",i,i);
                	  	//fprintf(fp1,"MOV R%d,[R%d]\n",i,i);
                	  	fprintf(fp1,"ADD R%d,%d\n",i,(Flookup(t->left->left->left->ctype,t->left->left->right->varname)->fieldindex)+1);
                	  	fprintf(fp1,"MOV R%d,[R%d]\n",i,i);
                	  	//fprintf(fp1,"MOV R%d,[R%d]\n",i,i);
                	    	fprintf(fp1,"ADD R%d,%d\n",i,tmf->funcposition);
                	    	fprintf(fp1,"MOV R%d,[R%d]\n",i,i);
                	    	free_reg();
                	  	
                	    }
                	    
                	    fprintf(fp1,"CALL R%d\n",i);
                	    
                	    curr_reg=temp_use[curr_temp_use--];
                	    i=get_reg();
                	    fprintf(fp1,"MOV R%d,[SP]\n",i);
                	    
                	    fprintf(fp1,"POP R19\n");
                	    for(int d=0;d<no_args;d++){
                	    	fprintf(fp1,"POP R19\n");
                	    }
                	    fprintf(fp1,"POP R19\n");
                	    fprintf(fp1,"POP R19\n");
                	    for(int e=curr_reg-2;e>=0;e--){
                		fprintf(fp1,"POP R%d\n",e);
                	    }
                	    return i;
                		
                	     break;
                case delnd: 
                	   fprintf(fp1,"MOV R1,[%d]\n",lookup(t->left->varname)->binding);
                	     
                	     for(int e=0;e<curr_reg;e++){
                		fprintf(fp1,"PUSH R%d\n",e);
                	     }
                	     fprintf(fp1,"CALL 2172\n");
                	     for(int e=curr_reg-1;e>=0;e--){
                		fprintf(fp1,"POP R%d\n",e);
                	     }
                	   fprintf(fp1,"MOV [%d],-1\n",lookup(t->left->varname)->binding);
                	   fprintf(fp1,"MOV [%d],-1\n",(lookup(t->left->varname)->binding)+1);
                	    return 30;
                	   
                	   break;
                case mainnd:fprintf(fp1,"F0:\n");
                	    struct Classtable* ct=classtable;
				while(ct!=NULL){
					struct Memberfunclist* mf=ct->vfunptr;
					int ii=0;
					while(mf!=NULL){
						fprintf(fp1,"MOV [%d],F%d\n",4096+((ct->class_index)*8)+ii,mf->flabel);
						ii++;
						mf=mf->next;
					}
					while(ii<8){
						fprintf(fp1,"MOV [%d],-1\n",4096+((ct->class_index)*8)+ii);
						ii++;
					}
					ct=ct->next;
				}
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

