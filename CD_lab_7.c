#include <stdio.h>
#include <string.h>

int main() {
    char A[10], common[10], beta1[10], beta2[10];

    printf("Enter Non-terminal: ");
    scanf("%s",A);
    printf("Enter common prefix: ");
    scanf("%s",common);
    printf("Enter beta1: ");
    scanf("%s",beta1);
    printf("Enter beta2: ");
    scanf("%s",beta2);

    printf("After Left Factoring:\n");
    printf("%s -> %s%s'\n",A,common,A);
    printf("%s' -> %s | %s\n",A,beta1,beta2);
}
