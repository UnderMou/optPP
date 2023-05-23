// Uniform Mutation - UniMut
// Reference: Introduction to Evolutionary Computing Second Edition. 
//            By: A.E. Eiben & J.E. Smith
#ifndef _UniMut_hpp_
#define _UniMut_hpp_

#include "../Mutation.cpp"

class UniMut : public Mutation{
    protected:

    public:
        void init(Crossover *cross);

        void generate_Prob_mutMat();

        void mutation_do(Crossover *cross, Problem *prob);
};
#endif