#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;

    p = (int *) calloc(10, sizeof(int));

    int i;
    for (i = 0; i < 10; i++) {
        scanf("%d", &p[i]);
    }


    int tong = 0;
    for (i = 0; i < 10; i++) {
        if (p[i] % 2 == 0) {
            tong += p[i];
        }
    }

    printf("%d", tong);


    return 0;
}