#include <stdio.h>
//function that prints matrix
void printm(int arr[3][3]){
   for (int i=0; i<=2; i++){
      for (int j=0; j<=2; j++){
         printf("%d",arr[i][j]);
      }
      printf("\n");
   }
}
int main(){
   int roll_no[3]={2,0,0};
   //declaring and filling both of the matrices
   int matrix1[3][3],matrix2[3][3];
   for (int i=0; i<=2;i++){
     for (int j=0;j<=2;j++){
        matrix1[i][j]=roll_no[j];
        matrix2[i][j]=roll_no[i];}
}
//display matrices
    printm(matrix1);
    printf("\n");
    printm(matrix2);
    printf("\n");
//calculating P,Q and R
    int i=0,j=2,P=0,Q=0;
    while (i<3){
       P+=matrix1[i][i]*matrix2[i][j];
       Q*=matrix1[i][i]+matrix2[i][j];
       i++;
       j--;
    }
   printf("P=%d Q=%d R=%d",P,Q,P+Q);
}