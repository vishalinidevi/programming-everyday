Find the area of a circle, given the radius
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,area;
    printf("Enter the radius: ");
    scanf("%d",&r);
    area=3.14*r*r;
    printf("Area of the circle is %d",area);
    return 0;
}
