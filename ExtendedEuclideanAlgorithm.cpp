#include<bits/stdc++.h>
using namespace std;
struct triplet{
    int x,y,gcd;
};
triplet EEA(int a, int b){
    if (!b){
    triplet ans;
    ans.x=1; ans.gcd=a; ans.y=0;
    return ans;
    }
    triplet s_ans=EEA(b,a%b);
    triplet ans;
    ans.x=s_ans.y;
    ans.gcd=s_ans.gcd;
    ans.y=s_ans.x-(a/b)*s_ans.y;
    return ans;
}
int main(){
    triplet ans=EEA(7,3);
    cout<<ans.x<<" "<<ans.y<<" "<<ans.gcd<<endl;
}