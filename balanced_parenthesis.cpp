#include<bits/stdc++.h>
using namespace std;
unordered_map<char,char> m={{'[',']'},{'{','}'},{'(',')'}};
string balanced_parenthesis(string s){
    stack<char> st;
    for (char x : s){
        if (m.find(x)!=m.end()){
            st.push(x);
        }
        else {if (m[st.top()]==x){
            st.pop(); }
            else {return "NO";}}
    } 
    if (st.empty()){return "YES";
    } else return "NO";
}

int main(){
    cout<<balanced_parenthesis("(())")<<" "<<balanced_parenthesis("{{{))")<<" "<<balanced_parenthesis("[](){");
}