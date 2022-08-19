#include<bits/stdc++.h>
using namespace std;
   vector<int> plates_count(string &s, int a, int b){
    vector<int> i1((b-a)+1,0),i2((b-a)+1,0),i3;
        int p1=0, p2=0,index=0;
       for (int i=a; i<=b; i++){      
            if (s[i]=='|')p1=1;
            if ((s[i]=='*')&&(p1))i1[index]=p1;
            index++;
        } index--;
        for (int i=b; i>=a; i--){
            if (s[i]=='|'){p2=1;}
            if ((s[i]=='*')&&(p2)){i2[index]=p2;}
            index--; 
        } 
       for (int i=0; i<i1.size(); i++){i3.push_back(int(i1[i]&i2[i]));}
        return i3;
    }
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {        
        vector<int> plates;
        for (auto q : queries){
            int num=0;
            for (int i : plates_count(s,q[0],q[1])) num+=i;
            plates.push_back(num);
        } return plates;
    }
    int main(){
      vector<vector<int>> queries={{2,5},{5,9}};
      for (auto q : platesBetweenCandles("**|**|***|",  queries)){
        cout<<q<<" ";
      }
      
    }