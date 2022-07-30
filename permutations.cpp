#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> pn;
void permutations(vector<int> &s, int idx){
    if (idx==s.size()-1){
    pn.push_back(s);
    }
    for (int i=idx; i<s.size(); i++ ){
        swap(s[idx],s[i]);
        permutations(s,idx+1);
        swap(s[idx],s[i]);
    }
}
int main(){
    vector<int> s={1,2,3};
    permutations(s,0);
    for (auto permutation : pn){
    cout<<'{';
    for (int i=0; i<permutation.size(); i++){
        cout<<permutation[i]<<((i<permutation.size()-1) ? ", " : "");
    } cout<<'}'<<" ";
    }
}