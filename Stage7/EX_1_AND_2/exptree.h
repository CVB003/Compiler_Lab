enum nodetype{ps,ms,ml,dv,mod,rd,wr,cnn,id,num,str_const,asg,ne,eq,brkpnd,metcall,self_field,delnd,newnd,mdef,mdecl,classdef,cnamend,mdeflst,mdeclst,classdeflst,selfnd,nullnd,freend,allocnd,initnd,andnd,fieldlst,field,fieldval,fielddecllst,fielddecl,typedefnd,typedeflst,lt,gt,ge,le,whl,el,ifel,brek,cont,intnd,strnd,varlst,ldecl,ldecllst,ldeclblk,mainnd,retnd,fncall,arglst,fdefblk,fndef,idlst,gdeclblk,gdecl,gdeclst,gidlst,funcdecl,paramlst,param,rpt,dow,arrval,arrasg,arrdecl};
enum type{inttype,booltype,strtype,notype};


typedef struct tnode{
int val;	// value of a number for NUM nodes.
struct Typetable* type;	//type of variable
char* varname;	//name of a variable for ID nodes  
int nodetype;  // information about non-leaf nodes - read/write/connector/+/* etc.  
struct tnode *left,*right;
struct Gsymbol* Gentry;
struct Lsymbol* Lentry;	
struct Classtable* ctype;
 }tnode;

struct Paramstruct{
	char* name;
	struct Typetable* type;
	struct Classtable* ctype;
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
	struct Classtable* cptr;
};

struct Lsymbol{
	char* name;
	struct Typetable* type;
	struct Classtable* ctype;
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
	struct Classtable* ctype;
};

struct Classtable {
 	char* name;                           //name of the class
	struct Fieldlist* memberfield;        //pointer to Fieldlist 
	struct Memberfunclist* vfunptr;      //pointer to Memberfunclist
	struct Classtable* parentptr;         //pointer to the parent's class table
	int class_index;                      //position of the class in the virtual function table
	int fieldcount;                       //count of fields
  	int methodcount;                      //count of methods
	struct Classtable* next;              //pointer to next class table entry
};

struct Memberfunclist {
 	char* name;                      //name of the member function in the class
	struct Typetable* type;          //pointer to typetable
	struct Paramstruct* paramlist;   //pointer to the head of the formal parameter list
	int funcposition;                //position of the function in the class table
 	int flabel;                      //A label for identifying the starting address of the function's code in the memory
	struct Memberfunclist* next;     //pointer to next Memberfunclist entry
};

struct Classtable* CInstall(char *name,char *parent);

struct Classtable* CLookup(char *name);

struct Fieldlist* convert_fldlst_class(struct tnode* t,char* name,struct Fieldlist** f);

void convert_flds_class(struct Fieldlist** f,struct tnode* t,char* name);

struct Memberfunclist* MLookup (struct Classtable* classn,char* name);

struct Fieldlist* Flookup(struct Classtable* classn,char* name);

void convert_methods_params(struct tnode* t,struct Paramstruct** p);

void convert_lst_class(struct Paramstruct** pt,struct Paramstruct** curr,struct tnode* t);

void add_funcdefs_class(struct tnode* t);

void add_funcdecl_class(struct tnode* t,struct Classtable* classn);

void add_mdefs_class(struct tnode* t,struct Classtable* classn);

int code_gen(struct tnode* t);
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

void assign_type(struct tnode* t,char* name);

struct Gsymbol* lookup(char* name);

void install(char* name,struct Typetable* type,int size);

struct Lsymbol* Linstall(char* name,struct Typetable* type);


struct Lsymbol* LLookup(char* name);

void insert_paramlst(struct Gsymbol* t,struct tnode* temp);

void convert_ldecl(struct tnode* t,struct Paramstruct** p2,struct Paramstruct** curr_p);

void assg_type_idlst(struct tnode* t,struct Paramstruct** p2,struct Paramstruct** curr_p,char* type);

int add_paramlst_Ltable(struct Paramstruct** p,struct Lsymbol** ls,struct Lsymbol** curr_ls);

void convert_lst(struct Paramstruct** pt,struct Paramstruct** curr,struct tnode* t);

void name_eq_args(struct Paramstruct* p1,struct Paramstruct* p2);

void check_decl(struct Typetable* type,struct tnode* t);

void search_paramlst(struct Paramstruct* p,char* p_name);

void add_lvars_Ltable(struct Paramstruct** p2,struct Lsymbol** ls,struct Lsymbol** curr_ls);

void convert_arglst(struct tnode* t,struct Paramstruct** par1,struct Paramstruct** par2,struct Typetable* type);

void destroy_lsymbtable();

void eval_and_push(struct tnode* t);
