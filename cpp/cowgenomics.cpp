#include <iostream>
#include <vector>

using namespace std;

int main(){
  // n = number of genome sequences
  // m = number of characters in each genome sequence
  int n = 0;
  int m = 0;
  int count = 0;

  cin >> n >> m;

  vector<vector<char>> spotty;
  vector<vector<char>> plain;
  
  for (int i = 0; i < 2*n; i++){
    if (i < n){
      for (int j = 0; j < m; j++){

      }
    }
    else if (i >= n && i < 2*n){

    }
  }

  return 0;
}
