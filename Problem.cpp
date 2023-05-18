#include "Problem.hpp"

using namespace std;

float Problem::f_obj(vector<float> ind){
    // Objective function example: sum all 'ind' elements.
    float ret = 0;
    for(int i = 0;i<ind.size();i++){
        ret += ind[i];
    }
    
    return ret; 
}