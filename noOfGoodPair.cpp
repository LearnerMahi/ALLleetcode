#include<bits/stdc++.h>
using namespace std;
#include<vector>
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            //int cnt=0;
            if(nums[i]==nums[j]&&i<j){
                cnt++;
            }
        }
    }
    return cnt;
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
    int cnt=s.numIdenticalPairs(a);
    cout<<cnt<<endl;
    /*int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            //int cnt=0;
            if(a[i]==a[j]&&i<j){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;*/
}
