#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum=0;
        for(int i=1;i<num;i++){
            if(num%i==0){
                sum+=i;
            }
        }
        return sum==num;
    }
};
int main()
{
    int n;
    while(cin>>n){
    Solution s;
    if(s.checkPerfectNumber(n)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
 }
 }
