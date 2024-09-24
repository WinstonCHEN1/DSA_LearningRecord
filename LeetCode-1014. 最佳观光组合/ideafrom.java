class Solution {
    public int maxScoreSightseeingPair(int[] values) {
        int n = values.length;
        int ans = 0;
        // 初始化 lMax 为第一个景点的值
        int lMax = values[0];

        // 遍历右侧景点，从第二个景点开始
        for (int j = 1; j < n; j++) {
            // 计算当前得分并更新最大得分
            ans = Math.max(ans, lMax + values[j] - j);
            
            // 更新 lMax，维护左侧最佳选择
            lMax = Math.max(lMax, values[j] + j);
        }
        
        return ans; // 返回最大得分
    }
}
// https://leetcode.cn/problems/best-sightseeing-pair/description/comments/2388623