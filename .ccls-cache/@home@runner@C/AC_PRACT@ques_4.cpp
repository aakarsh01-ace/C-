// // empty the array 
// #include <bits/stdc++.h>
// using namespace std;

// int Empty(int nums[], int n){
//   int count=0;
//   deque<int> de(nums, nums+n);

//   while(!de.empty()){
//     if(de.front() == *min_element(de.begin(), de.end())){
//       de.pop_front();
//     }else{
//       de.push_back(de.front());
//       de.pop_front();
//     }
//     count++;
//   }
//   return count;
// }

// int main(){
//   int n;
//   cin>>n;
//   int nums[n];
//   for(int i=0; i<n; i++){
//     cin>>nums[i];
//   }

//   int res = Empty(nums, n);
//   cout<<res;
// }
