#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
    char name[30];
    int age;
    long Phoneno;
    double salary;
} Employee;
 
int main()
{
    int n=20;
    Employee employees[n];
    printf("Enter %d Employee Details \n \n",n);
    for(int i=0; i<n; i++){
        printf("Employee %d:- \n",i+1);
        printf("Name: ");
        scanf("%[^\n]s",employees[i].name);
        printf("Age: ");
        scanf("%d",&employees[i].age);
        printf("Phoneno: ");
        scanf("%ld",&employees[i].Phoneno);
        printf("Salary: ");
        scanf("%lf",&employees[i].salary);
        char ch = getchar();
 
        printf("\n");
    }
     printf("Name \tAge\t Phone no\t salary \n");
    for(int i=0; i<n; i++){
        printf("%s \t",employees[i].name);
 
        printf("%d \t",employees[i].age);
        
        printf("%ld \t\t",employees[i].Phoneno);
 
        printf("%.2lf \t\t",employees[i].salary);
 
        printf("\n");
    }
 
    return 0;
}
