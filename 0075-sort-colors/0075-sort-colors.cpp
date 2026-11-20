class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count_zero = 0;
        int count_one = 0;
        int count_two = 0;
        // count 0,1,2
        for(int i = 0; i< nums.size();i++){
            if(nums[i]==0){
                count_zero++;
            }
            if(nums[i]==1){
                count_one++;
            }
            if(nums[i]==2){
                count_two++;
            }
        }

        
        while(nums.size()!= 0){
            nums.pop_back();
        }

        while(count_zero != 0){
              nums.push_back(0);
            // nums[i]=0;
            // i++;
            count_zero--;
        }
                                                                                                                                                                                                                                                                                                                            
        while(count_one != 0){
             nums.push_back(1);
            // nums[i]=1;
            // i++;
            count_one--;
        }
                                                                                                                                                                                                                                                                                                                            
        while(count_two != 0){
             nums.push_back(2);
            // nums[i]=2;
            // i++;
            count_two--;
        }
                                                                                                                                                                                                                                                                                                                            
    }
};