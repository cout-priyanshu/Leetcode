class Solution {
public:
    int romanToInt(std::string s) {
        int val[128] = {0};
        val['I'] = 1;
        val['V'] = 5;
        val['X'] = 10;
        val['L'] = 50;
        val['C'] = 100;
        val['D'] = 500;
        val['M'] = 1000;

        int total = 0;
        int n = s.length();

        for (int i = 0; i < n; ++i) {
            if (i + 1 < n && val[s[i]] < val[s[i + 1]]) {
                total -= val[s[i]];
            } else {
                total += val[s[i]];
            }
        }

        return total;
    }
};