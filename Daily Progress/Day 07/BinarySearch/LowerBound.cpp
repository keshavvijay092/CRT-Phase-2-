#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    vector<int>vt({10,20,30,40,50,60});
    vector<int>::iterator bound = upper_bound(vt.begin(),vt.end(),30);
    cout<<(*bound)<<endl;
    return 0;
}