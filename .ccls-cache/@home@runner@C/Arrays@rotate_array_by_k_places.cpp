#include <bits/stdc++.h>
using namespace std;

//arr[]=[1,2,3,4,5,6,7], d=3
//
temp = [1,2,3]
for(int i=0; i<n;i++){
  a[i-d] = a[i];
}

int j=0;
for(int i=n-int k; i++){
  a[i]=temp[j];
  j++;
}

//