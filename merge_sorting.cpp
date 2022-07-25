#include<iostream>
using namespace std;
int n= 1e5+10;
void print_arr(int A[], int len){
for (int i=0; i<len; i++){
    cout<<A[i]<<" ";
}
}
void merge(int A[],int l, int mid, int h){
int i=l, j= mid+1, k=l; 
int B[n];
while ((i<=mid) && (j<=h)){
if (A[i]<=A[j]){B[k]=A[i]; i++; k++;}
else {B[k]=A[j]; j++; k++;}
}
while (i<=mid){B[k]=A[i]; i++; k++;}
while (j<=h){B[k]=A[j]; j++; k++;}
for (int i=l; i<=h; i++){
    A[i]=B[i];
}
}
void merge_sort(int A[], int l, int h){
    int mid;
    if (l<h){
        mid=(l+h)/2;
        merge_sort(A,l,mid);
        merge_sort(A,mid+1,h);
        merge(A,l,mid,h);
    }
}
int main(){
    int A[6]={7,2,8,5,1,3};
    merge_sort(A,0,5);
    print_arr(A,6);
}