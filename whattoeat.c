#include <stdio.h>

int main()
{
    int n;
    printf("Enter any number from 1 to 5-");
    scanf("%d",&n);
    switch(n)
    {
        case 1: printf("Food Item- Pizza\nprice-Rs 239\n");
        break;
        case 2: printf("Food Item- Sandwich\nprice-Rs 149\n");
        break;
        case 3: printf("Food Item- Burger\nprice-Rs 129\n");
        break;
        case 4: printf("Food Item- Pasta\nprice-Rs 179\n");
        break;
        case 5: printf("Food Item- French fries\nprice-Rs 99\n");
        break;
        default: printf("Enter a valid number");
    }
    return 0;
}
