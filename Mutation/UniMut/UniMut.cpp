#ifndef _UniMut_cpp_
#define _UniMut_cpp_

#include "UniMut.hpp"

void UniMut::init(Crossover *cross){
    // Initialize the mutation probability of ocurrence matrix
    for(int i=0; i<cross->get_offspring().size(); i++){

        vector<float> temp;
        for(int j=0;j<cross->get_offspring()[i].size();j++){
            temp.push_back(0);        
        }

        p_mut.push_back(temp);
    }
}

void UniMut::generate_Prob_mutMat(){
    for(int i=0; i<p_mut.size(); i++){
        for(int j=0;j<p_mut[i].size();j++){
            p_mut[i][j] = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);        
        }
    }
}

void UniMut::mutation_do(Crossover *cross, Problem *prob){
    generate_Prob_mutMat();
    cout << endl;
    cout << "Mutation:" << endl;

    float r;
    for(int i=0;i<p_mut.size();i++){
        vector<float> mut_vec = cross->get_off(i);

        for(int j=0;j<p_mut[i].size();j++){
            // Check if mutation will occur for each variable
            if(p_mut[i][j]<=prob_mut){
                cout << "OK\t";
                r = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
                mut_vec[j] = prob->get_Lbound()[j] + r*abs(prob->get_Ubound()[j] - prob->get_Lbound()[j]) ;
            }else{
                cout << "NOT\t";
            }

            // Update offspring matrix
            cross->set_offspring(i, mut_vec);
        }
        cout << endl;
    }
}
#endif