class Solution {
    public int[] twoSum(int[] nums, int target) {
       for (int i = 1; i < nums.length; i++) {
            for (int j = 0; j + i < nums.length; j++) {
                if (target == nums[j] + nums[j + i]) {
                    return new int[]{j, j + i};
                }
            }
        }
        return new int[]{};
    }
}