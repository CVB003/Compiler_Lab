FILE* fp;
int curr=0;


struct tnode* makeLeafNode(int n)
{
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->op = NULL;
    temp->val = n;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

struct tnode* makeOperatorNode(char c,struct tnode *l,struct tnode *r){
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->op = malloc(sizeof(char));
    *(temp->op) = c;
    temp->left = l;
    temp->right = r;
    return temp;
}

int evaluate(struct tnode *t){
    if(t->op == NULL)
    {
        return t->val;
    }
    else{
        switch(*(t->op)){
            case '+' : return evaluate(t->left) + evaluate(t->right);
                       break;
            case '-' : return evaluate(t->left) - evaluate(t->right);
                       break;
            case '*' : return evaluate(t->left) * evaluate(t->right);
                       break;
            case '/' : return evaluate(t->left) / evaluate(t->right);
                       break;
        }
    }
}

void prefix(struct tnode* t){
	if(t->op==NULL){
		printf("%d ",t->val);
	}
	else{
		printf("%c ",*(t->op));
		prefix(t->left);
		prefix(t->right);
	}

}

void postfix(struct tnode* t){
	if(t->op==NULL){
		printf("%d ",t->val);
	}
	else{
		
		postfix(t->left);
		postfix(t->right);
		printf("%c ",*(t->op));
	}

}

void before_code(){
    
     printf("entered\n");
     fp=fopen("code.xsm","w");
     printf("till here\n");
     fprintf(fp, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",0,2056,0,0,0,0,0,0);
     fprintf(fp,"MOV SP,4096\n");
}

int get_reg(){
    if(curr==20){
        printf("All registers used!\n");
        exit(1);
    }
    return curr++;
}

int free_reg(){
    if(curr==0){
        printf("Invalid free\n");
        exit(1);
    }
    return curr--;
}

int code_gen(struct tnode* t){
    int i;
    if(t->op==NULL){
        i=get_reg();
        fprintf(fp,"MOV R%d,%d\n",i,t->val);
    }else{
        i=code_gen(t->left);
        int j=code_gen(t->right);
        switch(*(t->op)){
            case '+' : fprintf(fp,"ADD R%d,R%d\n",i,j);
                       break;
            case '-' : fprintf(fp,"SUB R%d,R%d\n",i,j);;
                       break;
            case '*' : fprintf(fp,"MUL R%d,R%d\n",i,j);;
                       break;
            case '/' : fprintf(fp,"DIV R%d,R%d\n",i,j);;
                       break;
        }
        free_reg();
    }
    return i;
}

void after_code(int i){
    
    fprintf(fp,"MOV [4096],R%d\n",i);
    fprintf(fp,"MOV R4 , \"Write\"\n");
    fprintf(fp,"PUSH R4\n");
    fprintf(fp,"MOV R4 ,-2\n");
    fprintf(fp,"PUSH R4\n");
    fprintf(fp,"MOV R4,[4096]\n");
    fprintf(fp,"PUSH R4\n");
    fprintf(fp,"PUSH R4\n");
    fprintf(fp,"PUSH R4\n");
    fprintf(fp,"CALL 0\n");
    fprintf(fp,"POP R4\n");
    fprintf(fp,"POP R4\n");
    fprintf(fp,"POP R4\n");
    fprintf(fp,"POP R4\n");
    fprintf(fp,"POP R4\n");

    fprintf(fp,"MOV R4 , \"Exit\"\n");
    fprintf(fp,"PUSH R4\n");
    fprintf(fp,"PUSH R4\n");
    fprintf(fp,"PUSH R4\n");
    fprintf(fp,"PUSH R4\n");
    fprintf(fp,"PUSH R4\n");
    fprintf(fp,"CALL 0\n");
    fprintf(fp,"POP R4\n");
    fprintf(fp,"POP R4\n");
    fprintf(fp,"POP R4\n");
    fprintf(fp,"POP R4\n");
    fprintf(fp,"POP R4\n");


}
