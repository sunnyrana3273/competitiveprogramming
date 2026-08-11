#include <iostream>
#include <vector>
using namespace std;

int main(){
    int numOfInputs;
    cin >> numOfInputs;

    for (int i = 0; i < numOfInputs; i++){
        int numOfA, numOfB; 
        cin >> numOfA >> numOfB;

        if (numOfA % 2 != 0 || numOfA == 1){
            cout << "NO" << endl;
        } else if (numOfB % 2 != 0){
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }

    }
    return 0;

}