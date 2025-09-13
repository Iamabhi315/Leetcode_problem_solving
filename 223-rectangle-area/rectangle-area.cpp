class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        //ABHISHEK
        int l1=ax2-ax1;
        int l2=bx2-bx1;
        int b1=ay2-ay1;
        int b2=by2-by1;
        int a1=l1*b1;
        int a2=l2*b2;
        int s1=max(ax1,bx1);
        int e1=min(ax2,bx2);
        int s2=max(ay1,by1);
        int e2=min(ay2,by2);
        if(s1<=e1 && s2<=e2)
        {
            int l3=e1-s1;
            int b3=e2-s2;
            int a3=l3*b3;
            return a1+a2-a3;
        }
        else 
            return a1+a2;


    }
};