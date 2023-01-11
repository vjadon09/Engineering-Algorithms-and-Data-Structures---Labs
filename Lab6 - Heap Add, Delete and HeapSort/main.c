#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

extern int pop();
extern int heapSize();
extern int heapDelete();
extern void push(int);
extern void addHeap(int);
extern void printHeap(int);
extern void sortHeap(int);
extern void isEmpty();

int main(int argc, char * argv[])
{
	
  int value;
  int size;
  int variable; 
  int counter = 0; 
  int i;
  
  while (scanf("%d\n", &value) != EOF) {
    fprintf(stderr, "READING INPUT: %d\n", value);
    addHeap(value);
    counter +=1;

}

	printHeap(0);
	size = heapSize();
	
	for(i=0; i < size; i++){
		variable = heapDelete();
		printf("%d\n", variable);
		push(variable);
	}
	
	printf("\n");
	
	for (i=0; i<counter; i++){
		printf("%d\n", pop());
	}
  exit(0);
}
