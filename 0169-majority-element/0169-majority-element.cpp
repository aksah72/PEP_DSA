class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int i : nums){
            freq[i]++;
        }
        int maxm = 0;
        for(auto &it : freq){
            maxm = max(maxm,it.second);
        }
        for(auto &it : freq){
            if(maxm == it.second) return it.first;
        }
        return -1;
    }
};