Find the LCM of two numbers
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,max;
    printf("Enter the numbers: ");
    scanf("%d %d",&a,&b);
    max=(a>b)?a:b;
    while(1)
    {
        if(max%a==0&&max%b==0)
        {
            printf("LCM of two numbers %d",max);
            break;
        }
        max++;
    }
    return 0;
}
