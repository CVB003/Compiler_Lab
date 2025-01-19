enum nodetype{ps,ms,ml,dv,mod,rd,wr,cnn,id,num,str_const,asg,asg2,ne,eq,lt,gt,ge,le,whl,el,ifel,brek,cont,intnd,strnd,varlst,ptrasg,ptrdecl,ptrval,addr_id,declst,arr2ddecl,arr2dval,arr2dasg,decl,rpt,dow,arrval,arrasg,arrdecl};
enum type{inttype,booltype,strtype,notype,intptrtype,strptrtype};


typedef struct tnode{
int val;	// value of a number for NUM nodes.
int type;	//type of variable
char* varname;	//name of a variable for ID nodes  
int nodetype;  // information about non-leaf nodes - read/write/connector/+/* etc.  
struct tnode *left,*right;
struct Gsymbol* Gentry;	
 }tnode;

struct Gsymbol{
	char* name;
	int type;
	int size;
	int binding;
	int size2;
	struct Gsymbol* next;
}; 	
/*Create a node tnode*/
struct tnode* createTree(int val, int type, char* c, int ntype, struct tnode *l, struct tnode *r);
	

void checktype(struct tnode* l,int ltype,struct tnode* r,int rtype);

void assign_type(struct tnode* t,int type);

struct Gsymbol* lookup(char* name);

void install(char* name,int type,int size,int size2);
