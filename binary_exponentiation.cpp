#include<bits/stdc++.h>
using namespace std;
int m=1e9+7;

long long binary_multiply(long long,long long);
int binary_exponentiation(long long a,long long b){
int ans=0;
while (b){
if (b&1){ans=binary_multiply(ans,a);}
a=binary_multiply(a, a);
b>>=1;} 
return ans;
}

long long binary_multiply(long long a,long long b){
long long ans=0;
while (b){
if (b&1){ans=(ans+a)%m;}
a=(a+a)%m;
b>>=1;} 
return ans;
}

int main(){
    long long a=2;
    long long b=10;
    cout<<binary_exponentiation(a,b);
}