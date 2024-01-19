#include<bits/stdc++.h>
using namespace std;
#include<vector>
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
       for(int i=0;i<n;i++){
        ans[i]=nums[nums[i]];
    }
    return ans;
    }
};
int main()
{
    int n;
    cin>>n;
   vector<int>a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    Solution s;
     vector<int>b=s.buildArray(a);

    for(int i=0;i<n;i++){
    cout<<b[i]<<" ";
    }
}
