/*
Accept number of rows and number of columns from user and display below pattern.
Input :  iRow=4  ,iCol=4

Output:2  4  6  8  10
       1  3  5  7  9
       2  4  6  8  10
       1  3  5  7  9

*/

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i=0,j=0;
    int k=1;
 
    for(i=1;i<=iRow;i++)          //Outer loop
    {
        for(j=2;j<=(iCol*2);j=j+2)     //Inner loop
        {
            if(i % 2==0)
            {
                printf("%d\t",k);
                k=k+2;
            }
            else 
            {
               printf("%d\t",j);
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