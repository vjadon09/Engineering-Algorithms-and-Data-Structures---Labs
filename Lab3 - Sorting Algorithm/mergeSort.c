#include "mySort.h"


void merge(int array[], int first, int mid, int last)
{

		int temp[MAX_SIZE_N_TO_SORT];
		int a, b, c;
		a = first;
		b = mid + 1;
		c = 0;
		
	while(myCompare(a,mid) <= 0 && myCompare(b,last) <= 0)
	{
		if(myCompare(array[a],array[b])< 0){
			temp[c++] = array[a++];  
		}
		else{
			temp[c++] = array[b++];
    } 
  }
	while(a <= mid)
		(myCopy(&array[a++], &temp[c++]));
  
	while(b <= last)
		(myCopy(&array[b++], &temp[c++]));
		
	for(a=first,b=0; a <= last; a++, b++)
		mySwap(&array[a], &temp[b]);
}

void mySort(int array[], unsigned int first, unsigned int last)
    {
		//int mid = 0;

		if(first < last){	
			int mid = (first + last) / 2;
			mySort(array, first, mid);
			mySort(array, mid+1, last);
			merge(array, first, mid, last);	
		}	
}

