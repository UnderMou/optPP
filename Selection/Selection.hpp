#ifndef _Selection_hpp_
#define _Selection_hpp_

#include <numeric>      // std::iota
#include <algorithm>    // std::sort, std::stable_sort

class Selection{
    protected:
        vector<float> sel_fobjs;
        vector<vector<float>> sel_inds;
        vector<size_t> fobj_sort;
    public:
        virtual void init(Result *res, Crossover *cross) = 0;

        virtual void update_pop_selection(Result *res, Crossover *cross) = 0;

        void print_selec_mat();

        virtual vector<size_t> sort_indexes(const vector<float> &v) = 0;

        void print_sorted();
};
#endif