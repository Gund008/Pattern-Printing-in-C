/*
Accept number of rows and number of columns from user and display below pattern.
Input :  iRow=4  ,iCol=4

Output:A  B  C  D
       a  b  c  d
       A  B  C  D
       a  b  c  d
*/

#include<stdio.h>

void Pattern(int iRow,int iCol)
{

  int i=0,j=0,k=0;
  char ch='A';
  char ch1='a';

  if(iRow < 0)
  {
     iRow=-iRow;
  }
  if(iCol < 0)
  {
     iCol=-iCol;
  }
       
  for(i=1;i<=iRow/2;i++)                    //Outer loop
  {
     for(j=1,ch='A';j<=iCol;j++,ch++)      //Inner loop
     {
          printf("%c\t",ch);
     }
    printf("\n");

     for(k=1,ch1='a';k<=iCol;k++,ch1++)    //Inner loop
     {
         printf("%c\t",ch1);
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
