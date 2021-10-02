#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void rec_reverse(char *rev)
{
    if (*rev != '\0')
    {
        rec_reverse(rev+1);
        printf("%c", *rev);       
    }

}

int main()
{
    char s[500];
    fgets(s, 500, stdin);
    rec_reverse(s);
    return 0;
}