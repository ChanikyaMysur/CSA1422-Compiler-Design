#include <stdio.h>

int main() {
    char op;
    printf("Enter operator: ");
    scanf("%c",&op);

    if(op=='+'||op=='-'||op=='*'||op=='/')
        printf("Valid operator\n");
    else
        printf("Invalid operator\n");
}
