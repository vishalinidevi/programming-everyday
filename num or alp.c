Find whether the given input character is alphabet or number
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter the check: ");
    scanf("%d",&a);
    if(a>0&&a<9)
        printf("Number");
    else
        printf("Alphabet");
    return 0;
}
