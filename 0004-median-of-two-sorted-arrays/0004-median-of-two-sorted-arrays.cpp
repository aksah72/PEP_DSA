class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0 , j = 0 , k = 0;
        int size = nums1.size()+nums2.size();
        vector<int> ans(size);
        while(i != nums1.size() && j != nums2.size()){
            if(nums1[i]<=nums2[j]){
                ans[k] = nums1[i];
                i++;
            }
            else {
                ans[k] = nums2[j];
                j++;
            }
            k++;
        }
        while(i != nums1.size()){
            ans[k] = nums1[i];
            i++;
            k++;
        }
        while(j != nums2.size()){
            ans[k] = nums2[j];
            k++;
            j++;
        }
        //for(int i : ans) cout<<i<<" ";
        double result = 0.0;
        int median = size%2;
        if(median == 0) {
            int sum = ans[k/2]+ans[k/2-1];
            result = ((double)sum/2);
        }
        else result = ans[k/2];
        return result;
    }
};