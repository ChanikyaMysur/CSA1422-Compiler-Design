#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    int i=0,j;

    printf("Enter string: ");
    scanf("%s",str);

    j=strlen(str)-1;

    while(i<j && str[i]=='a' && str[j]=='b') {
        i++; j--;
    }

    if(i==j+1)
        printf("Valid string\n");
    else
        printf("Invalid string\n");
}
