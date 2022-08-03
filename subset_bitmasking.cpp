#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> subsets;
void subset_bitmask(vector<int> &nums){
int total= 1<<nums.size();
for (int i=0; i<total; i++){
    vector<int> subset;
    for (int j=0; j<nums.size(); j++){
        if (i&(1<<j)){subset.push_back(nums[j]);}
    } subsets.push_back(subset);
} 
}
int main(){
    vector<int> subset={1,2,3};
    subset_bitmask(subset);
    for (auto subset : subsets) {
     cout<<'{';
    for (int i=0; i<subset.size(); i++){
        cout<<subset[i]<<((i<subset.size()-1) ? ", " : "");
    } cout<<'}'<<" ";
    }
}