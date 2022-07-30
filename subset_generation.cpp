#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> subsets;
void generate(vector<int> &subset, int i, vector<int> &nums){
    if (i==nums.size()){
        subsets.push_back(subset);
    } else {
    generate(subset,i+1,nums);
    subset.push_back(nums[i]);
    generate(subset,i+1,nums);
    subset.pop_back();}
}
int main(){
    vector<int> nums = {1,2,3};
    vector<int> subset={};
    generate(subset,0,nums);
    for (auto subset : subsets){
    cout<<'{';
    for (int i=0; i<subset.size(); i++){
        cout<<subset[i]<<((i<subset.size()-1) ? ", " : "");
    } cout<<'}'<<" ";
    }
}