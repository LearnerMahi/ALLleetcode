#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.size();
        int c1=0;
        int c2=0;
        for(int i=0;i<n*.5;i++){
            if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')
                c1++;
        }
        for(int i=n*.5;i<n;i++){
            if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')
                c2++;
        }
        return c1==c2;
    }
};
int main()
{
    string s;
    while(cin>>s){
        Solution t;
        if(t.halvesAreAlike(s)){
            cout<<"true"<<endl;
        }
        else{
            cout<<"false"<<endl;
        }
    }
}
