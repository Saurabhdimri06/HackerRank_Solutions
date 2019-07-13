//Suma dn diffrence using pointers

#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    int sum = *a + *b;  
    int diff = abs(*a - *b);				//abs function is defined in stdlib and is used to get the modulus of the answer
    printf("%d\n%d",sum,diff);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);

    return 0;
}

