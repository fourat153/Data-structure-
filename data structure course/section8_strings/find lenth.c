#include "stdio.h"
#include"stdlib.h"
#include "string.h"
int len (char  string[]) ;
int main ()
{
    char arr[] = {'a','b' ,'e','\0'};
    int res = len(arr); 
    printf("%d" , res ) ; 

}

int len (char string[]) 
{
    int counter = 0 ; 
    while (string[counter] != '\0')
    counter++;
    return counter;
}