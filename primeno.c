#include <stdio.h>

int primeno(int num,int i)
{
        if(i==1)
        return 1;
        else
        {
            if(num%i==0)
            return 0;
            else
            primeno(num,--i);
        }
}
int main()
{
    int num, flag;
    printf("Enter a number: ");
    scanf("%d", &num);
    flag = primeno(num,num-1);
    if (flag)
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is not a prime number\n", num);
    }
    return 0;
}

