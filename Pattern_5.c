/*
Accept number of rows and number of columns from user and display below pattern.
Input :  iRow=4  ,iCol=4

Output:4  4  4  4  4
       3  3  3  3  3
       2  2  2  2  2
       1  1  1  1  1
*/

////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
   int i=0,j=0;
       
    if(iRow < 0)
    {
       iRow=-iRow;
    }
    if(iCol < 0)
    {
       iCol=-iCol;
    } 
    if(iCol==4)
    {
       iCol=5;
    }

   for(i=iRow;i>=1;i--)     //Outer loop
   {
      for(j=1;j<=iCol;j++)  //Inner lOOp
      {
          printf("%d\t",i);
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
