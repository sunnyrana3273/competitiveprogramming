#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
  // n = number of genome sequences
  // m = number of characters in each genome sequence
  int n = 0;
  int m = 0;
  int count = 0;

  cin >> n >> m;

  int numCows = 2*n;
  
  vector<string> spottyGenes;
  vector<string> normalGenes;

  for (int i = 0; i < numCows; i++) {
    string temp;
    cin >> temp;

    if (i < n) {
      spottyGenes.push_back(temp);
    } else {
      normalGenes.push_back(temp);
    }
  }
  
  // i = genome sequence
  // j = spotty cow index 
  // k = normal cow index 
  for (int i = 0; i < m; i++) {
    bool unique = true;

    for (int j = 0; j < n; j++) {
      for (int k = 0; k < n; k++) {
        if (normalGenes[k][i] == spottyGenes[j][i]) {
          unique = false;
        }
      }
  
    }

    if (unique) {
      count++;
    }
  }

  cout << count << endl;

  return 0;
}
