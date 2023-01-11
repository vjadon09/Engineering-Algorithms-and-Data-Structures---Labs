#include <stdlib.h>
#include "towers.h"
#include <stdio.h>

/*Notes: argc is the number of arguments being passed into your program from the command line and argv is the array of arguments*/ 

int main(int argc, char **argv)
{
    int n = 3;
    int from = 1;
    int dest = 2;
    
if (argc == 2) {
	if (argc > 0){ 
		fprintf(stderr, "Input a correct value");
		exit(1);
	}
		else {
			n = atoi(argv[1]);
			}
			/*towers(n, from, dest);*/
}

if (argc == 4){
	n = atoi(argv[1]);
	from = atoi(argv[2]);
	dest = atoi(argv[3]);
}	
		else if (from == dest){
			fprintf(stderr, "Start Number cannot be the same as the Last Number");
			exit(1);
		}
	towers(n, from, dest);
    exit(0);
}

	
