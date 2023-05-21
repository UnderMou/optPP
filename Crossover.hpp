class Crossover{
    protected:
        float prob_cross = 0.6;
        float alpha = 0.5;
        vector<vector<float>> p_cross;
        vector<vector<float>> offspring;
        vector<float> off_Fobj;
    public:
        void init(Result *res);

        void generate_ProbMat();

        void print_p_cross();

        void print_offspring();

        void crossover_do(Result *res, Mating *mat);

        void set_offspring(int idx, vector<float> new_ind);

        void set_offFobj(int idx, float value);

        int get_offSize();

        float get_offFobj(int idx);

        vector<float> get_off(int idx);

        void evaluate_offs(Problem prob);
};