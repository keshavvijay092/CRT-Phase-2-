
// 1796. Second Largest Digit in a String

// Given an alphanumeric string s, return the second largest numerical digit that appears in s, or -1 
// if it does not exist.

// An alphanumeric string is a string consisting of lowercase English letters and digits.

// Code: 
// class Solution {
// public:
//     int secondHighest(string s) {
//         int ans = -1;
//         int ans2 =-1;
//         for(int i=0;i<s.size();i++)
//         {
//             if(isdigit(s[i]))
//             {
//                  int convert = s[i]-'0';
//            if( ans<convert)
//             {
//                 ans2 = ans;
//                 ans = convert;
//             }
//             else if(convert>ans2 && convert !=ans)
//             {
//                 ans2 = convert;
//             }
//             }
          
//         }
//         return ans2;
//     }
// };