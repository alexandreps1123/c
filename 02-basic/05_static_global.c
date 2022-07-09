#include <stdio.h>

//variavel global 'static' so eh reconhecida no arquivo em que ela foi declarada
static int series_num;
void series_start(int seed);
int series(void);

int main() {
     //series_start(10);
     printf("%d\n", series());
     printf("%d\n", series());
     printf("%d\n", series());

     return 0;
}

int series(void) {
     series_num = series_num+23;
     return series_num;
}

void series_start(int seed) {
     series_num = seed;
}
