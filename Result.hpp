#include <vector>

using namespace std;

class Result{
    protected:
        int N;                          // population size
        int ind_size;                   // individual size
        vector<vector<float>> pop;      // population
        vector<float> pop_Fobj;         // population f_objective values
    public:
        void init(int N, int ind_size);

        void set_Fobj(int idx, float value);

        void write_results();
};