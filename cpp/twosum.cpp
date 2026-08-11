#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> num = {1,2,3,4};

    for (int i = 0; i < 4; i++){
        cout << "Pass " << i+1 << endl;
        for (int j = 0; j < 4; j++){
            if (num[i] == num[j]){
                cout << "NOT UNIQUE\n";
            }
        }
    }
    return 0;
}