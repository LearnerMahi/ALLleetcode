#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int smallestEvenMultiple(int n) {
     if(n%2==0){
        return n;
     }
     else{
        return 2*n;
     }
    }
};
int main()
{
    int n;
    cin>>n;
    Solution s;
    cout<<s.smallestEvenMultiple(n)<<endl;
}
