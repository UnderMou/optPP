class Mutation{
    protected:
        float prob_mut = 0.03;
        vector<vector<float>> p_mut;
    public:
        void init(Crossover *cross);

        void generate_Prob_mutMat();

        void print_p_mut();

        void mutation_do(Crossover *cross, Problem *prob);
};