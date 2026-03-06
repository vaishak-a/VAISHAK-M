class Solution {
public:
    long long maximumTotalDamage(vector<int>& power) {
         map<int, long long> counts;
    for (int p : power) counts[p]++;

    vector<int> unique_vals;
    for (auto const& [val, count] : counts) {
        unique_vals.push_back(val);
    }

    int n = unique_vals.size();
    vector<long long> dp(n + 1, 0);

    for (int i = 0; i < n; i++) {
        long long current_val_total = (long long)unique_vals[i] * counts[unique_vals[i]];
        
        int j = i - 1;
        while (j >= 0 && unique_vals[i] - unique_vals[j] <= 2) {
            j--;
        }

        long long take_current = current_val_total + (j >= 0 ? dp[j + 1] : 0);
        long long skip_current = dp[i];

        dp[i + 1] = max(take_current, skip_current);
    }

    return dp[n];
    }
};
