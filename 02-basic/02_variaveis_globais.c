#include <stdio.h>

int count;

void func1();
void func2();

int main() {
     count = 100;
     func1();
     func2();

     return 0;
}

void func1() {
     int temp;

     temp = count;
     func2();
     printf("count eh %d", temp);
}

void func2() {
     int count;
     for(count=1; count<10; count++)
          putchar('.');
}
