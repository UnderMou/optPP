#include "Crossover.hpp"

void Crossover::print_p_cross(){
    cout << endl;
    cout << "p_cross:" << endl;
    for(int i=0; i<p_cross.size(); i++){
        for(int j=0;j<p_cross[i].size();j++){
            cout << p_cross[i][j] << " ";        
        }
        cout << endl;
    }
    cout << endl;
}

void Crossover::print_offspring(){
    cout << "Offspring:" << endl;
    for(int i=0; i<offspring.size(); i++){
        for(int j=0;j<offspring[i].size();j++){
            cout << offspring[i][j] << " ";        
        }
        cout << endl;
    }
    cout << endl;
    cout << "Off_Fobj:" << endl;
    for(int i=0;i<off_Fobj.size();i++){
        cout << off_Fobj[i] << " ";        
    }
    cout << endl;
}

void Crossover::set_offspring(int idx, vector<float> new_ind){
    offspring[idx] = new_ind;
}

void Crossover::set_offFobj(int idx, float value){
    off_Fobj[idx] = value;
}

int Crossover::get_offSize(){
    return off_Fobj.size();
}

float Crossover::get_offFobj(int idx){
    return off_Fobj[idx];
}

vector<float> Crossover::get_off(int idx){
    return offspring[idx];
}

void Crossover::evaluate_offs(Problem prob){
    for(int i = 0;i<get_offSize();i++){
        // evaluate objective funtion of each individual and set its value
        // on Result.Fobj attribute of the Result class
        set_offFobj(
                    i,                            // individual index
                    prob.f_obj(get_off(i))  // individual objective function value
                   );
    }
}

vector<vector<float>> Crossover::get_offspring(){
    return offspring;
}