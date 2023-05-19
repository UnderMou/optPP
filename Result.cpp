#include "Result.hpp"

void Result::init(int value1, int value2){
    // Define population sizes
    N = value1;
    ind_size = value2;

    // Initialize population matrix randomngly and objective function values with zeros
    for(int i=0;i<N;i++){

        vector<float> temp;
        for(int j=0;j<ind_size;j++){
            temp.push_back(j);   // TODO: Gerar os elementos aleatóriamente         
        }

        pop.push_back(temp);
        pop_Fobj.push_back(i);
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