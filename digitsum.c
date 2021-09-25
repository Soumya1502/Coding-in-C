#include <stdio.h>


int sumofdigit(int num)
{
    if (num == 0)
       return 0;
    return (num % 10 + sumofdigit(num / 10));
}
int main()
{
    int num ;
    printf("Enter a number-->");
    scanf("%d",&num);
    int result = sumofdigit(num);
    printf("Sum of digits in %d is %d\n", num, result);
    return 0;
}
