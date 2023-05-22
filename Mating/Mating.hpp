class Mating{
    // This Mating pool class is a base class for specific mating mechanisms
    protected:
        vector<vector<int>> mat_pool_idx;
        vector<int> to_choose; 
    public:
        virtual void init(int seed, Result *res) = 0;

        virtual void matingPool_do(Result *res) = 0;

        void print_matingPool();

        int get_toChoose(int idx);
};