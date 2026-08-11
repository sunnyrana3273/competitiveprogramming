#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, h;
    cin >> n >> h;

    int width = 0;

    for (int i = 0; i < n; i++){
        int comp;
        cin >> comp;

        if (comp > h){
            width += 2;
        } else {
            width++;
        }
    }

    cout << width;

    return 0;
}