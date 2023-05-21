class Algorithm{
    protected:
        Mating mating_pool;
        Crossover cross;
        Selection selec;
        Mutation mut;
    public:
        void init(int seed, Result *res);

        void advance_gen(Result *res, Problem prob);

};