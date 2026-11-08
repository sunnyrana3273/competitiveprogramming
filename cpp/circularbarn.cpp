#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> cowsToRoom;
  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    cowsToRoom.push_back(temp);
  }

  int minDistance = 0;

  for (int start = 0; start < n; start++) {
      int currDistance = 0;
      for (int distance = 0; distance < n; distance++) {
        int index = (start + distance) % n;
        currDistance += (distance * cowsToRoom[index]);
      }
      
      if (minDistance == 0) {
        minDistance = currDistance;
      } else {
        minDistance = min(currDistance, minDistance);
      }
  }
  
  cout << minDistance << endl;

  return 0;
}
