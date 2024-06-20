GFG:Find the second largest 
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	   
	   option 1 : 2 loop TC:O(n)
	   int maxi = INT_MIN;
	   for(int i=0;i<n;i++)
	   {
	       maxi = max(arr[i],maxi);
	   }
	   int s = -1;
	   for(int i=0;i<n;i++)
	   {
	       if(arr[i] != maxi && arr[i]>= s)
	       {
	           s = arr[i];
	       }
	   }
	   return s;
	   
	   option 2:1 Loop 
	   int maxi = arr[0];
	   int s = -1;
	   for(int i=1;i<n;i++)
	   {
	       if(maxi<arr[i])
	       {
	           s = maxi;
	           maxi = arr[i];
	       }
	       else if(maxi != arr[i] && s<arr[i])
	       {
	           s = arr[i];
	       }
	   }
	   return s;
	}
};