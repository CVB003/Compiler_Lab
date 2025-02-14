enum nodetype{ps,ms,ml,dv,mod,rd,wr,cnn,id,num,str_const,asg,asg2,ne,eq,andnd,brkp,ptr_var_lst,tupptrdecl,tupasg,tupval,tuplst,tupdecl,tupdecl_ldecl,lt,gt,ge,le,whl,el,ifel,brek,cont,intnd,strnd,varlst,ldecl,ldecllst,ldeclblk,mainnd,retnd,fncall,arglst,fdefblk,fndef,idlst,gdeclblk,gdecl,gdeclst,gidlst,funcdecl,paramlst,param,rpt,dow,arrval,arrasg,arrdecl,addr_id,ptrfuncdecl,ptrasg,ptrdecl,ptrval};
enum type{inttype,booltype,strtype,notype,intptrtype,strptrtype,tuptype,tupptrtype};


typedef struct tnode{
int val;	// value of a number for NUM nodes.
int type;	//type of variable
char* varname;	//name of a variable for ID nodes  
int nodetype;  // information about non-leaf nodes - read/write/connector/+/* etc.  
struct tnode *left,*right;
struct Gsymbol* Gentry;
struct Lsymbol* Lentry;	
 }tnode;

struct Paramstruct{
	char* name;
	int type;
	struct Paramstruct* next;
};

struct Gsymbol{
	char* name;
	int type;
	int size;
	int binding;
	struct Paramstruct* paramlist;
	int flabel;
	struct Gsymbol* tupinfo;
	struct Gsymbol* next;
};

struct Lsymbol{
	char* name;
	int type;
	int binding;
	struct Paramstruct* paramlist;
	struct Lsymbol* tupinfo;
	struct Lsymbol* next;

};

struct Typetable{
	int temptype;
}; 	
/*Create a node tnode*/
struct tnode* createTree(int val, int type, char* c, int ntype, struct tnode *l, struct tnode *r);


void checktype(struct tnode* l,int ltype,struct tnode* r,int rtype);

void assign_type(struct tnode* t,int type);

struct Gsymbol* lookup(char* name);

void install(char* name,int type,int size);

struct Lsymbol* Linstall(char* name,struct Typetable* type);


struct Lsymbol* LLookup(char* name);

void insert_paramlst(struct Gsymbol* t,struct tnode* temp);

void convert_ldecl(struct tnode* t,struct Paramstruct** p2,struct Paramstruct** curr_p);

void assg_type_idlst(struct tnode* t,struct Paramstruct** p2,struct Paramstruct** curr_p,int type);

void add_paramlst_Ltable(struct Paramstruct** p,struct Lsymbol** ls,struct Lsymbol** curr_ls);

void convert_lst(struct Paramstruct** pt,struct Paramstruct** curr,struct tnode* t);

void name_eq_args(struct Paramstruct* p1,struct Paramstruct* p2);

void checktype(struct tnode* l,int ltype,struct tnode* r,int rtype);

void search_paramlst(struct Paramstruct* p,char* p_name);

void add_lvars_Ltable(struct Paramstruct** p2,struct Lsymbol** ls,struct Lsymbol** curr_ls);

void convert_arglst(struct tnode* t,struct Paramstruct** par1,struct Paramstruct** par2);

void destroy_lsymbtable();

void eval_and_push(struct tnode* t);

void add_tupdecl_Ltable(struct tnode* t);

int count_params(struct tnode* t);

void install_tup_var(struct tnode* t,int num_par,char* tupname);

void install_tup_var_Ltable(struct tnode* t,int num_par,char* tupname);

void check_tupinfo(struct Paramstruct* p1,struct Paramstruct* p2);

struct Paramstruct* search_paramlst_tup(struct Paramstruct* p,char* p_name);

int pos_num(struct Paramstruct* p,char* p_name,int curr);

void insert_paramlst_Ltable(struct Lsymbol* t,struct tnode* temp);

int count_params_plst(struct Paramstruct* t);
