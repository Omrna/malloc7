#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SECRET1 0x44
#define SECRET2 0x55
int main(int argc, char *argv[])
{
    char *input = "hello";
    
    char *str1 = malloc(strlen(input));
    char *str2 = malloc(strlen(input)+0);
    char *str3 = malloc(strlen(input)-1);
    char *str4 = malloc(strlen(input)+1);
    char *str5 = malloc(strlen(input)+100000);
    
    strcpy(str1, input);
    strcpy(str2, input);
    strcpy(str3, input);
    strcpy(str4, input);
    strcpy(str5, input);
    
    return 0;
}
