'''
auhor name:Annu James
date:07/2/2025
  '''


#include<stdio.h>
  int main(){
     int row,col,j,i;
     printf("\n enter the rows and columns");
     scanf("%d%d",&row,&col);
     int matrix[row][col];
     printf("\nenter the elements");
     for(int i=0;i<row;i++){
        for(j=0;j<col;j++){
        scanf("%d",&matrix[i][j]);
        }
      }  
     int sum=0;
     for(int i=0;i<row;i++){
        for(j=0;j<col;j++){
            if (i==j){
                sum=sum+matrix[i][j];
            }
         }
      }
     printf("the sum of diagonal elements is");
     printf("%d",sum);
     return 0;
}


