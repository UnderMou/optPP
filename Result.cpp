#include "Result.hpp"
#include <cmath>
#include <bits/stdc++.h>

void Result::init(int value1, int value2, Problem *prob){
    // Define population sizes
    N = value1;
    ind_size = value2;

    // Initialize population matrix randomngly and objective function values with zeros
    float r;
    for(int i=0;i<N;i++){

        vector<float> temp;
        for(int j=0;j<ind_size;j++){
            r = static_cast <float> (rand()) / static_cast <float> (RAND_MAX); // a random float [0,1]
            temp.push_back(
                prob->get_Lbound()[j] + r*abs(prob->get_Ubound()[j] - prob->get_Lbound()[j])               
            );         
        }
        // Initialize pop vec
        pop.push_back(temp);
        // Initialize Fobj
        pop_Fobj.push_back(prob->f_obj(temp));
    }
}

void Result::set_Fobj(int idx, float value){
    pop_Fobj[idx] = value;
}

void Result::set_pop(int idx, vector<float> new_ind){
    pop[idx] = new_ind;
}

vector<float> Result::get_pop(int idx){
    return pop[idx];
}

int Result::get_N(){
    return N;
}

int Result::get_indSize(){
    return ind_size;
}

float Result::get_Fobj(int idx){
    return pop_Fobj[idx];
}

void Result::write_results(){
    cout << "pop:" << endl;
    for(int i=0;i<N;i++){
        for(int j=0;j<ind_size;j++){
            cout << pop[i][j] << " ";            
        }
        cout << endl;
    }
    cout << endl;
    cout << "pop_Fobj:" << endl;
    for(int i=0;i<N;i++){
        cout << pop_Fobj[i] << " ";            
        cout << endl;
    }
}