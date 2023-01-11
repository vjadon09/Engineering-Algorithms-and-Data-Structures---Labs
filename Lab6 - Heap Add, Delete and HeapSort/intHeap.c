/**
 *  The functions in this module implement a Heapdata structure
 *  of integers.
 */


#include <stdio.h>
#include <stdlib.h>
#include <tgmath.h>
#include <ctype.h>


int heap[1000];
int size = 0;


int heapSize()
{
	return size; 
}

void printHeap(int position){
	
	int after;
	printf("<nodeid= %d>\n", heap[position]);
	after = (2* position) + 1;
	if(after < heapSize()){
		printHeap(after);
	}
	
	after = (2* position) + 2;
	if(after < heapSize()){
		printHeap(after);
}

		printf("</node>\n");
	}

void sortHeap(int p){
	
	int maximum;
	int var;	
	int first, second;
	first = (2 * p) + 1;  /*left*/
	second = (2 * p) + 2; /*right*/ 
	
	if((heap[p] < heap[first]) && (first < heapSize()))
	{
		maximum = first; 
	}
	else
	{
		maximum = p;
	}
		
	if ((heap[maximum] < heap[second]) && (second < heapSize())){
		maximum = second;
	}
	
	if (maximum != p){
		sortHeap(maximum);
		var = heap[maximum];
		heap[maximum] = heap[p];
		heap[p] = var;
	}
}
	
void addHeap(int thing2add)
{
	int var;
	int i; 
	int j;
	i = heapSize();
	j = (i-1)/2;
	heap[size] = thing2add;
	
	while(i>0 && heap[(i-1)/2] < heap[i])
	{
		var = heap[j];
		heap[j] = heap[i];
		heap[i] = var;
		i = j;
		j = (i-1)/2;
		}
		size++;
		}
		
int heapDelete()
{
	
	int maximum = heap[0];
	size--;
	heap[0] = heap[size];
	sortHeap(0);
	return maximum;
  
}

