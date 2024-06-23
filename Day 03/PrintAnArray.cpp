#include<bits/stdc++.h>
#include<iostream>
using namespace std;

 void printArray(int arr[5],int i,int n)
{
if(i >n-1)
 {
    return ;
 }

 printArray(arr,i+1,n);
 cout<<arr[i]<<" ";
 return ;
}
 
int main()
{
    int arr[5]= {1,2,3,4,5};
    int i=0;
    int n = 5;
    printArray(arr,0,n);
    return 0;
}