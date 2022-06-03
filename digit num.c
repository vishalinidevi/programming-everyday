 Print the digits of a number
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    while(a!=0)
    {
        int digit=a%10;
        a=a/10;
        printf("Digits of the number %d\n",digit);
    }
    return 0;
}
