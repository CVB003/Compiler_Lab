yacc -d exptree.y
lex exptree.l
gcc y.tab.c lex.yy.c
./a.out test_TASK_4_break.txt

