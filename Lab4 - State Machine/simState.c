#include <stdlib.h>
#include <stdio.h> 


typedef struct point //learned about structures
{
	char state;
	int number; //State Number
	int variable;
	struct point*pointer0;
	struct point*pointer1;
	//int delete; //variable to delete non existenet state.
	
}finiteStateMachine;

	finiteStateMachine machineState[8]; //Array

void intial_states(){
	
	machineState[0].state = 'A';
	machineState[0].number  = 0;
	machineState[0].pointer0 = machineState + 6; //G
	machineState[0].pointer1 = machineState + 1; //B
	
	machineState[1].state = 'B';
	machineState[1].number = 1;
	machineState[1].pointer0 = machineState + 4; //E
	machineState[1].pointer0 = machineState + 7; //H
	
	machineState[2].state = 'C';
	machineState[2].number  = 2;
	machineState[2].pointer0 = machineState + 1; //B
	machineState[2].pointer1 = machineState; //A
	
	machineState[3].state = 'D';
	machineState[3].number  = 3;
	machineState[3].pointer0 = machineState + 7; //B
	machineState[3].pointer1 = machineState + 6; //A
	
	machineState[4].state = 'E';
	machineState[4].number  = 4;
	machineState[4].pointer0 = machineState + 3; //D
	machineState[4].pointer1 = machineState + 2; //C
	
	machineState[5].state = 'F';
	machineState[5].number  = 5;
	machineState[5].pointer0 = machineState + 2; //C
	machineState[5].pointer1 = machineState + 4; //E
	
	machineState[6].state = 'G';
	machineState[6].number  = 6;
	machineState[6].pointer0 = machineState + 5; //F
	machineState[6].pointer1 = machineState + 6; //G
	
	machineState[7].state = 'H';
	machineState[7].number  = 7;
	machineState[7].pointer0 = machineState;     //A
	machineState[7].pointer1 = machineState + 3; //D
}

void display(){
	int a = 0;
	for (a = 0; a<8; a++){
		if(machineState[a].variable != 3){
		fprintf(stdout, "%c %c %c \n", machineState[a].state, machineState[a].pointer0->state, machineState[a].pointer1->state);
		}
	}
}

/*void delete(char array1[][3], //need the garbage array, int count) { //delete can't work if garbage is not working properly.
	/int i, j;
	for(i = 0; i < count; i++) {
		for(j = 0; j < 8; j++) {
			}
		}	 	 
	}	 
	
}
* 
* 
* void garbageCheck(char array1[][3], int current, int instances[8], int deleteOrNot) {
	int i, j = 0, count = 0;
	for(i = 0; i < 8; i++) { 
	* tempvar = &machineState[a]
	* 
	* if tempvar-> next_state==&state[0]||tempvar->==&state[0]){
	* check[0] = 1;
	* }
	* if tempvar->next_state==&state[1]||tempvar->
	* 
	* */


int main(int argc, char * argv[])
{
	int a, b=0;
	char array[3];
	intial_states();
	finiteStateMachine current = machineState[2];
	

	fprintf(stdout, "Please input a command: \n");
	fprintf(stdout, "Starting State: %c \n", current.state);
	

	while(b!=1){
		for(a=0; a<=4; a++){
			scanf("%c", &array[a]);
			if(array[a] == '\n'){
				display();
			//break;
		}
	}
	
	if(array[0] == '0'){
		fprintf(stdout, "%c \n", current.pointer0->state);
		current = machineState[current.pointer0->number];
		}
	}
	
	if(array[0] == '1'){ 
	    fprintf(stdout, "%c\n", current.pointer1->state);
		current = machineState[current.pointer1->number];
  }
	
	if(array[0] == 'o'){
	    display();
	  }
	 
	/*if(array[0] == 'c'){

	  if(array[2] == '0'){

	       if(array[4] == 'A'){
		   current.pointer0 = machineState;
		   machineState[current.number].pointer0 = machineState;
           }	

           else if(array[4] == 'B'){
		   current.pointer0 = machineState + 1;
		   machineState[current.number].pointer0 = machineState + 1;
           }

           else if(array[4] == 'C'){
		   current.pointer0 = machineState + 2;
		   machineState[current.number].pointer0 = machineState + 2;
           }

           else if(array[4] == 'D'){
		   current.pointer0 = machineState + 3;
		   machineState[current.number].pointer0 = machineState + 3;
           }

           else if(array[4] == 'E'){
		   current.pointer0 = machineState + 4;
		   machineState[current.number].pointer0 = machineState + 4;
           }

           else if(array[4] == 'F'){
		   current.pointer0 = machineState + 5;
		   machineState[current.number].pointer0 = machineState + 5;
           }

           else if(array[4] == 'G'){
		   current.pointer0 = machineState + 6;
		   machineState[current.number].pointer0 = machineState + 6;
           }	

           else if(array[4] == 'H'){
		   current.pointer0 = machineState + 7;
		   machineState[current.number].pointer0 = machineState + 7;
           }		   
	  }  
	}

	if(array[0] == 'c'){
		

	  if(array[2] == '1'){

	       if(array[4] == 'A'){
		   current.pointer1 = machineState;
		   machineState[current.number].pointer1 = machineState;
           }	

           else if(array[4] == 'B'){
		   current.pointer1 = machineState;
		   machineState[current.number].pointer1 = machineState + 1;
           }

           else if(array[4] == 'C'){
		   current.pointer1 = machineState;
		   machineState[current.number].pointer1 = machineState + 2;
           }

           else if(array[4] == 'D'){
		   current.pointer1 = machineState;
		   machineState[current.number].pointer1 = machineState + 3;
           }

           else if(array[4] == 'E'){
		   current.pointer1 = machineState;
		   machineState[current.number].pointer1 = machineState + 4;
           }

           else if(array[4] == 'F'){
		   current.pointer1 = machineState;
		   machineState[current.number].pointer1 = machineState + 5;
           }

           else if(array[4] == 'G'){
		   current.pointer1 = machineState;
		   machineState[current.number].pointer1 = machineState + 6;
           }	

           else if(array[4] == 'H'){
		   current.pointer1 = machineState;
		   machineState[current.number].pointer1 = machineState + 7;
           }		   
	  }  
  }
	exit(0);
}

			
	
