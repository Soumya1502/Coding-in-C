#include <stdio.h>

int findlcm(int a,int b)
{
    static int lcm = 1;
 
    if (lcm % a == 0 && lcm % b == 0)
    {
        return lcm;
    }
    lcm++;
    findlcm(a, b);
    return lcm;    
}
int main()
{
    int a,b, lcm;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    lcm = findlcm(a,b);
    printf("LCM is %d",lcm);
}

