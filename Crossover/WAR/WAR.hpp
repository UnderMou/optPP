// Whole Arithmetic Recombination - WAR
// Reference: Introduction to Evolutionary Computing Second Edition. 
//            By: A.E. Eiben & J.E. Smith

#include "../Crossover.cpp"

class WAR : public Crossover{
    protected:
        float alpha = 0.5;
    public:
        void init(Result *res);

        void generate_ProbMat();

        void crossover_do(Result *res, Mating *mat);
};

