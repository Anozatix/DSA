#include<bits/stdc++.h>
using namespace std;
vector<int> nge(vector<int> &v){
    vector<int> n(v.size(), -1);
    stack<int> st;
    for (int i=0; i<v.size(); i++){
        while (!st.empty() && v[i]>v[st.top()]){
            n[st.top()]=i;
            st.pop();
        } st.push(i);
    }
    return n;
}
int main(){
    vector<int> elements={4,5,2,25,7,8};
    for (auto values : nge(elements)){
        cout<< (values == -1 ? -1:elements[values])<<" ";
    }
}