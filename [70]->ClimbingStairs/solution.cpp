class Solution {
public:
    int steps(int n){
        int p = 0;
        int q = 1;
        if (n==0)
            return 0;
        if (n==1)
            return 1;
        for (int i=2;i<=n;i++)
        {
            int a = p;
            p = q;
            q = a + q;
        }
        return q;
    }
    int climbStairs(int n) {
        return steps(n+1);
    }
};

//Dynamic Prg
