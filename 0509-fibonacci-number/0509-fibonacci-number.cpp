class Solution {
public:
    vector<long long> memo = vector<long long>(31, -1);
    int fib(int n) {
        if( n <= 1) return n;
        if(memo[n] != -1) return memo[n];
        return memo[n] = fib(n - 1) + fib(n - 2);
    }
};