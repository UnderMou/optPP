// Whole Arithmetic Recombination - WAR
// Reference: Introduction to Evolutionary Computing Second Edition. 
//            By: A.E. Eiben & J.E. Smith
#ifndef _WAR_v2_hpp
#define _WAR_v2_hpp

#include "../Crossover.cpp"

class WAR_v2 : public Crossover{
    protected:
        float alpha = 0.3;
    public:
        void init(Result *res);

        void generate_ProbMat();

        void crossover_do(Result *res, Mating *mat);
};
#endif