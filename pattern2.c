#include<stdio.h>
/*
write a program in which Accept the value from user and Display below pattern
$ * * *
* $ * *
* * $ *
* * * &
*/

void Display(int irow,int icol)
{
    int i=0,j=0;
    for(i=0;i<irow;i++)
    {  
        for(j=0;j<icol;j++)
        {
            if(i==j)
            {
                printf("$");
            }
            else
            {
                printf("*");
            }
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