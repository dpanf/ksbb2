#include "Solver.h"
#include "Parser.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int Solver::solve(vector<int> weights, vector<int> values, int mw,int N){
    vector<vector<int>> dp(N+1,vector<int>(mw+1,0));
    int i,j;
    for(i=1;i<=N;i++)
        for(j=0;j<=mw;j++)
            if(weights[i-1]>j)
                dp[i][j]=dp[i-1][j];
            else
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-weights[i-1]]+values[i-1]);

    return dp[N][mw];
}
