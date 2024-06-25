#include<bits/stdc++.h>
#include<iostream>
using namespace std;
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        int j=0;
        vector<int>ans;
        while(i<m && j<n)
        {
          if(nums1[i] > nums2[j])
          {
            ans.push_back(nums2[j]);
            j++;
          }
          else
          {
            ans.push_back(nums1[i]);
            i++;
          }
        }

        if(i == m)
        {
            while(j<n)
            {
                ans.push_back(nums2[j]);
                j++;
            }
        }
        if(  j == n)
        {
            while(i<m)
            {
                ans.push_back(nums1[i]);
                i++;
            }
        }
        nums1 = ans;
    }
int main()
{
    vector<int>arr1 = {1,3,5};
    vector<int>arr2 = {2,4,6};
    merge(arr1,arr1.size(),arr2,arr2.size());
    return 0;
}