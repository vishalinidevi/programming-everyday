Find whether the given number is odd or even
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Entr th number:");
    scanf("%d",&a);
    if(a%2==0)
        printf("Even");
    else
        printf("Odd");
    return 0;
}
