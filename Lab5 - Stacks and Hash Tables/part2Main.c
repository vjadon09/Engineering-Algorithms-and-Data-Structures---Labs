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
  int table[26] = {0};
  int i = 0;
  
  

  while ((ch = getchar()) != EOF)
  {
    if (!(isalpha(ch) || ch == '>' || ch == '<' || ch == '/'))
      continue;

  else if(ch == '<'){
   
   int ch = getchar();

	if(isalpha(ch)){
		push(ch);
		int array = (int)ch-97;
		table[array]++; 
      }

   else if(ch == '/') 
     {
     ch = getchar();
     popped = pop();						 

    if(ch != popped){
    fprintf(stderr,"Not Valid\n"); 
	exit(1); 
	 }
	 }
	 }	
   //else{
	//fprintf(stdout,"Valid"); 
	
	if(isEmpty()== 1){
		fprintf(stderr,"Stack Empty: Valid\n");
		for (i=0; i<26; i++){
			if(table[i]>0)
			fprintf(stdout,"%c %d\n", (char)(i+97), table[i]);
		}
	exit(0); 
	} 
   }
   
   if (isEmpty() == 0){
      fprintf(stdout,"Stack Not Empty: Not Valid");
 	  exit(1);   
    }   
   exit(0);
  }