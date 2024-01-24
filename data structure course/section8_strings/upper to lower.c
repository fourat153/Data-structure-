#include "stdio.h"
#include"stdlib.h"
#include "string.h"
void change (char  string[]) ;
int main ()
{
    char arr[] = "WLECOME";
    change(arr) ; 
    printf("%s" ,arr );

}

void change (char string[]) 
{
    for(int i = 0 ;  string[i] != '\0' ; i++)
    {
        string[i] = string[i] + 32; 
    }
}