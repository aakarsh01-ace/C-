// // cpp code to convert binary number to decimal

// #include <bits/stdc++.h>
// using namespace std;

// int bTOd(const string binary){
//   int decimal = 0;
//   int power = 0;

//   for(int i = binary.length() - 1; i >=0; --i){
//     decimal +=(binary[i] - '0') * pow(2, power);
//     power++;
//   }

//   return decimal;
// }

// int main(){
//   string binary;
//   cin >> binary;

//   int res = bTOd(binary);
//   cout << res << endl;

//   return 0;
// }