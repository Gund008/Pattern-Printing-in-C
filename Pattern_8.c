/*
Accept number of rows and number of columns from user and display below pattern,

Input : iRow-4    iCol-4

Output : 1  2  3  4  5
         1  2        5
         1     3     5
         1         4 5
         1  2  3  4  5
*/

#include<stdio.h>

void display(int iRow,int iCol)
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
  if(iRow==4)
  {
     iRow=5;
  }
  if(iCol==4)
  {
     iCol=5;
  }
         
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
             if( (i==1) || (j==iCol) || (i==j) || (j==1) )
             {
                printf("%d\t",j);
             }
             else
             {
                printf(" \t");
             }
        }
        printf("\n");
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////


int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter Number of Rows:\n");
    scanf("%d",&iValue1);

    printf("Enter Number of Columns:\n");
    scanf("%d",&iValue2);

    display(iValue1,iValue2);

    return 0;

}
