class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int x=nums.size();
        long long answer=0;
        vector<long long> pre(x);
        pre[0]=nums[0];
        for(int i=1;i<x;i++) pre[i]=pre[i-1]+nums[i];
        
        for(int i=2;i<x;i++){
         
            if(nums[i]<pre[i-1]) answer=max(answer,pre[i]);
        }
        if(answer==0) answer=-1;
        return answer;
        
    }
};
