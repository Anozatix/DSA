/*Given N strings, print unique strings in lexicographical order
with their frequency.
N=10^5
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string arr[9]={"abc","acb","bca","cba","cab","bac","abc","abc","cab"};
    map<string, int> m;
    for (int i=0; i< 9; i++){
        auto it=m.find(arr[i]);
        if (it!=m.end()){it->second++;}
        else {m[arr[i]]=1;}
        
    }
    cout<<endl;
    for (auto val : m){cout<<"Frequency of "<<val.first<<" = "<<val.second<<endl;}
    
}