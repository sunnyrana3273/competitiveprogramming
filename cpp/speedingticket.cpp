#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main(){
  int n = 0;
  int m = 0;
  int max = 0;

  cin >> n >> m;

  vector<int> road; 
  vector<int> bessie;

  for (int i = 0; i < n; i++){
    int dist = 0;
    int speed = 0;
    cin >> dist >> speed;
    for (int j = 0; j < dist; j++){
      road.push_back(speed);
    }
  }
 
  for (int i = 0; i < m; i++){
    int dist = 0;
    int speed = 0;
    cin >> dist >> speed;
    for (int j = 0; j < dist; j++){
      bessie.push_back(speed);
    }
  }
  
  for (int i = 0; i < 100; i++){
    if (road[i] - bessie[i] > max){
      max = road[i] - bessie[i];
    }
  }

  cout << max << "\n";

  return 0;
}
