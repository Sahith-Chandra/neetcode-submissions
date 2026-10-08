class Solution {
public:
    bool isAnagram(string s, string t) {
        //check if string length is equal first
        if (s.size() != t.size()){
            return false;
        }

        //store both arrays in hashmaps
         //the key will be the letter and the value will be the letter count
        std::map<char, int> mapS = {};
        std::map<char, int> mapT = {};

        //iterate through one hashmap and check if its key value is the same
        for (int i = 0; i < s.size(); i++) {
            mapS[s[i]]++;
            mapT[t[i]]++;
        }

        //return true if mapS and mapT are equal:
        return mapS == mapT;
        
    }
};
