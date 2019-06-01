/*
QUES -
You have to complete the function void update(int *a,int *b), which reads two integers as argument, and sets with the sum of them, and
with the absolute difference of them.

Input Format
Input will contain two integers,
and separated by a newline.

Output Format
You have to print the updated value of
and on two different lines.			
*/
//			CODE				//
#include <stdio.h>

void update(int *a,int *b) {
    int sum,diff;
    sum = *a + *b;
    if(*a > *b)
        diff = *a - *b;
    else 
        diff = *b - *a;

    *a = sum;
    *b = diff;
    // Complete this function    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

