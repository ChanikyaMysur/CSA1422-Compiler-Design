#include <stdio.h>

int main() {
    char ch;
    int space=0,newline=0;

    printf("Enter text (Ctrl+Z to stop):\n");

    while((ch=getchar())!=EOF) {
        if(ch==' ') space++;
        if(ch=='\n') newline++;
    }

    printf("Spaces: %d\n",space);
    printf("Newlines: %d\n",newline);
}
