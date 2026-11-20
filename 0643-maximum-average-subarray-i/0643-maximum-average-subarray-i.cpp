class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        int maxi = INT_MIN;

        for(int i =0 ;i<k ; i++){

            sum = sum+nums[i];

        }
        maxi = sum;
        //slide the window
        for(int i = k ; i< nums.size(); i++){
            sum =sum + nums[i];   //add new element
            sum = sum - nums[i-k]; //remove old element

            maxi = max(maxi ,sum);

        }

        return (double) maxi/k;
        
    }
};

