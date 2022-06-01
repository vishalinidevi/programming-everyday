Find whether the given number is negative or positive
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter th number: ");
    scanf("%d",&a);
    if(a>0)
        printf("Positive number");
    else
        printf("Negative number");
    return 0;
}
