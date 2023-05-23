class Algorithm{
    protected:
        
    public:
        virtual void init(int seed, Result *res) = 0;

        virtual void advance_gen(Result *res, Problem prob) = 0;

};