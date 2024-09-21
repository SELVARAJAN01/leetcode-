class Solution {
public:
    void swap(int *x,int *y)
    {
        int temp=*x;
        *x=*y;
        *y=temp;
    }
    void reverse(vector<int>& a,int s,int e){
      while(s<e)
       swap(&a[s++],&a[e--]);
    }
    
    void rotate(vector<int>& a, int k) {
        int n=a.size();
        k=k%n;
        reverse(a,0,n-k-1);
        reverse(a,n-k,n-1);
        reverse(a,0,n-1);
    }
};