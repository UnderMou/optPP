#ifndef _Result_hpp_
#define _Result_hpp_

#include "Problem.cpp"

using namespace std;

class Result{
    protected:
        int N;                          // population size
        int ind_size;                   // individual size
        vector<vector<float>> pop;      // population
        vector<float> pop_Fobj;         // population f_objective values
    public:
        void init(int N, int ind_size, Problem *prob);

        void set_Fobj(int idx, float value);

        void set_pop(int idx, vector<float> new_ind);

        vector<float> get_pop(int idx);

        int get_N();

        int get_indSize();

        float get_Fobj(int idx);

        void write_results();
};
#endif