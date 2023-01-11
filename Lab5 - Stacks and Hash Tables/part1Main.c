#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

extern int pop();
extern void push(int);
extern int isEmpty();

int main(int argc, char * argv[])
{
  int ch;
  int popped;

  while ((ch = getchar()) != EOF)
  {
    if (!(isalpha(ch) || ch == '>' || ch == '<' || ch == '/'))
      continue;

  else if(ch == '<'){
   
   ch = getchar();

	if(isalpha(ch)){
		push(ch); 
      }

   else if(ch == '/'){
     ch = getchar();
     popped = pop();						 

    if(popped != ch){
          
	fprintf(stderr,"Not Valid"); 
	 exit(1); 
	 }
	
   else {
	fprintf(stdout,"Valid"); 
	exit(0); 
	} 
   }
 }
}
	
    if(isEmpty()== 1){
		fprintf(stderr,"Stack Empty: Valid");
		exit(1);   
	}
    else if (isEmpty() == 0){

      fprintf(stdout,"Stack Not Empty: Not Valid");
 	  exit(0);   
    }   
   exit(0);
  }