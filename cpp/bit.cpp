#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    string minus = "--";
    string plus = "++";

    int x = 0;

    for (int i = 0; i < n; i++){
        string oper;
        cin >> oper;
        
        // contains plus oper
        if (oper.find(plus) != string::npos){
            x++;
        }
        
        // contains minus oper
        if (oper.find(minus) != string::npos){
            x--;
        }

    }
    cout << x;
    return 0;
}