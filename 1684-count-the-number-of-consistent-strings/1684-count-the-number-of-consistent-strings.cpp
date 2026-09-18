class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        bool present[26] = {};

        for(char c : allowed)
            present[c - 'a'] = true;

        int ans = 0;

        for(string word : words) {
            bool ok = true;

            for(char c : word) {
                if(!present[c - 'a']) {
                    ok = false;
                    break;
                }
            }

            if(ok)
                ans++;
        }

        return ans;
    }
};