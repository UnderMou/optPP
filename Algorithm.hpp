class Algorithm{
    protected:
        Mating mating_pool;
    public:
        void init(int seed, Result *res);

        void advance_gen(Result *res);
};