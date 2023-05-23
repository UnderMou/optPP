// This is a simple Genetic Algorithm (GA) for real value
// encoded variables without constraint handling.

#ifndef _GA_simplest_hpp_
#define _GA_simplest_hpp_

#include "../../Mating/Tournament/Tournament.cpp"
#include "../../Crossover/WAR/WAR.cpp"
#include "../../Mutation/UniMut/UniMut.cpp"
#include "../../Selection/FobjSelec/FobjSelec.cpp"
#include "../Algorithm.hpp"

class GA_simplest : public Algorithm{
    protected:
        Tournament mating_pool;
        WAR cross;
        FobjSelec selec;
        UniMut mut;
    public:
        void init(int seed, Result *res);

        void advance_gen(Result *res, Problem prob);
};
#endif