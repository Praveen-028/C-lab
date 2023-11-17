/*
You are climbing a staircase. It takes n steps to reach the top.
Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
 Example 1:
Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
Example 2:
Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step
    */

// C Program to count number of
// ways to reach Nth stair
#include <stdio.h>

// A simple recursive program to
// find n'th fibonacci number
int fib(int n)
{
	if (n <= 1)
		return n;
	return fib(n - 1) + fib(n - 2);
}

// Returns number of ways to reach s'th stair
int countWays(int s) { return fib(s + 1); }

// Driver program to test above functions
int main()
{
	int s = 6;
	printf("Number of ways = %d", countWays(s));
	getchar();
	return 0;
}
