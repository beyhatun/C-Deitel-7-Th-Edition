#include <stdio.h>
#include <math.h>

int main() {
    float e = 0.0;
    int n, fakt = 1, i = 1;

    printf("Enter number: ");
    scanf("%d", &n);

    while (i <= n) {
        fakt = fakt * i;                
        e = e + (pow(n, i) / fakt);     
        i++;
    }
   
    printf("e: %f\n", e);

    return 0;
}

