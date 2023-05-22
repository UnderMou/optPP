#include "../Mating.cpp"

class Tournament : public Mating{
    protected:
        int tourn_size = 2;
        int seed;
    public:
        void init(int seed, Result *res);

        void matingPool_do(Result *res);
};