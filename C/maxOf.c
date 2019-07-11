//To calculate max among the numbers

#include <stdio.h>
int max_of_four(a,b,c,d){
    int max = a;
    if(a<b || a<c || a<d){
        max = b;
        if(b<c||b<d){
            max = c;
            if(c<d){
                max = d;
            }
        }
    }
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    return 0;
}

