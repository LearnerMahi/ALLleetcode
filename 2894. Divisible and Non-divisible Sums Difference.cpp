#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int differenceOfSums(int n, int m) {
     int sum1=0;
     int sum2=0;
      for(int i=1;i<=n;i++){
        if(i%m!=0){

            sum1=sum1+i;
        }
        else{

           sum2=sum2+i;
        }
      }
      return sum1-sum2;
    }
};
int main()
{
    int n,m;
    cin>>n>>m;
    Solution s;
    int result=s.differenceOfSums(n,m);
    cout<<result<<endl;
}
