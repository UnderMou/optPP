class Algorithm{
    protected:
        Tournament mating_pool;
        WAR cross;
        Selection selec;
        Mutation mut;
    public:
        void init(int seed, Result *res);

        void advance_gen(Result *res, Problem prob);

};