#ifndef _Problem_cpp_
#define _Problem_cpp_

#include "Problem.hpp"
#include <cmath>
#define M_PI           3.14159265358979323846  /* pi */

void Problem::init(){
    /*upper_bound = {150.0, 150.0, 47.0, 150.0, 150.0};
    lower_bound = {50.0, 50.0, 25.0, 50.0, 50.0};*/

    upper_bound = {12.1,5.8};
    lower_bound = {-3.0,4.1};
}

float Problem::f_obj(vector<float> ind){
    /*// Objective function example: sum all 'ind' elements.
    float ret = 0;
    for(int i = 0;i<ind.size();i++){
        ret += ind[i];
    }
    return (-1)*ret;*/ 

    float x1 = ind[0];
    float x2 = ind[1];
    return (-1)*(21.5 + x1*sin(4*M_PI*x1) + x2*sin(20*M_PI*x2));

}

vector<float> Problem::get_Ubound(){
    return upper_bound;
}

vector<float> Problem::get_Lbound(){
    return lower_bound;
}
#endif