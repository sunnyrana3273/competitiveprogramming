#include <iostream>
using namespace std;

int main(){
    // 1 means sure about solution 
    // 0 means not sure about solution

    int testNums; 
    cin >> testNums;

    int count = 0;

    for (int i = 0; i < testNums; i++){
        int sure = 0;
        int f1, f2, f3; 
        cin >> f1 >> f2 >> f3;

        if(f1 == 1){
            sure++;
        }
        if (f2 == 1){
            sure++;
        }
        if (f3 == 1){
            sure++;
        }

        if (sure > 1){
            count++;
        }

        sure = 0;
    }

    cout << count;
    return 0; 
}