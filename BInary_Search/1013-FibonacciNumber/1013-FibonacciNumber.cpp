// Last updated: 22/07/2026, 16:02:46
class Solution {
public:
    int fib(int n) {
        if(n==0 || n==1) return n;
        return fib(n-1)+fib(n-2);
    }
};