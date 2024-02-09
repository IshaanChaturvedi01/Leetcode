class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int res=0;
      for(const int i:nums)
      {    
          if(i!=val){
              nums[res]=i;
              res++;
          }
      }
        
        return res;
    }
};