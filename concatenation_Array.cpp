#include<bits/stdc++.h>
using namespace  std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    int b[2*n];
    for(int i=0;i<2*n;i++){
       for(int i=0;i<n;i++){
        b[i]=a[i];
       }
        
            b[i+n]=b[i];
    
    }
  
    for(int i=0;i<2*n;i++){
        cout<<b[i]<<" ";
    }
}

/*
#include <vector>

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2 * n);  // The result vector to store the concatenated array
        
        // Copy elements from nums to ans twice
        for (int i = 0; i < n; i++) {
            ans[i] = ans[i + n] = nums[i];
        }
        
        return ans;
    }
};

*/
