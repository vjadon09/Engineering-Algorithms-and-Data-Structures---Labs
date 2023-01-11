//  
//
//

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define HASH_TABLE_SIZE 1057
typedef struct Entry Entry, *EntryPtr;
struct Entry {
  char * string;
  int count;
};
Entry hash_table[HASH_TABLE_SIZE];


void add(char * tag)
{
	int hashValue, a, total = 0;
	for(a=0; a<strlen(tag); a++){
		total = total + tag[a];
	}
	
	hashValue = total % HASH_TABLE_SIZE;
	
	if(hash_table[hashValue].count==0){
		hash_table[hashValue].string == tag;
		}
	else
	if(hash_table[hashValue].count != 0){
		hash_table[hashValue].string = tag;
	}
	}
	
	int get(char * tag){
	int hashvalue, returnHash, a, total = 0;
	
	for (a = 0; a < strlen(tag); a++){
		total = total + tag[a];
	}
	return returnHash;
}
} 
