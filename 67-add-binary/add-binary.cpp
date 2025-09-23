class Solution {
public:
    string addBinary(string a, string b) {
        int m=a.size();
        int n=b.size();
        int i=m-1,j=n-1;
        int carry=0; 
        string s;
        while(i>=0 && j>=0){
            int sum=(a[i]-'0')+(b[j]-'0')+carry;
                int a=sum%2;
                s.insert(s.begin(),char(a + '0'));
                carry=sum/2;
                i--;
                j--;
            }
        while(i>=0){
                int sum=(a[i]-'0')+carry;
                int a=sum%2;
                s.insert(s.begin(),char(a + '0'));
                carry=sum/2;
                i--;
        }
        while(j>=0){
                int sum=(b[j]-'0')+carry;
                int a=sum%2;
                s.insert(s.begin(),char(a + '0'));
                carry=sum/2;
                j--;
        }
        if(carry==1){
            s.insert(s.begin(),'1');
        }
        return s;

    }
};