target: bst_test.exe

bst_test.exe: bst_test.o lbst.a
	gcc bst_test.o -o bst_test.exe -L . lbst.a
bst_test.o: bst_test.c
	gcc -c bst_test.c -o bst_test.o
lbst.a: bst.o
	ar rs lbst.a bst.o
bst.o: bst.c
	gcc -c bst.c -o bst.o
clean:
	rm *.o
	rm lbst.a
	rm bst_test.exe
