#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int longitud(char str[])
{
    unsigned int i = 0;
    while(str[i])
    ++i;
    return i;
}
void inversa(char str[]);
int main(void)
{
    char str[10];
    printf("Cadena : ");
    scanf("%9[^\n]", str);
    inversa(str);
    return 0;
}
void inversa(char str[])
{
    signed int i;
    for(i = longitud(str); i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}
