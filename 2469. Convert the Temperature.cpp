#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<double> convertTemperature(double celsius) {
       vector<double>ans(2);
       ans[0]=celsius + 273.15;
       ans[1]=celsius * 1.80 + 32.00;
       return ans;
    }
};
int main()
{

    double celsius;
    cin>>celsius;
    Solution s;
    vector<double>temp=s.convertTemperature(celsius);
    for(int i=0;i<2;i++){
        cout<<setprecision(4) <<temp[i]<<" ";
    }
}
