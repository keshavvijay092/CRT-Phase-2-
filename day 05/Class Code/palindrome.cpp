#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool recursion(vector<int>ans,int i,int n)
{
    if(i>=n)
    {
        return true;
    }

    if(ans[i] == ans[n])
    {
         return recursion(ans,i+1,n-1);
    }
    
        return false;
}
int main()
{
    vector<int>ans = {1,2,3,3,2,1};
    int i=0;
    int n = ans.size()-1;
    bool answer = recursion(ans,i,n);
    if(answer)
    {
        cout<<"it is"<<endl;
    }
    else
    {
        cout<<"not"<<endl;
    }
    return 0;
}