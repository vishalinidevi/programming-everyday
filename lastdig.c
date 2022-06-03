Print the last digit of the given number.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,lastdigit;
    printf("Enter the number: ");
    scanf("%d",&a);
    lastdigit=a%10;
    printf("Last digit of the number %d",lastdigit);
    return 0;
}
