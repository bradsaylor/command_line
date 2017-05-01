#include <stdio.h>

FILE *fp;
char filename[] = "output.txt";

  char *Object_types[6]; 

  char choice[10];
  char name[30];
  int _index;
  char *str_ptr;
  int size_Object_types;

typedef enum{
  Cfile,
  Hfile,
  IntVar,
  ExtVar,
  IntFunc,
  ExtFunc
}object_type;
  

typedef struct{
  char obj_name[30];
  object_type obj_type;
}object_class;
