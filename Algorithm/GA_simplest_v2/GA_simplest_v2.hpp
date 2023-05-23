// This is a simple Genetic Algorithm (GA) for real value
// encoded variables without constraint handling.

#include "../../Mating/Tournament/Tournament.cpp"
#include "../../Crossover/WAR_v2/WAR_v2.cpp"
#include "../../Mutation/UniMut/UniMut.cpp"
#include "../../Selection/FobjSelec/FobjSelec.cpp"

//#include "../Algorithm.hpp"

class GA_simplest_v2 : public Algorithm{
    protected:
        Tournament mating_pool;
        WAR_v2 cross;
        FobjSelec selec;
        UniMut mut;
    public:
        void init(int seed, Result *res);

        void advance_gen(Result *res, Problem prob);
};