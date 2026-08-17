#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
  int n;
  cin >> n;
  vector<string> words;
  vector<int> letters(26);
  
  for (int i = 0; i < n; i++){
    string word1;
    string word2;
    
    cin >> word1 >> word2;

    vector<int> letterFreq(26);

    for(char letter : word1){
      int pos = letter - 'a';
      letterFreq[pos]++;
      // letterFreq[letter - 'a'];
    }

    for(char letter : word2){
      int pos = letter - 'a';
      if (letterFreq[pos] == 0){
        letterFreq[pos]++;
      }
    }

    for (int i = 0; i < 26; i++){
      letters[i] += letterFreq[i];
    }

  }
  for (int i = 0; i < 26; i++){
    cout << letters[i] << "\n";
  }

  return 0;
}
