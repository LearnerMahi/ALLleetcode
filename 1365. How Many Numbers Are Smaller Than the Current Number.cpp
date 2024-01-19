#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
     int n=nums.size();
     vector<int>small(n);
     for(int i=0;i<n;i++){
        small[i]=0;
     }
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j!=i&&nums[j]<nums[i]){
                small[i]++;
            }
        }
     }
     return small;
    }
};
int main()
{
    int n;

    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    Solution s;
    vector<int>ans=s.smallerNumbersThanCurrent(nums);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}
