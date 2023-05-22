class Mutation{
    protected:
        float prob_mut = 0.03;
        vector<vector<float>> p_mut;
    public:
        virtual void init(Crossover *cross) = 0;

        virtual void generate_Prob_mutMat() = 0;

        void print_p_mut();

        virtual void mutation_do(Crossover *cross, Problem *prob) = 0;
};