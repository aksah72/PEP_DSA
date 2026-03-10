#include<iostream>
#include<vector>
using namespace std;

void heapify(int index , vector<int> &nums){
    while(index>1){
        int p = index/2;
        if(nums[p]>nums[index]){
            swap(nums[p],nums[index]);
            index = p;
        }
        else break;
    }

}

int main(){
    int n;
    cout<<"Enter no of elements : ";
    cin>>n;
    vector<int> nums;
    vector<int> heap;
    nums.push_back(-1);
    for(int i=0;i<n;i++){
        int s;
        cin>>s;
        nums.push_back(s);
        heapify(i+1,nums);
    }
    for(int i =1;i<=n;i++){
        cout<<nums[i]<<" ";
    }
}