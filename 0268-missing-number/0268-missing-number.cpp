class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();

        for(int i =0; i<nums.size() ; i++){
            sum = sum+nums[i];

            
        }
        // sum of Nth term AP = N*N+1/2 = 2N+1/2

    int sum2 = n*(n+1)/2;

        int missingNum = sum2 - sum;


return missingNum;

    }

    
};