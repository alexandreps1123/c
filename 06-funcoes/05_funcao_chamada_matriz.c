#include <stdio.h>

void display(int num[10]);
void display2(int *num);

int main() {
    int t[10], i;
    
    for(i=0; i<10; ++i) t[i] = i;
        
    display(t);
    display2(t);
    
    return 0;
}

void display(int num[10]) {
    int i;

    for(i=0; i<10; ++i) printf("%d ", num[i]);
    
    printf("\n");
}

void display2(int *num) {
    int i;

    for(i=0; i<10; ++i) printf("%d ", num[i]);
    
    printf("\n");
}