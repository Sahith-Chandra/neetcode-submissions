class Solution {
public:

    string encode(vector<string>& strs) {
        string result; 
        for (string s : strs) {
            result += to_string(s.size()) + '#' + s;
        }
        return result;
    }

    vector<string> decode(string s) {
        int i = 0;
        vector<string> result;

        while(i < s.size()) {
            int j = i;
            while (s[j] != '#') {
                j++;
            }
            int length = stoi(s.substr(i, j - i));
            i = j + 1; // push i to after the # (where the word starts).
            result.push_back(s.substr(i, length));
            i += length; //push i to where the word ends.
        }

        return result;
    }
};
