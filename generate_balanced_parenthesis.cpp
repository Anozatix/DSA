#include<bits/stdc++.h>
using namespace std;
vector<string> valid;
void generate(string &s, int open, int close){
    if (!open&& !close){
        valid.push_back(s);
    }
    if (open>0){
        s.push_back('(');
        generate(s,open-1,close);
        s.pop_back();
    }
    if (close>open){
        s.push_back(')');
        generate(s,open,close-1);
        s.pop_back();
    }
}

int main(){
    string s="";
    generate(s,4,4);
    for (auto val : valid){
        cout<<val<<" ";
    }
}