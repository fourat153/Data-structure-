#include "stdio.h"
#include"stdlib.h"
#include "string.h"
int valid (char  string[]) ;
int main ()
{
    char arr[] = "HI";
    int res =  valid(arr) ; 
    printf("%d" ,res);

}

int valid (char string[]) 
{
    int res = 0 ; 
    for (int i = 0 ; string[i] !='\0'; i++ )
    {
        if ((!('A' <= string[i] && string[i]<= 'Z')) || (!('a' <= string[i] && string[i] <= 'z')))
        {
                res = 1;
        }
    }
    return res ; 

}