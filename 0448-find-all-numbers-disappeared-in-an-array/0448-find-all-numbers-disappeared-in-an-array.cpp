class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        int n = nums.size();

        // Create frequency array
        vector<int> freq(n+1, 0);

        // Count frequency of every number
        for(int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }

        // Find missing numbers
        vector<int> ans;

        for(int i = 1; i <= n; i++) {
            if(freq[i] == 0) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};