class Solution {
public: 
    unordered_set<string> s;
    unordered_map<int, bool> mp;
    bool solve(int i, string str){
        if(i >= str.size()){
            return mp[i] = true;
        }

        if(mp.find(i) != mp.end()){
            return mp[i];
        }

        string tmp = "";
        for(int k = i; k < str.size(); ++k){
            tmp += str[k];
            if(s.find(tmp) != s.end() and solve(k+1, str)){
                return mp[k] = true;
            }
        }
        return mp[i] = false;

    }
    bool wordBreak(string str, vector<string>& dic) {
        for(auto &i : dic){
            s.insert(i);
        }
        return solve(0, str);
    }
};
