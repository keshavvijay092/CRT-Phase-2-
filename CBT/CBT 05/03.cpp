// // optimally solutiion 
// int getTotalX(vector<int> a, vector<int> b) {
//   int  hcf = b[0];
//   int l = a[0];
  
//   for(int x:a) l = lcm(l,x);
//   for(int x:b) hcf = __gcd(hcf,x);
  
//   int cnt= 0;
  
//   for(int i=l;i<=hcf;i+=l)
//   {
//       if(hcf%i==0) cnt++;
//   }
//   return cnt;
// }

// MY sol but working
// int getTotalX(vector<int> a, vector<int> b) {
//    int mini = *min_element(b.begin(),b.end());
//    // int maxi = *max_element(b.begin(),b.end());
    
//     int val = *max_element(a.begin(),a.end());
//     int n = a.size();
//     vector<int>ans;
//     int i=1;
//     int check =val;
//     bool flag1 = true;
//     while(check <= mini)
//     {
//      flag1 = true;
//       for(int j=0;j<n;j++)
//       {
//          if(check%a[j] != 0)
//          {
//            flag1 = false;
//          }
//       }
//         if(flag1 == true) {
           
//         ans.push_back(check);
//     }
//         i++;
//          check = val*i;
//     }
    
//     n=  ans.size();
//     int m = b.size();
//     bool flag = true;
//     int cnt = 0;
//     for(int i=0;i<n;i++)
//     {
//         flag =true;
//         for(int j=0;j<m;j++)
//         {
//             if(b[j]%ans[i] != 0)
//             {
//                flag = false;
//             }
//         }
//         if(flag == true) {
//         cnt++;}
//     }
//     return cnt;
// } 