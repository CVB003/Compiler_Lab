enum nodetype{ps,ms,ml,dv,mod,rd,wr,cnn,id,num,str_const,asg,ne,eq,nullnd,freend,allocnd,initnd,andnd,fieldlst,field,fieldval,fielddecllst,fielddecl,typedefnd,typedeflst,lt,gt,ge,le,whl,el,ifel,brek,cont,intnd,strnd,varlst,ldecl,ldecllst,ldeclblk,mainnd,retnd,fncall,arglst,fdefblk,fndef,idlst,gdeclblk,gdecl,gdeclst,gidlst,funcdecl,paramlst,param,rpt,dow,arrval,arrasg,arrdecl};
enum type{inttype,booltype,strtype,notype};


typedef struct tnode{
int val;	// value of a number for NUM nodes.
struct Typetable* type;	//type of variable
char* varname;	//name of a variable for ID nodes  
int nodetype;  // information about non-leaf nodes - read/write/connector/+/* etc.  
struct tnode *left,*right;
struct Gsymbol* Gentry;
struct Lsymbol* Lentry;	
 }tnode;

struct Paramstruct{
	char* name;
	struct Typetable* type;
	struct Paramstruct* next;
};

struct Gsymbol{
	char* name;
	struct Typetable* type;
	int size;
	int binding;
	struct Paramstruct* paramlist;
	int flabel;
	struct Gsymbol* next;
};

struct Lsymbol{
	char* name;
	struct Typetable* type;
	int binding;
	struct Lsymbol* next;

};

struct Typetable{
	char* name;
	int size;
	struct Typetable* next;
	struct Fieldlist* fields; 
}; 	

struct Fieldlist{
	struct Fieldlist* next;
	struct Typetable* type;
	char* name;
	int fieldindex;
};
/*Create a node tnode*/
struct tnode* createTree(int val, char* type, char* c, int ntype, struct tnode *l, struct tnode *r);
	
struct Typetable* TLookup(char* name);

struct Typetable* TInstall(char *name,int size, struct Fieldlist *fields);

void TypeTableCreate();

struct Fieldlist* FLookup(struct Typetable *type, char *name);

void convert_flds(struct Fieldlist** f,struct tnode* t,char* name);

struct Fieldlist* convert_fldlst(struct tnode* t,char* name);

int count_fields(struct Fieldlist* f);

void checktype(struct tnode* l,struct Typetable* ltype,struct tnode* r,struct Typetable* rtype);

void assign_type(struct tnode* t,struct Typetable* type);

struct Gsymbol* lookup(char* name);

void install(char* name,struct Typetable* type,int size);

struct Lsymbol* Linstall(char* name,struct Typetable* type);


struct Lsymbol* LLookup(char* name);

void insert_paramlst(struct Gsymbol* t,struct tnode* temp);

void convert_ldecl(struct tnode* t,struct Paramstruct** p2,struct Paramstruct** curr_p);

void assg_type_idlst(struct tnode* t,struct Paramstruct** p2,struct Paramstruct** curr_p,struct Typetable* type);

void add_paramlst_Ltable(struct Paramstruct** p,struct Lsymbol** ls,struct Lsymbol** curr_ls);

void convert_lst(struct Paramstruct** pt,struct Paramstruct** curr,struct tnode* t);

void name_eq_args(struct Paramstruct* p1,struct Paramstruct* p2);

void check_decl(struct Typetable* type,struct tnode* t);

void search_paramlst(struct Paramstruct* p,char* p_name);

void add_lvars_Ltable(struct Paramstruct** p2,struct Lsymbol** ls,struct Lsymbol** curr_ls);

void convert_arglst(struct tnode* t,struct Paramstruct** par1,struct Paramstruct** par2,struct Typetable* type);

void destroy_lsymbtable();

void eval_and_push(struct tnode* t);
