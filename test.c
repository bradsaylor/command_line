#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char name[30];
char num[30];
int number;

int main(){
  FILE *fp;
  char filename[] = "testout.txt";

  printf("\nEnter name: ");
  fgets(name,10,stdin);
  printf("\nEnter number: ");
  fgets(num, 10,stdin);
  number = atoi(num);
  number++;

  printf("\nName was: %s", name);
  printf("\nNumber was: %d", number);
  fp = fopen(filename, "w");
  fprintf(fp,"\aName: %s\tNumber: %d",name,number);
  fclose(fp);
    
  return 0;
}
  
