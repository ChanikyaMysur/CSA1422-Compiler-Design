#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter a*b+c format: ");
    scanf("%d*%d+%d",&a,&b,&c);
    printf("Result: %d\n",a*b+c);
}
