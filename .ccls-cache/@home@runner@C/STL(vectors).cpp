#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> numbers;
  int input;

  while(true){
    cin >> input;
    if(input== -1){
      break;
    }
    numbers.push_back(input);
  }

  //vector<int>::iterator it = numbers.begin();

  for(vector<int>::iterator it = numbers.begin(); it!=numbers.end(); ++it){
    cout << *(it)<< " ";
  }

  return 0;
}
//instead of using vector<int>::iterator, we can use "auto"

// for(auto it = numbers.begin(); it!=numbers.end(); ++it){
//   //cout << *(it)<< " ";
// }