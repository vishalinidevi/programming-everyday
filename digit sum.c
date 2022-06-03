Find the sum of digits of a number
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,sum=0;
    printf("Enter the number: ");
    scanf("%d",&a);
    while(a!=0)
    {
        int digit=a%10;
        a=a/10;
        sum=sum+digit;
    }
    printf("Sum of thee digits %d",sum)
    return 0;
}
