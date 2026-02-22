// https://www.geeksforgeeks.org/problems/second-largest3735/1
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int i,max1=INT_MIN,max2=INT_MIN;
        for(i=0;i<arr.size();i++){
            if(arr[i]>max1){
                max2=max1;
                max1=arr[i];
            }
            else if(arr[i]>max2 && arr[i]!=max1){
                max2=arr[i];
            }
        }
        return (max2==INT_MIN) ?- 1 : max2;
    }
};