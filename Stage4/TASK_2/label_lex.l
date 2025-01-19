
	
%{
	#include <stdlib.h>
	#include <stdio.h>

	int number;
	struct label_pair{
		char* label;
		int addr;
		struct label_pair* next;
	};
	int pass_no=1;
	int instr_no=-8;
	char* label_name;
	FILE* fp1;
	FILE* fp2;
	struct label_pair* head=NULL;
	struct label_pair* tail=NULL;
	
%}

letter  [a-zA-Z]
digit [0-9]

%%
{letter}({letter}|{digit})+(":")([\n])	{
					 if(pass_no==1){
						 instr_no++;
						 struct label_pair* t=(struct label_pair*)malloc(sizeof(struct label_pair));
						 t->addr=2056+(instr_no-1)*2;
						 instr_no--;
						 t->label=(char*)malloc((yyleng-1)*sizeof(char));
						 strncpy(t->label,yytext,yyleng-2);
						 t->next=NULL;
						 if(head==NULL){
						 	head=t;
						 	tail=t;
						 }else{
						 	struct label_pair* temp=head;
						 	while(temp->next!=NULL){
						 		temp=temp->next;
						 	}
						 	temp->next=t;
						 	tail=t;
						 	
						 }
				         }
					 
					 }

("CALL"|"JMP")([ ])({digit}+)([\n])	{if(pass_no==1) instr_no++;
					 if(pass_no==2)
					 	fprintf(fp2,"%s",yytext);	
					 }

("JZ"|"JNZ")([ ])("R")({digit}+)(",")({digit}+)([\n])	{if(pass_no==2)
					 			fprintf(fp2,"%s",yytext);
					 		 if(pass_no==1) instr_no++;	
					 		}

("JZ"|"JNZ")([ ])("R")({digit}+)(","){letter}({letter}|{digit})+([\n])	{if(pass_no==1) instr_no++;
									 if(pass_no==2){
										 int i=0;
										 while(yytext[i]!=','){
										 	i++;
										 }
										 char command[100]="";
										 strncpy(command,yytext,i+1);
										 char temp_label[10]="";
										 int j=i;
										 while(yytext[j]!='\n'){
										 	j++;
										 }
										
										 strncpy(temp_label,yytext+i+1,j-i-1);
										 printf("Label is: %s",temp_label);
										 printf("Current command is: %s",command);
										 
										 struct label_pair* t=head;
										 int addr=-1;
										 while(t!=NULL){
										 	if(strcmp(t->label,temp_label)==0){
										 		addr=t->addr;
										 		break;
										 	}
										 	t=t->next;
										 }
										 if(addr==-1){
										 	printf("Label not in linked list\n");
										 	exit(1);
										 }
										 char address[10]="";
										 snprintf(address,sizeof(address),"%d",addr);
										 strcat(command,address);
										 fprintf(fp2,"%s\n",command);
									 }
									 }

("CALL"|"JMP")([ ]){letter}({letter}|{digit})+([\n])	{if(pass_no==2){
								int i=0;
								while(yytext[i]!=' '){
									i++;
								}
								char command[100]="";
								strncpy(command,yytext,i+1);
								char temp_label[10]="";
								int j=i;
								while(yytext[j]!='\n'){
									j++;
								}
										
								strncpy(temp_label,yytext+i+1,j-i-1);
								printf("Label is: %s",temp_label);
								printf("Current command is: %s",command);
										 
								struct label_pair* t=head;
								int addr=-1;
								while(t!=NULL){
									if(strcmp(t->label,temp_label)==0){
										 addr=t->addr;
										 break;
									}
									t=t->next;
								}
								if(addr==-1){
									printf("Label not in linked list\n");
									exit(1);
								}
								char address[10]="";
								snprintf(address,sizeof(address),"%d",addr);
								strcat(command,address);
								fprintf(fp2,"%s\n",command);
							}
							if(pass_no==1) instr_no++;
							
							}

(.)+(\n)	{if(pass_no==1) instr_no++;
		 if(pass_no==2)
			fprintf(fp2,"%s",yytext);
		}

%%

int yywrap(){

	if(pass_no==1){
		pass_no=2;
		fclose(yyin);
		yyin=fopen("code.xsm","r");
		printf("Reaching here\n");
		fp2=fopen("code2.xsm","w+");
		printf("Creating here\n");
		return 0;
	}
	return 1;
}

int main(){
	yyin=fopen("code.xsm","r");
	
	yylex();
	return 0;

}
