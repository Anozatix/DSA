#include<bits/stdc++.h>
using namespace std;
int binary_search(vector<int> &s, int x){
int low=0,high=s.size()-1,mid;
while (high-low>0){
mid=(high+low)/2;
if (s[mid]<x){
    low=mid+1;
}
else {high=mid;}
if (s[mid]==x){return mid;}
}
}
int main(){
    vector<int> s={1,2,3,4,5,6};
    cout<<binary_search(s,5);
}