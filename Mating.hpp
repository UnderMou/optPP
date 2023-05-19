class Mating{
    // This Mating pool class is a tournament selection based mating pool
    protected:
        int tourn_size = 2;
        int seed;
        vector<vector<int>> mat_pool_idx;
        vector<int> to_choose; 
    public:
        void init(int seed, Result *res);

        void matingPool_do(Result *res);

        void print_matingPool();
};