#include <stdio.h>
int main()
{
    int n,x,y;
    printf("Enter no: of rows\n");
    scanf("%d", &n);
    for( x= 1; x<=n;x++)
    {
       for( y=1 ; y<= x; y++)
       {
          printf("%2d ", y);
       }  
       printf("\n");
    }

    for( x= n-1; x >= 1;x--)
    {
       for( y=1 ; y<= x; y++)
       {
          printf("%2d ", y);
       }  
       printf("\n");
    }


}