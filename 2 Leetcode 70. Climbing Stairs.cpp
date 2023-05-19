// Question Link : https://leetcode.com/problems/climbing-stairs/
// Video Link : https://youtu.be/mLfjzJsN8us


class Solution {
public:
    
    /*
    // Code 1 : Recursion + DP array
    // Time complexity : O(n)
    // Space complexity : O(n) + O(n)
    int climbingWays(int n, vector<int> &dp) {
        // Base case: If n is 1 or 2
        if (n == 1 || n == 2) {
            return n;
        }

        // If the result for n is already calculated, 
        // return it from the dp array for 'n' index
        if (dp[n] != -1) {
            return dp[n];
        }

        // Calculate the number of ways to climb n steps 
        // by adding the number of ways to climb (n-1) steps
        // and the number of ways to climb (n-2) steps
        return dp[n] = climbingWays(n - 1, dp) + climbingWays(n - 2, dp);
    }

    int climbStairs(int n) {
        // Create a dp array of size n+1, initialized with -1 
        vector<int> dp(n + 1, -1);

        // Call the helper function to calculate the number of ways to climb n steps
        return climbingWays(n, dp);
    }
    */
    
    /*
    // Code 2 : Iteraton + DP array
    // Time complexity : O(n)
    // Space complexity : O(n)
    int climbStairs(int n) {
        // complete this later
    }
    */
    
    
    // Code 3 : Iteraton + No DP array
    // Time complexity : O(n)
    // Space complexity : O(1)
    int climbStairs(int n) {
        if (n == 1) {
            return 1;
        }

        int prev1 = 1; // Number of ways to climb 1 step
        int prev2 = 2; // Number of ways to climb 2 steps

        for (int i = 3; i <= n; i++) {
            int curr = prev1 + prev2; // Number of ways to climb i steps
            prev1 = prev2; // Update prev1 for the next iteration
            prev2 = curr; // Update prev2 for the next iteration
        }

        return prev2; // The result is the number of ways to climb n steps
    }

};
