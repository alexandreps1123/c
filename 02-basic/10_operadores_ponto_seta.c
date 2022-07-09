#include <stdio.h>
#include <string.h>

struct employee {
     char name[80];
     int age;
     float wage;
}emp;

int main() {
     struct employee *p = &emp;

     emp.wage = 123.21;
     strcpy(p->name, "alexandre");

     printf("%s\n", emp.name);
     printf("%f\n", p->wage);

     return 0;
}
