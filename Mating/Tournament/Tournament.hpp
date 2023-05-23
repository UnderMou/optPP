// Tournament Selection
// Obs.: This tournament selection doesn't account for constraint
//       violation.
#ifndef _Tournament_hpp_
#define _Tournament_hpp_

#include "../Mating.cpp"

class Tournament : public Mating{
    protected:
        int tourn_size = 2;
        int seed;
    public:
        void init(int seed, Result *res);

        void matingPool_do(Result *res);
};
#endif