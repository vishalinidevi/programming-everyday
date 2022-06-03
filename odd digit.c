Print the odd digits of a number
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,digit,rem;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(num>0){
        digit = num % 10;
        num = num / 10;
        rem = digit % 2;
        if(rem != 0)
            printf("\n  %d.",digit);
    }
    return 0;
}
