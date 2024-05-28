#include<iostream>
#include "Parser.h"
#include "Solver.h"

int main(){
    Parser parser("ks_50_1");
    parser.Parse();

    Solver solver;
    int M=solver.solve(parser.get_w(),parser.get_v(),parser.get_max_weight(),parser.get_N());
    cout<<M<<endl;
    return 0;
}
