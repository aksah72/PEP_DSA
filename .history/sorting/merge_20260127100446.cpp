#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
    int i = m-1;
    int j = n-1;
    int k = m+n-1;
    while(j>=0){
        if(nums2[j]>=nums1[i]){
            nums1[k] = nums2[j];
            j--;
            k--;
        }
        else if(nums1[i]>nums2[j]){
            nums1[k] = nums1[i];
            k--;
            i--;
        }
    }
}

int main(){
    vector<int> nums1 = {7,8,10,0 ,0,0};
    vector<int> nums2 = {2 ,5,6};
    merge(nums1,3,nums2,3);
    for(int i : nums1){
        cout<<i<<" ";
    }
}