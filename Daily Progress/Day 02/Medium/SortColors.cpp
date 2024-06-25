class Solution {
public:
    void sortColors(vector<int>& nums) {
    // method 1:
    // cal all the 0 and 1 and 2 
    // then place it accordingly 

    // method 2
    //   use 3 pointer 
    // then switch accordingly 1 will be in its place 
    // and switch other pointer 

    // method 1 
//     int n = nums.size();
//     int cnt = 0 , cnt2 = 0,cnt1 = 0;
//     for(int i=0;i<n;i++)
//     {
//        if(nums[i] == 0)
//        {
//         cnt++;
//        }
//        else if(nums[i] == 1)
//        {
//         cnt1++;
//        }
//        else
//        {
//         cnt2++;
//        }
//     }
//     int i = 0;
//     while(cnt >0)
//     {
//         nums[i] = 0;
//         i++;
//         cnt--;
//     }

//  while(cnt1 >0)
//     {
//         nums[i] = 1;
//         i++;
//         cnt1--;
//     }

//  while(cnt2 >0)
//     {
//         nums[i] =2;
//         i++;
//         cnt2--;
//     }


    
    // method 2 

    int s = 0;
    int m = 0;
    int e = nums.size()-1;

    while(m<=e)
    {
        if(nums[m] == 0)
        {
            swap(nums[s],nums[m]);
            s++;
            m++;
        }
        else if(nums[m] == 1)
        {
            m++;
        }
        else 
        {
            swap(nums[m],nums[e]);
            e--;
            
        }
    }





























        // int s = 0;
        // int n = nums.size();
        // int e = n-1;
        // int k = 0;
        // int size = n;

        // while(size>0)
        // {
        //     if(nums[k] == 0)
        //     {
        //         swap(nums[s],nums[k]);
        //         size--;
        //         s++;
        //         k++;
        //     }
        //     else if(nums[k] == 2)
        //     {
        //         swap(nums[k],nums[e]);
        //         size--;
        //         e--;
        //     }
        //     else 
        //     {
        //         k++;
        //         size--;
        //     }
        // }
        
    }
};