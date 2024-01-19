#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfSteps(int num) {
        int cnt=0;
        while(num!=0){
           if(num%2==0){
               num=num/2;
               cnt++;
           }
           else{
               num=num-1;
               cnt++;
           }
        }
        return cnt;
    }
};
int main()
{
    int n;
    while(cin>>n){
        Solution s;
        cout<<s.numberOfSteps(n)<<endl;
    }
}
