#include <stdio.h>

int series(void);

int main() {
     printf("%d\n", series());
     printf("%d\n", series());

     return 0;
}

int series() {
     static int series_num = 100;
     series_num = series_num + 23;
     return series_num;
}
