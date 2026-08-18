#include <iostream> 
#include <vector>
#include <algorithm>

using namespace std;

/*
int test(){
  // k = number of practice sessions
  // n = number of cows in each practice session
  int k = 0; 
  int n = 0;
  vector<vector<int>> allPos; 
  vector<pair<int,int>> allPairs;
  int count = 0;

  cin >> k >> n;

  for (int i = 0; i < k; i++){
    vector<int> positions;
    for (int j = 0; j < n; j++){
      int temp = 0; 
      cin >> temp;
      positions.push_back(temp);
    }
    allPos.push_back(positions);
  }

  for (int i = 0; i < k; i++){
    int count = 0;
    for (int j = count; j < n-1; j++){
      pair<int, int> pos = {allPos[i][count], allPos[i][j+1]};
      allPairs.push_back(pos);
    }
    count++;
  }
  
  vector<pair<int, int>> start = allPairs[0];

  for (int i = 1; i < k; i++){
    vector<pair<int,int>> compare = allPairs[i];
    for (int j = 0; j < start.length(); j++){
      pair<int,int> target = start[]
    }
  }

  cout << count << "\n";

  return 0;
}
*/

int optimalClaude(){
  int n = 0, k = 0, count = 0;
  cin >> k >> n;

  vector<vector<int>> positions(k, vector<int>(n));
  vector<vector<int>> ahead(n, vector<int>(n, 0));   // n x n, zeroed

  for (int i = 0; i < k; i++)
    for (int j = 0; j < n; j++) {
      cin >> positions[i][j];
      positions[i][j]--;
    }

  for (int i = 0; i < k; i++)
    for (int j = 0; j < n; j++)
      for (int m = j+1; m < n; m++)      // renamed from k
        ahead[positions[i][j]][positions[i][m]]++;

  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      if (ahead[i][j] == k) count++;

  cout << count << "\n";
  return 0;
}
