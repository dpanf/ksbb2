#ifndef SOLVER_H
#define SOLVER_H
#include "Parser.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

class Solver
{
    public:
        int solve(vector<int> weights, vector<int> values, int mw,int N);
    protected:

    private:
};

#endif // SOLVER_H
