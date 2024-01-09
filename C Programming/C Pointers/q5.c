/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
};

int main ()
{
  struct Employee khaled = {"khaled",7007}, ahmed={"ahmed",5454};
  struct Employee * arr[]={&khaled,&ahmed};
  struct Employee *(*ptr)[2]=&arr;
  printf("name: %s id : %d\n",(**ptr)->name,(**ptr)->id);
  printf("name: %s id : %d",(*(*ptr+1))->name,(*(*ptr+1))->id);
  return 0;
}
