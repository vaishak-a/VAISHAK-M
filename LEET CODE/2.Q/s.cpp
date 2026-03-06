class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
         int n = spells.size();
    int m = potions.size();
    vector<int> pairs(n);

    sort(potions.begin(), potions.end());

    for (int i = 0; i < n; i++) {
        long long min_required = (success + spells[i] - 1) / spells[i];
        auto it = lower_bound(potions.begin(), potions.end(), min_required);
        pairs[i] = potions.end() - it;
    }

    return pairs;
    }
};
