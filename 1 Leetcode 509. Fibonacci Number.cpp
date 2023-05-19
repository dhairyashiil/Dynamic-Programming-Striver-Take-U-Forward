class Solution {
public:
    
    /*
    // Code 1 : Recursion + DP
    // Time Complexity : O(n)
    // Space Complexity : O(n) + O(n)
    
    int getFibNumber(int n, vector<int> &dp) {
        // Base cases: 
        if (n == 0 || n == 1) return n;

        // If the Fibonacci number for the given index 'n' is already calculated, 
        // return it from the dp array.
        if (dp[n] != -1) return dp[n];

        // Calculate the Fibonacci number for the given index 'n' 
        // by recursively calling the function for the previous two indices,
        // and store the result in the dp array for future use.
        dp[n] = getFibNumber(n - 1, dp) + getFibNumber(n - 2, dp);

        // Return the calculated Fibonacci number for the given index 'n'.
        return dp[n];
    }

    int fib(int n) {
        // Create a dp array to store the calculated Fibonacci numbers.
        // Initialize the dp array with -1 to indicate that the Fibonacci number for each index is not calculated yet.
        vector<int> dp(n + 1, -1);

        // Call the recursive helper function to calculate the Fibonacci number for the given index 'n' using dynamic programming.
        return getFibNumber(n, dp);
    }
    */

    
    /*
    // Code 2 : Tabulation + DP
    // Time Complexity : O(n)
    // Spacde Complexity : O(n)
    
    int fib(int n) {
        // Create a dynamic programming array to store the Fibonacci numbers
        vector<int> dp(n + 2, 0);
        
        // Base cases: F(0) = 0, F(1) = 1
        dp[0] = 0;
        dp[1] = 1;
        
        // Calculate Fibonacci numbers from 2 to n
        for (int i = 2; i <= n; i++) {
            // Add the previous two Fibonacci numbers to get the current Fibonacci number
            dp[i] += dp[i - 1];
            dp[i] += dp[i - 2];
        }
        
        // Return the nth Fibonacci number
        return dp[n];
    }
    */
    
    // Code 3 : Tabulation + DP(But not storing all elemnts)
    // Time Complexity : O(n)
    // Spacde Complexity : O(1)
    
    int fib(int n) {
        // Base cases: if n is 0 or 1, return n since F(0) = 0 and F(1) = 1.
        if (n == 0 || n == 1) return n;

        // Initialize variables to store the Fibonacci numbers for indices 0 and 1.
        int prev2 = 0; // F(0) = 0
        int prev1 = 1; // F(1) = 1

        // Calculate the Fibonacci number for the given index 'n' iteratively.
        for (int i = 2; i <= n; i++) {
            int curr = prev1 + prev2; // Calculate the current Fibonacci number by adding the previous two Fibonacci numbers.
            prev2 = prev1; // Update the previous2 variable to the value of previous1.
            prev1 = curr; // Update the previous1 variable to the value of current.
        }

        // Return the Fibonacci number for the given index 'n'.
        return prev1; // not returning 'curr'
    }

    
};
