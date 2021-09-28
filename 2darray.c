#include <stdio.h>

int main()
{
    int a[3][3],i,j,sum=0;
       printf("Input elements in the matrix :\n");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
	      printf("element - [%d],[%d] : ",i,j);
	      scanf("%d",&a[i][j]);
      }
  }  
  printf("\nThe matrix is : ");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++){
           printf("%d ",a[i][j]);
           if(i==j)
           sum+=a[i][j];
      }
  }
 printf(" ");
 printf("\nThe sum of daigonal elements is: %d",sum);
 

    return 0;
}
