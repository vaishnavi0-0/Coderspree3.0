class Solution {
    public int minimumOperations(List<Integer> nums) {

        // dp[i][k] is min number of ops to get ordered numbers that end as k (not up to k)
        int[][] dp = new int[nums.size()][4];
        
        // base cases. It takes one operation if the first num is not what we want.
        if(nums.get(0) == 1) dp[0][2] = dp[0][3] = 1;
        else if(nums.get(0) == 2) dp[0][1] = dp[0][3] = 1;
        else dp[0][1] = dp[0][2] = 1;
        
        for(int i = 1; i < nums.size(); i++) {
            if(nums.get(i) == 1) { 
                dp[i][1] = dp[i - 1][1]; 
                dp[i][2] = Math.min(dp[i - 1][1], dp[i - 1][2]) + 1; 
                dp[i][3] = Math.min(dp[i - 1][1], Math.min(dp[i - 1][2], dp[i - 1][3])) + 1; 
            }
            if(nums.get(i) == 2) { 
                dp[i][1] = dp[i - 1][1] + 1; 
                dp[i][2] = Math.min(dp[i - 1][2], dp[i - 1][1]); 
                dp[i][3] = Math.min(dp[i - 1][1], Math.min(dp[i - 1][2], dp[i - 1][3])) + 1; 
            }
            if(nums.get(i) == 3) { 
                dp[i][1] = dp[i - 1][1] + 1; 
                dp[i][2] = Math.min(dp[i - 1][1], dp[i - 1][2]) + 1; 
                dp[i][3] = Math.min(dp[i - 1][1], Math.min(dp[i - 1][2], dp[i - 1][3])); 
            }

        }
        
        return Math.min(dp[nums.size() - 1][1], Math.min(dp[nums.size() - 1][2], dp[nums.size() - 1][3]));
    }
}