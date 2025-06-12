class Solution {
public:
    int climbStairs(int n) {
        if (n == 1) return 1;
        int one_step_before = 1;  // ways to climb 1 step
        int two_steps_before = 1;  // ways to climb 0 steps (base case)
        int all_ways = 0;
        
        for (int i = 2; i <= n; ++i) {
            all_ways = one_step_before + two_steps_before;
            two_steps_before = one_step_before;
            one_step_before = all_ways;
        }
        return all_ways;
    }
};
