#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int n;
  cin >> n;

  vector<int> starting = {1, 2, 3};
  vector<int> correct = {0, 0, 0};

  for (int i = 0; i < n; i++){
    int posA, posB, guess;
    cin >> posA >> posB >> guess;

    int temp = starting[posB-1];
    starting[posB-1] = starting[posA-1];
    starting[posA-1] = temp;
    
    int val = starting[guess-1];
    correct[val-1]++;
  }

  int trueMax = max({correct[0], correct[1], correct[2]});

  cout << trueMax << "\n";

  return 0;
}
