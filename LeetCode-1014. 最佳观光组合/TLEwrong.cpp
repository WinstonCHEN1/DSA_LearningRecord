class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int bestValue[values.size()];
        for(int now = 0; now < values.size(); now++){
            if(now+1 == values.size()){
                bestValue[now] = 0;
                break;
            } // 最后一站剔除初始化值
            int nowScore = values[now] + now;
            int nowScoreBackup = nowScore;
            int bestScore = 0;
            for(int secNow = now + 1; secNow < values.size(); secNow++){
                    // cout << values[secNow] << " " << secNow << "  ";
                nowScore = nowScore + values[secNow] - secNow;
                    // cout << nowScore << "\n";
                if(nowScore > bestScore){
                    bestScore = nowScore;
                }
                nowScore = nowScoreBackup;
            }
            bestValue[now] = bestScore;
        }
        int best = 0;
        for(int now = 0; now!=values.size(); now++){
            if(bestValue[now] > best){best = bestValue[now];}
        }
        // cout << best << "  ";
        // cout << bestValue[0] << "," << bestValue[1];
        return best;
    }
};
