// Input :  Row 4   Columns     4
/*

*   *   *   *
*   *        *
*       *    *
*   *   *   *

*/

#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i,j=0;

    if(iRow!=iCol)   //filter
    {
        return;
    }

    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
           if((i == 1) || (i == iRow) || (j == 1) || (j == iCol) || (i == j))
                {
                    printf("*\t");
                }
                else
                {
                    printf(" \t");
                }
        }
    }
}

int main()
{
   int iValue1=0;
   int iValue2=0;

   printf("Please enter the rows:\n");
   scanf("%d",&iValue1);

   
   printf("Please enter the columns:\n");
   scanf("%d",&iValue2);

   Display(iValue1,iValue2);  //call
   
    return 0;
}