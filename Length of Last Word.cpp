class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        int n=s.size();
        for(int i=n-1;i>=0;i--){
        char ch = s[i];
            if(ch!=' ' ){
                count++;
            }
            else if(count!=0){
                break;
            }
        }
        return count;
    }
};
