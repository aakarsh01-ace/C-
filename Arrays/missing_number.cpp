// // brute force
// #include <bits/stdc++.h>
// using namespace std;

// int missingNum(vector<int> a, int N){
//   for(int i=1; i<N; i++){
//     bool flag = 0;
//     for(int j=0; j<N-1; j++){
//       if(a[j]==i){
//         flag = 1;
//         break;
//       }
//     }
//     if(flag==0){
//       return i;
//     }
//   }
//   return -1;
// }



// // better approach
// #include <bits/stdc++.h>
// using namespace std;

// int missingNum(vector<int> arr, int N){
//   vector<int> hash(N+1, 0);

//   for(int i=0; i<N-1; i++){
//     hash[arr[i]]++;
//   }

//   for(int i=1; i<N; i++){
//     if(hash[i]==0){
//       return i;
//     }
//   }

//   return -1;
// }



// // optimal
// #include <bits/stdc++.h>
// using namespace std;

// int missingNum(vector<int> arr, int N){
//   int sum_1 = (N*(N+1))/2;
//   int sum_2 = 0;

//   for(int i=0; i<N; i++){
//     sum_2 += arr[i];
//   }
//   return (sum_1 - sum_2);
// }

// int main(){
//   int N;
//   cin>>N;

//   vector<int> arr(N-1);
//   for(int i=0; i<N-1; i++){
//     cin>>arr[i];
//   }

//   int missing = missingNum(arr, N);
//   cout<<missing<<endl;
//   return 0;
// }