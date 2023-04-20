/*
Input-6, Output-6
*
**
***
****
*****
******
*****
****
***
**
*
*/
///////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Display(int iRows,int iCols)
{
    int i,j=0;
    
    if(iRow < 0)
    {
       iRow=-iRow;
    }
    if(iCol < 0)
    {
       iCol=-iCol;
    }
    
    for(i=1;i<=iRows;i++)
    {
        for(j=1;j<=i;j++)
        {
           printf("*");
        }
        printf("\n");
    }
    for(i=iRows-1;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
///////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("Please enter the number of Rows:\n");
    scanf("%d",&iValue1);

    printf("Please enter the number of Columns:\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);
    
    return 0;
}
