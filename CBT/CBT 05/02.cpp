// int hurdleRace(int k, vector<int> height) {
//   int n= height.size();
//   int ans = 0;
//   int check =0;
//     for(int i=0;i<n;i++)
//     {
//         if(height[i] > k)
//         {
//           check = height[i]-k;
//           if(check>ans)
//           {
//               ans = check;
//           }
//         }
//     }
//     return ans;
// }