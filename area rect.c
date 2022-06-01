Find the area of a rectangle given the length and breadth.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l,b,area;
    printf("Enter the length and breath: ");
    scanf("%d %d",&l,&b);
    area=l*b;
    printf("Area of the rectangular %d",area);
    return 0;
}
