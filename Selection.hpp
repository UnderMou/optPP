class Selection{
    protected:
        vector<float> sel_fobjs;
        vector<vector<float>> sel_inds;
    public:
        void init(Result *res, Crossover *cross);

        void update_pop_selection(Result *res, Crossover *cross);

        void print_selec_mat();
};