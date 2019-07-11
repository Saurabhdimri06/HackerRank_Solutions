#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int m = n;
    int sum = 0;
    while(m>0)
    {
        int n = 0;
        n = m%10;
        sum += n;
        m = m/10;
    }
    printf("%d",sum);
    return 0;
}

