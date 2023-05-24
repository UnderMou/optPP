#ifndef _Solver_hpp_
#define _Solver_hpp_

#include "Result.cpp"
#include "./Algorithm/Algorithm.hpp"

class Solver{
    protected:
        int max_gen;
        int t;
        Problem prob;
        Result* res;
    public:
        void init(Problem prob, Result* res, int max_gen);

        void run(Algorithm *alg);

        bool stop_criteria();

        void update_pop(Algorithm *alg);

};
#endif