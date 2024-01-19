#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        if(mainTank<5){
            return mainTank*10;
        }
        else if(mainTank>=5&&(mainTank/5)>=additionalTank){
            return 10*(mainTank+additionalTank);
        }
        else if(mainTank>=5&&(mainTank/5)<additionalTank){
                if((mainTank%5)==4){
            mainTank=mainTank+floor(mainTank/5)+1;
            return mainTank*10;
                }
                mainTank=mainTank+floor(mainTank/5);
            return mainTank*10;
        }


return 0;
    }
};

int main() {
    int Mt, At;
    while(cin >> Mt >> At) {
        Solution s;
        cout << s.distanceTraveled(Mt, At) << endl;
    }

    return 0;
}
