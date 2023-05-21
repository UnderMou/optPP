#include "Result.cpp"
#include "Algorithm.cpp"

class Solver{
    protected:
        int max_gen;
        int t;
        Problem prob;
        Result* res;
        Algorithm alg;
    public:
        void init(Problem prob, Result* res, int max_gen, Algorithm alg);

        void run();

        bool stop_criteria();

        void evaluate();

        void update_pop();

};