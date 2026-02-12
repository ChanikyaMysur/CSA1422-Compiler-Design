#include <stdio.h>
#include <string.h>

struct symbol {
    char name[20];
    char type[10];
} s[10];

int main() {
    int n,i;
    printf("Enter number of symbols: ");
    scanf("%d",&n);

    for(i=0;i<n;i++) {
        printf("Name: ");
        scanf("%s",s[i].name);
        printf("Type: ");
        scanf("%s",s[i].type);
    }

    printf("\nSymbol Table:\n");
    for(i=0;i<n;i++)
        printf("%s\t%s\n",s[i].name,s[i].type);
}
