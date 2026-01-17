class Solution {
public:
    bool isAnagram(string s, string t) {
        int l1=s.length();
        int l2=t.length();
        if(l1!=l2) return false;
        int a[26]={0};
        int b[26]={0};
        for(int i=0;i<l1;i++){
            a[s[i]-'a']= a[s[i]-'a']+1;
            b[t[i]-'a']= b[t[i]-'a']+1;
        }
        for(int i=0;i<26;i++){
            if(a[i]!=b[i])
                return false;
        }
        return true;
        
        
    }
};