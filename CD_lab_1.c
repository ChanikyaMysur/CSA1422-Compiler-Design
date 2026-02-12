#include <stdio.h>
#include <ctype.h>

int isOperator(char ch) {
    return ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='=';
}

int main() {
    char str[200], token[50];
    int i=0,j;

    printf("Enter expression: ");
    scanf(" %[^\n]", str);

    while(str[i]!='\0') {
        if(isspace(str[i])) { i++; continue; }

        if(isalpha(str[i])) {
            j=0;
            while(isalnum(str[i])) token[j++]=str[i++];
            token[j]='\0';
            printf("Identifier: %s\n",token);
        }
        else if(isdigit(str[i])) {
            j=0;
            while(isdigit(str[i])) token[j++]=str[i++];
            token[j]='\0';
            printf("Constant: %s\n",token);
        }
        else if(isOperator(str[i])) {
            printf("Operator: %c\n",str[i]);
            i++;
        }
        else i++;
    }
}
