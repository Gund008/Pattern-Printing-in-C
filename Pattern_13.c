/*
Accept number of rows and number of columns from user and display below pattern.
Input :  iRow=5  ,iCol=5

Output:  1   2   3   4   5
       - 1  -2  -3  -4  -5
         1   2   3   4   5
       - 1  -2  -3  -4  -5
         1   2   3   4   5

*/

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i=0,j=0;
    
   for(i=1;i<=iRow;i++)     //Outer loop
   {
      for(j=1;j<=iCol;j++)   //inner loop
      {
         if(i % 2 )
         {
            printf("%d\t",j);
         }
         else
         {
            printf("%d\t",-j);
         }
      }
      printf("\n");
   }
}
////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter number of rows and Columns");
    scanf("%d",&iValue1);

    printf("Enter number of rows and Columns");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);
    
    return 0;
}