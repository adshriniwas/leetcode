class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int k =1;
        // for(int i=1; i<nums.size(); i++){
        //     if(nums[i]!=nums[i-1]){
        //         nums[k]=nums[i];
        //         k++;
        //     }
        // }
        
         set<int>s;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        
        int count=0;
        for(auto itr : s)
        {
            
            nums[count]=itr;
            count++;
        }
        return count;

    }
};