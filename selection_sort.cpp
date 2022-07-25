#include<iostream>
using namespace std;
void print_arr(int A[], int len){
for (int i=0; i<len; i++){
    cout<<A[i]<<" ";
}
}
void selection_sort(int A[],int len){
    for (int i=0; i<len; i++){
        int min=A[i]; int index=i;
        for (int j=i; j<len; j++){
            if (A[j]<=min){min=A[j]; index=j;}
        } swap(A[i],A[index]);
    }
}
int main(){
    int A[6]={7,2,8,5,1,3};
    selection_sort(A,6);
    print_arr(A,6);
}