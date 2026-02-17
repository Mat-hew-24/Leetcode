class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = s.size();
        int count = 0;
        int flag = 0;
        for (int i=length-1;i >= 0;i--)
        {
            if (!flag && s[i]==' ')
                continue;
            if (s[i]!=' '){
                flag=1;
                count++;
            }
            else{
                break;
            }
        }
        return count;
    }
};
