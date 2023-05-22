// This selection mechanism accounts only to the objective function value

#include "../Selection.cpp"

class FobjSelec : public Selection{
    protected:

    public:
        void init(Result *res, Crossover *cross);

        void update_pop_selection(Result *res, Crossover *cross);

        vector<size_t> sort_indexes(const vector<float> &v);
};