#include <numeric>      // std::iota
#include <algorithm>    // std::sort, std::stable_sort

class Selection{
    protected:
        vector<float> sel_fobjs;
        vector<vector<float>> sel_inds;
        vector<size_t> fobj_sort;
    public:
        void init(Result *res, Crossover *cross);

        void update_pop_selection(Result *res, Crossover *cross);

        void print_selec_mat();

        template <typename T>
        vector<size_t> sort_indexes(const vector<T> &v);

        void print_sorted();
};