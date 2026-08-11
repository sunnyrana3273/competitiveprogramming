#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main(){

    set<int> test; 
    vector<int> rand; 

    rand.push_back(3);
    rand.push_back(2);
    rand.push_back(2);

    for (int n : test){
        cout << n;
    }

    for (int num : rand){
        test.insert(num);
    }

    for (int n : rand){
        cout << n;
    }
    return 0;
}