#include <stdio.h>
#include <string.h>

char str[50];
int i=0;

void E();
void T();

void E() {
    T();
    if(str[i]=='+') {
        i++;
        E();
    }
}

void T() {
    if(str[i]=='a')
        i++;
    else {
        printf("Error\n");
        return;
    }
}

int main() {
    printf("Enter string: ");
    scanf("%s",str);

    E();
    if(str[i]=='\0')
        printf("Accepted\n");
    else
        printf("Rejected\n");
}
