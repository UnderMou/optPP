#include "Problem.cpp"

class Solver{
    protected:
        int max_gen;
        int t;
        Problem prob;
        Result* res;
    public:
        void init(Problem prob, Result* res, int max_gen);

        void run();

        bool stop_criteria();

        void evaluate();

        void uptade_pop();

};