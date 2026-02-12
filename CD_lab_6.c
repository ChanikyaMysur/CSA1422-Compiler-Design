#include <stdio.h>
#include <string.h>

int main() {
    char A[10], alpha[20], beta[20];

    printf("Enter Non-terminal: ");
    scanf("%s",A);

    printf("Enter alpha: ");
    scanf("%s",alpha);

    printf("Enter beta: ");
    scanf("%s",beta);

    printf("After removing Left Recursion:\n");
    printf("%s -> %s%s'\n",A,beta,A);
    printf("%s' -> %s%s' | e\n",A,alpha,A);
}
