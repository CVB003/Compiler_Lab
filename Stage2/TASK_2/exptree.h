enum nodetype{ps,ms,ml,dv,rd,wr,cnn,id,num,asg};



typedef struct tnode{
int val;	// value of a number for NUM nodes.
int type;	//type of variable
char* varname;	//name of a variable for ID nodes  
int nodetype;  // information about non-leaf nodes - read/write/connector/+/* etc.  
struct tnode *left,*right;	
 }tnode;
	
/*Create a node tnode*/
struct tnode* createTree(int val, int type, char* c, int ntype, struct tnode *l, struct tnode *r);

void before_code();

int get_reg();

int free_reg();

int code_gen(struct tnode* t);

void after_code();


