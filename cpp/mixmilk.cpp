#include <iostream>
#include <vector>
#include <string> 
#include <algorithm>

using namespace std;

void listBuckets(vector<int> buckets){
  for (int num : buckets){
    cout << to_string(num) + " | " << "\n";
  }
}

int optimal(){
  int cap1, in1, cap2, in2, cap3, in3;

  cin >> cap1 >> in1 >> cap2 >> in2 >> cap3 >> in3;

  vector<int> buckets = {in1, in2, in3}; 

  vector<int> capBuckets = {cap1, cap2, cap3};

  for (int i = 0; i < 100; i++){
    int curr = i % 3;
    int next = (i+1) % 3;

    // amount to be poured is knowing that anything bigger than the empty space cant be added
    // so its either the full empty space or just how much in the last container fits in the empty space

    int emptySpace = capBuckets[next] - buckets[next]
    int pouring = min(buckets[curr], emptySpace);

    buckets[curr] -= pouring;
    buckets[next] += pouring;
  }

  cout << buckets[0] << "\n";
  cout << buckets[1] << "\n";
  cout << buckets[2] << "\n";
}

int main(){
  int cap1, in1, cap2, in2, cap3, in3;

  cin >> cap1 >> in1 >> cap2 >> in2 >> cap3 >> in3;

  vector<int> buckets = {in1, in2, in3}; 

  vector<int> capBuckets = {cap1, cap2, cap3};

  
  int curr = 0;

  for (int i = 0; i < 100; i++){
    if (curr < 2){
      int sum = buckets[curr] + buckets[curr+1];
      if (sum <= capBuckets[curr+1]){
        buckets[curr] = 0;
        buckets[curr+1] = sum;
        curr++;

        /* cout << "Step " + to_string(i) + ": " << "\n";
        cout << "Curr " + to_string(curr) << "\n";
        listBuckets(buckets); */
      }
      else if (sum > capBuckets[curr+1]){
        buckets[curr] = sum - capBuckets[curr+1];
        buckets[curr+1] = capBuckets[curr+1];
        curr++;

        /* cout << "Step " + to_string(i) + ": " << "\n";
        cout << "Curr " + to_string(curr) << "\n";
        listBuckets(buckets); */

        }
    }
    else if (curr == 2){
      int sum = buckets[curr] + buckets[0];
      if (sum <= capBuckets[0]){
        buckets[curr] = 0;
        buckets[0] = sum;
        curr = 0; 

        /* cout << "Step " + to_string(i) + ": " << "\n";
        cout << "Curr " + to_string(curr) << "\n";
        listBuckets(buckets); */
      }
      else if (sum > capBuckets[0]){
        buckets[curr] = sum - capBuckets[0];
        buckets[0] = capBuckets[0];
        curr = 0;

        /* cout << "Step " + to_string(i) + ": " << "\n";
        cout << "Curr " + to_string(curr) << "\n";
        listBuckets(buckets); */
      }
    }
  }

  for (int num : buckets){
    cout << num << "\n";
  }

  return 0;
}

