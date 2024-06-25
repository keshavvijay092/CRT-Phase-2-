// TC:O(n)
// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int power(int kiski,int pow)
// {
//     if(pow == 0) return 0;
//     if(pow == 1) return kiski;
 
//     return kiski * power(kiski,pow-1);
// }
// int main()
// {
//     int pow;
//     int kiski;
//     cin>>pow;
//     cin>>kiski;
//     int ans = power(kiski,pow);
//     cout<<ans;
//     return 0;
// }

// TC:O(LOG N)
// SC:O(N)


// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int power(int a,int b)
// {
//     if(b == 0) return 0;
//     if(b == 1) return a;

//     if(b%2 == 0) return a*power(a,b/2);
//     else return a*power(a,b-1);

// }
// int main()
// {
//     int a;
//     int b;
//     cin>>a;
//     cin>>b;
//     int ans = power(a,b);
//     cout<<ans;
//     return 0;
// }
