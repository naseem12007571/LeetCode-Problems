class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        unordered_map<string, int> mp, temp;
        vector<int> ans;
        for(string &w:words) mp[w]++;

        int ws = words[0].size(), sn = s.size(), wn = words.size();
        int k = ws*wn;

        for(int i=0;i+k<=sn;i++)
        {
            bool flag = true;
            temp = mp;
            for(int j=0;j<wn and flag;j++)
            {
                string substr="";
                for(int d=0;d<ws;d++)
                substr+=s[i+j*ws+d];

                if(temp[substr])
                {
                    temp[substr]--;
                }
                else
                flag = false;
            }
            if(flag)
            ans.push_back(i);
        }
        return ans;
    }
};
