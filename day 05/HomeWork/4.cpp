// class Solution {
// public:
//     bool isPalindrome(string s) {
//         for(char &ch:s)
//         {
//             ch = tolower(ch);
//         }

//         string ans ="";

//         for(char &ch:s)
//         {
//             if(isalnum(ch))
//             {
//                 ans +=ch;
//             }
//         }

//         int i=0;
//         int j=ans.size()-1;
//         while(i<j)
//         {
//             if(ans[i] !=ans[j]) return false;

//             i++;
//             j--;
//         }
//         return true;
//     }
// };