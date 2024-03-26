#include <stdio.h>

void figure(int height) {
    int i;
    int j;
    for (i = 0; i < height; i++) {
        for (j = 0; j < (height - i - 1); j++) {
            printf("-");
        }
        for (j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int height;
    printf("Please enter the height  : ");
    scanf("%d", &height);
    figure(height);
    return 0;
}