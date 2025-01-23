// cpp code to find the floor and ceil values
// FLOOR -> LARGEST ELEMENT IN THE ARRAY SMALLER OR EQUAL TO THE TARGET ELEMENT
// CEIL -> SMALLEST ELEMENT IN THE ARRAY GREATER OR EQUAL TO THE TARGET ELEMENT
#include <bits/stdc++.h>
using namespace std;
int floor(vector<int> arr, int k) {
  int n = arr.size();
  int low = 0, high = n - 1, ans = -1;

  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (arr[mid] <= k) {
      ans = arr[mid];
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return ans;
}

int ceil(vector<int> arr, int k) {
  int n = arr.size();
  int low = 0, high = n - 1, ans = -1;

  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (arr[mid] >= k) {
      ans = arr[mid];
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return ans;
}

pair<int, int> floorCeil(vector<int> arr, int k) {
  int f = floor(arr, k);
  int c = ceil(arr, k);

  return make_pair(f, c);
}