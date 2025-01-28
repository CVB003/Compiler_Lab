enum nodetype{ps,ms,ml,dv,mod,rd,wr,cnn,id,num,str_const,asg,ne,eq,lt,gt,ge,le,whl,el,ifel,brek,cont,intnd,strnd,varlst,ldecl,ldecllst,ldeclblk,mainnd,idlst,gdeclblk,gdecl,gdeclst,gidlst,funcdecl,paramlst,param,rpt,dow,arrval,arrasg,arrdecl};
enum type{inttype,booltype,strtype,notype};


typedef struct tnode{
int val;	// value of a number for NUM nodes.
int type;	//type of variable
char* varname;	//name of a variable for ID nodes  
int nodetype;  // information about non-leaf nodes - read/write/connector/+/* etc.  
struct tnode *left,*right;
struct Gsymbol* Gentry;	
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
	struct Gsymbol* next;
};

struct Lsymbol{
	char* name;
	int type;
	int binding;
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

