#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int p = 1;
        int sum = 0;

        while (n > 0) {
            int digit = n % 10;
            n = n / 10;
            p *= digit;
            sum += digit;
        }

        return p - sum;
    }
};

int main() {
    int n;
    while(cin >> n){
    Solution s;
    cout << s.subtractProductAndSum(n) << endl;
    }
    return 0;
}
