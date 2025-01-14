enum nodetype{ps,ms,ml,dv,rd,wr,cnn,id,num,asg,ne,eq,lt,gt,ge,le,whl,el,ifel,brek,cont,rpt,dow};
enum type{inttype,booltype,notype};


typedef struct tnode{
int val;	// value of a number for NUM nodes.
int type;	//type of variable
char* varname;	//name of a variable for ID nodes  
int nodetype;  // information about non-leaf nodes - read/write/connector/+/* etc.  
struct tnode *left,*right;	
 }tnode;
	
/*Create a node tnode*/
struct tnode* createTree(int val, int type, char* c, int ntype, struct tnode *l, struct tnode *r);
	
/*To evaluate an expression tree*/
int evaluate(struct tnode *t);

void checktype(struct tnode* l,int ltype,struct tnode* r,int rtype);
