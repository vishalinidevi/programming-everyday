 Find the biggest of 10 numbers
 #include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],lar=0,i;
    printf("Enter the set of numbers: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]>a[i+1])
            lar=a[i];
    }
    printf("Largest number %d",lar);
    return 0;
}
