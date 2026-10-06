class Solution {
public:
    int searchInsert(vector<int>& arr, int tar) {
        int st=0,end=arr.size()-1;

        while(st<=end){
            int mid=st+(end-st)/2;
            if(tar>arr[mid]){
                st=mid+1;
            }else if(tar<arr[mid]){
                end=mid-1;
            }else{
                return mid;
            }
        }
      return st;  
    }
};