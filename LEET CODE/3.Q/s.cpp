class Solution {
public:
    long long minTime(vector<int>& skill, vector<int>& mana) {
        int n = skill.size();
    int m = mana.size();
    
    vector<long long> P(n);
    P[0] = skill[0];
    for (int i = 1; i < n; ++i) P[i] = P[i - 1] + skill[i];
    
    long long startTime = 0;
    for (int j = 1; j < m; ++j) {
        long long maxDelay = 0;
        for (int i = 0; i < n; ++i) {
            long long prevFinish = startTime + P[i] * (long long)mana[j-1];
            long long currentStart = (i == 0) ? 0 : P[i-1] * (long long)mana[j];
            maxDelay = max(maxDelay, prevFinish - currentStart);
        }
        startTime = maxDelay;
    }
    
    return startTime + P[n-1] * mana[m-1]; 
    }
};
