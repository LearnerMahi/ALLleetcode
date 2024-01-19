#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& vec1, vector<int>& vec2) {
        vector<int> mergedVec;
        int total = vec1.size() + vec2.size();
        mergedVec.reserve(total);
        mergedVec.insert(mergedVec.end(), vec1.begin(), vec1.end());
        mergedVec.insert(mergedVec.end(), vec2.begin(), vec2.end());
        sort(mergedVec.begin(), mergedVec.end());
        if (total % 2 != 0) {
            return mergedVec[(total + 1) / 2 - 1];
        } else {
            return 0.5 * (mergedVec[total / 2 - 1] + mergedVec[total / 2]);
        }
    }
};

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> vec1(n);
    vector<int> vec2(m);

    for (int i = 0; i < n; i++) {
        cin >> vec1[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> vec2[i];
    }

    Solution s;
    double result = s.findMedianSortedArrays(vec1, vec2);
    cout << result << endl;

    return 0;
}
