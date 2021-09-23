#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter x: ");
    scanf("%d",&x);
    printf("Enter y: ");
    scanf("%d",&y);
    printf("Before swapping x=%d y=%d",x,y);      
    x=x+y;  
    y=x-y;  
    x=x-y;  
    printf("\nAfter swapping x=%d y=%d",x,y);  
    return 0;
}
