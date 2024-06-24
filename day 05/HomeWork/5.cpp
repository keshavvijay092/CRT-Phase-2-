// TLE
// class Solution {
// public:
//     const int MOD = 1000000007;
    
//     int SolveUsingRecursion(long long n,long long int &ans,long long int &finalans,int i)
//     {
//       if(i>=n) return ans;

//              if(i%2 == 0)
//               {

//                  ans = (ans * 5) % MOD;
//               }
//               else
//               {
//                  ans = (ans * 4) % MOD;
//               }
//               finalans = ((ans%MOD)*(finalans%MOD)%MOD);

//               return SolveUsingRecursion(n,ans,finalans,i+1);

//     }
//     int countGoodNumbers(long long n) {
//         long long int finalans=1;
//         long long int ans =1;
//               int i=0;
//        long long int val = SolveUsingRecursion(n,ans,finalans,i);
//         return val;
//     }
// };