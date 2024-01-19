#include<bits/stdc++.h>
#include <numeric>
#include <vector>
#include <string>

using namespace std;
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {


             string r1=accumulate(word1.begin(),word1.end(),string());
             string r2=accumulate(word2.begin(),word2.end(),string());
             if(r1==r2){
                return true;
             }
             else{
                return false;
             }

    }
};
int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<string>word1(n);
    vector<string>word2(m);
    for(int i=0;i<n;i++){
        cin>>word1[i];
    }
    for(int i=0;i<m;i++){
        cin>>word2[i];
    }
    Solution s;
    if(s.arrayStringsAreEqual(word1,word2)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}
