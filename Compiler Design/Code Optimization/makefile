CC=gcc

optimizer: lex.yy.c y.tab.c
	$(CC) lex.yy.c y.tab.c -ll -ly -o icgopt -w

lex.yy.c: y.tab.c lex.l
	lex lex.l

y.tab.c: par.y
	yacc -d par.y

clean:
	$(RM) lex.yy.c y.tab.c y.tab.h optimizer
