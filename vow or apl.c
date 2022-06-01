Find whether the given character is vowel or constant
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    printf("Enter th character: ");
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u' )
        printf("Vowels");
    else
        printf("Consonant");
    return 0;
}