// max number of pieces of cake obtained by cutting it into exaclty N slices

#include <bits/stdc++.h>
using namespace std;

int maxPieces(int n){
  int maxPiece = 0;

  if(n==0){
    maxPiece = 1;
    return maxPiece;
  }

  while(n!=0){
    maxPiece = (n*(n+1))/2 + 1;
    return maxPiece%1000000007;
  }
  return -1;
}

int main(){
  int n;
  cin>>n;

  int ans = maxPieces(n);
  cout<<ans;
  return 0;
}