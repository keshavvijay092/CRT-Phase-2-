#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int sum(int arr[],int i,int n,int &sumval)
{
    if(i == n)
    {
        return sumval;
    }
    sumval+=arr[i];
    sum(arr,i+1,n,sumval);
    return sumval;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int i=0;
    int n = 5;
    int sumval = 0;
    int ans = sum(arr,i,n,sumval);
    cout<<ans<<endl;
    return 0;
}