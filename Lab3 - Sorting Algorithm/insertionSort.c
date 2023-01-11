#include "mySort.h"
#include "metrics.h"

void mySort(int array[], unsigned int first, unsigned int last)
    {
		
		int j, key, i;

		for(j = 1; j < last+1; j++)
		{
			myCopy(&array[j], &key); 
			i = j-1;
			
			while(i >= 0 && (myCompare(array[i],key) >= 0))
			{
				mySwap(&array[i], &array[i+1]); //We need to see if the key and the array is greater than zero. Then we can swap the positions so that the array is sorted.
				i = i-1;
		 }
		 
		 myCopy(&key, &array[i+1]);
    }
}
