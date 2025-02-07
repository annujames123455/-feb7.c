'''
     author name:annu james
      date:07/2/2025
       the sum of first and second elemnts
'''
#include<stdio.h>
int main(){
int row,col;
printf("enter the row and column values:");
scanf("%d%d",&row,&col);
int m1[row][col],m2[row][col];
printf("\nenter the first matrix:\n");
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
        scanf("%d",&m1[i][j]);
        }
      }  
  printf("\nenter the second matrix:\n");
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
        scanf("%d",&m2[i][j]);
        }
      }
      int m3[row][col];
     for(int i=0;i<row;i++){
         for(int j=0;j<col;j++){
         m3[i][j]=m1[i][j]+m2[i][j];
         }
      }
   printf("\n the sum of elements is");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           printf("%d\t",m3[i][j]);
        
     }
    printf("\n");
  }
  
     return 0;
     }
       
