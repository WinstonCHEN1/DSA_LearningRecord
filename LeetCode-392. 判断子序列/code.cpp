class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s=="")return true;
        int p=0,q=0;
        int ssize=s.size();
        int tsize=t.size();
        while(p<ssize&&q<tsize){
            if(p==ssize-1&&s[p]==t[q])return true;
            if(s[p]==t[q]){
                p++;
                q++;
            }else{
                q++;
            }
        }
        return false;
    }
};