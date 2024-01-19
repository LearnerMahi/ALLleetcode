#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int sum(int num1, int num2) {
        return num1+num2;
    }
};
int main()
{

    int n1,n2;
    cin>>n1>>n2;
    Solution s;
    int sum1=s.sum(n1,n2);
    cout<<sum1<<endl;
}
