// // sum of all prime number less than input "n"
// #include <bits/stdc++.h>
// using namespace std;

// int PrimeSum(int n){
//   if(n<=2) return 0; // since no prime number is less than 2

//   vector<bool> isPrime(n, true); // assign all number till n to be primes
//   isPrime[0] = isPrime[1] = false; // except 0, and 1

//   // implement Sieve of Eratosthenes
//   for(int i = 2; i*i<n; i++){
//     if(isPrime[i]){
//       for(int j = i*i; j < n; j+=i){
//         isPrime[j] = false;
//       }
//     }
//   }

//   int summ = 0;
//   for(int i = 2; i < n; i++){
//     if(isPrime[i]){
//       summ+=i;
//     }
//   }
//   return summ;
// }

// int main(){
//   int n;
//   cin>>n;

//   int ans = PrimeSum(n);
//   cout<<ans;
//   return 0;
// }