//#include "Result.cpp"
#include <vector>

using namespace std;

class Problem{
    protected:
        vector<float> upper_bound;
        vector<float> lower_bound;
    public:
        void init();
        
        float f_obj(vector<float> ind);

        vector<float> get_Ubound();

        vector<float> get_Lbound();
};