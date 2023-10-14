class Solution
{
private:
    const int Maxi = 1000000001;
    int solve(int index, int wall, vector<int> &cost, vector<int> &time, vector<vector<int>> &dp)
    {
        // if no wall is remaining
        if (wall <= 0)
        {
            return 0;
        }
        // if index out of bound return max value
        if (index == cost.size())
        {
            return Maxi;
        }

        if (dp[index][wall] != -1)
        {
            return dp[index][wall];
        }

        int pick = cost[index] + solve(index + 1, wall - time[index] - 1, cost, time, dp);
        int notPick = solve(index + 1, wall, cost, time, dp);

        dp[index][wall] = min(pick, notPick);
        return dp[index][wall];
    }

public:
    int paintWalls(vector<int> &cost, vector<int> &time)
    {
        int n = cost.size();
        vector<vector<int>> dp(n, vector<int>(n + 1, -1));
        return solve(0, cost.size(), cost, time, dp);
    }
};