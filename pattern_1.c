/*
write a program in c which Accept the value from user and Display below pattern
* * *
* *
*
*/
#include<stdio.h>
void Display(int irow,int icol)
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
    
    for(i=irow;i>0;i--)
    {
            for(j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int iNo1=0;
    int iNo2=0;

    printf("Enter the number first number:\n");
    scanf("%d",&iNo1);

    printf("Enter the second number:\n");
    scanf("%d",&iNo2);
    
    Display(iNo1,iNo2);
    return 0;
}
