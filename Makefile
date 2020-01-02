all: main.c src/SparseRange.c
	gcc src/SparseRange.c main.c -o main
