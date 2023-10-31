class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int len1 = word1.length();
        int len2 = word2.length();
        int i = 0, j = 0;
        string result;

        // Merge the strings alternately
        while (i < len1 || j < len2) {
            if (i < len1) {
                result += word1[i];
                i++;
            }
            if (j < len2) {
                result += word2[j];
                j++;
            }
        }

        return result;
    }
};
