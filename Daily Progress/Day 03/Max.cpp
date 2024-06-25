#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int max(int arr[],int &ans,int i,int n)
{
    if(i == n) return ans;

    ans = max(ans,arr[i]);
    max(arr,ans,i+1,n);
    return ans;

}
int main()
{
    int arr[5]= {1,2,3,4,5};
    int ans =0;
   int anss =  max(arr,ans,0,5);
   cout<<anss;
    return 0;
}