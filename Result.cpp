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
        pop_Fobj.push_back(0);
    }
}

void Result::set_Fobj(int idx, float value){
    pop_Fobj[idx] = value;
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