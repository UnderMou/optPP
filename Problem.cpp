#include "Problem.hpp"

void Problem::init(){
    upper_bound = {150.0, 150.0, 47.0, 150.0, 150.0};
    lower_bound = {50.0, 50.0, 25.0, 50.0, 50.0};
}

float Problem::f_obj(vector<float> ind){
    // Objective function example: sum all 'ind' elements.
    float ret = 0;
    for(int i = 0;i<ind.size();i++){
        ret += ind[i];
    }
    // Alg
    return (1)*ret; 
}

vector<float> Problem::get_Ubound(){
    return upper_bound;
}

vector<float> Problem::get_Lbound(){
    return lower_bound;
}