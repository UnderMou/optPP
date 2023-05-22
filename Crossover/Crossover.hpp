class Crossover{
    protected:
        float prob_cross = 0.6;
        vector<vector<float>> p_cross;
        vector<vector<float>> offspring;
        vector<float> off_Fobj;
    public:
        virtual void init(Result *res) = 0;

        virtual void generate_ProbMat() = 0;

        void print_p_cross();

        void print_offspring();

        virtual void crossover_do(Result *res, Mating *mat) = 0;

        void set_offspring(int idx, vector<float> new_ind);

        void set_offFobj(int idx, float value);

        int get_offSize();

        float get_offFobj(int idx);

        vector<float> get_off(int idx);

        void evaluate_offs(Problem prob);

        vector<vector<float>> get_offspring();
};