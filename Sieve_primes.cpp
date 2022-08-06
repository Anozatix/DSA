#include<bits/stdc++.h>
using namespace std;
int N=1e7+10;
vector<bool> primes(N,1);
int main(){
    primes[0]=primes[1]=false;
    for (int i=2; i<N; i++){
        if (primes[i]){
            for (int j=2; j*i<N; j++ ){
                if (primes[j*i])primes[j*i]=0;
            }
        }
    }
    int n;
    cin>>n;
    while (n--){
        int check;
        cin>>check;
        cout<<((primes[check])?"Is prime" : "Not Prime");
    }
}