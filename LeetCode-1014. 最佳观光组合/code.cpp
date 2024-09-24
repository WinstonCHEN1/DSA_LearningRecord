#include <cmath>
class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int bestScore = 0;
        int length = values.size();
        int leftMax = values[0];

        // 从左到右，序号从小到大，先让向右最大遍历，再看左边起点是否最优
        for(int j = 1; j != length; j++){
            bestScore = max(bestScore, leftMax + values[j] - j);
            leftMax = max(leftMax, values[j] + j);
        }

        return bestScore;
    }
};