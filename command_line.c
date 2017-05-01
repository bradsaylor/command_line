
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "command_line.h"


int main(void){
  object_type obj_type;
  object_class input_obj;
  
  Object_types[0] = "[1] - .c file";
  Object_types[1] = "[2] - .h file";
  Object_types[2] = "[3] - internal function";
  Object_types[3] = "[4] - external function";
  Object_types[4] = "[5] - internal variable";
  Object_types[5] = "[6] - external variable";

  size_Object_types = (sizeof(Object_types))/(sizeof(Object_types[0]));
  
  printf("\033[2J\033[1;1H");  //clear console screen

  printf("Menu: \n\n");

  for(_index = 0;_index<size_Object_types;_index++){   //print out menu
    str_ptr = Object_types[_index];

    while(*str_ptr){
      printf("%c",*str_ptr);
      str_ptr++;
    }
    printf("\n");
  }
  

  printf("\n\nChoose a menu option: ");   //ask for menu input
  scanf("%s", choice);
  
  if((strlen(choice))>1){                 //check input bounds
    printf("Choice out of bounds\n");
  }
  else if((0<(choice[0]-'0')) && ((choice[0]-'0')<=size_Object_types)){
    char type[30];
    printf("Enter name: ");
    fgets(input_obj.obj_name,30, stdin);
    printf("Enter type: ");
    fgets(type, 5,stdin);
    input_obj.obj_type = atoi(type); 
  }
  else{
    printf("Choice out of bounds\n");
  }

  fp = fopen(filename,"w");
  fprintf(fp,"\nName is: %s",input_obj.obj_name);
  fprintf(fp,"\ntype is: %d",input_obj.obj_type);
  fclose(fp);

  
  
  return 0;
}
