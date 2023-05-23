#include "WAR_v2.hpp"

void WAR_v2::init(Result *res){
    // Initialize the crossover probability of ocurrence matrix
    for(int i=0; i<res->get_N(); i++){

        vector<float> temp;
        for(int j=0;j<res->get_indSize();j++){
            temp.push_back(0);        
        }

        p_cross.push_back(temp);
    }

    // Initialize the offspring matrix and off_Fobj vector
    for(int i=0; i<2*res->get_N(); i++){

        vector<float> temp;
        for(int j=0;j<res->get_indSize();j++){
            temp.push_back(0);        
        }

        offspring.push_back(temp);
        off_Fobj.push_back(0);
    }
}

void WAR_v2::generate_ProbMat(){
    for(int i=0; i<p_cross.size(); i++){
        for(int j=0;j<p_cross[i].size();j++){
            p_cross[i][j] = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);        
        }
    }
}

void WAR_v2::crossover_do(Result *res, Mating *mat){
    generate_ProbMat();
    cout << endl;
    cout << "Crossover:" << endl;
    for(int i=0;i<p_cross.size();i++){
        // Select parents
        vector<float> parent1 = res->get_pop(mat->get_toChoose(i));
        vector<float> parent2 = res->get_pop(mat->get_toChoose(i+res->get_N()));
        vector<float> child1 = parent1;
        vector<float> child2 = parent2;
        cout << mat->get_toChoose(i) << ", " << mat->get_toChoose(i+res->get_N()) << endl;
        
        for(int j=0;j<p_cross[i].size();j++){
            // Check if crossover will occur for each variable
            if(p_cross[i][j]<=prob_cross){
                cout << "OK\t";
                child1[j] = alpha*parent1[j] + (1-alpha)*parent2[j];
                child2[j] = alpha*parent2[j] + (1-alpha)*parent1[j];
            }else{
                cout << "NOT\t";
            }

            // Update offspring matrix
            set_offspring(i, child1);
            set_offspring(i+res->get_N(), child2);
        }
        cout << endl;
    }
}