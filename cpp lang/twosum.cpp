  #include<bits/stdc++.h>
  using namespace std;
  int main(){
  
  vector<int> twoSum(vector<int>& nums, int t)
    {
        int n= nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if (nums[i] + nums[j]==t)
                {
                    return {i,j};
                }                    
            }
        }
    
    }    
    
}