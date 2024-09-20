class Solution {
public:
    int solve(int n){
    if(n==0||n==1)    
        return n;
    int p2=0;
    int p1=1;
    int c=0;
    for(int i=2;i<=n;i++)
    {
        c=p1+p2;
        p2=p1;
        p1=c;
    }
    return p1;
    }
    int fib(int n) {
    return solve(n);
    }
};