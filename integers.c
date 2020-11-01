#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ret1, ret2;
    int i;
    printf("Type an integer number:");
    ret1 = scanf("%d" , &i);
    if ( i<0 )
        printf("You typed a negative integer\n");
    else if ( i==0 )
        printf("You typed Zero\n");
    else
        printf("you typed a positive integer\n");
   return 0;
}
