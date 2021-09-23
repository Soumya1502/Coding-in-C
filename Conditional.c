#include <stdio.h>

int main()
{
    int n; 
    printf("Enter marks: ");
    scanf("%d",&n);
    printf("%s",((n>100||n<0)?"Enter a vlid value":((n>=85&&n<=100)?"Grade A":((n>=70&&n<=84)?"Grade B":((n>55&&n<=69)?"Grade C":((n>=40&&n<=54)?"Grade D":"Grade F" ))))));
    return 0;
}
