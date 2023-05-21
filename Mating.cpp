#include "Mating.hpp"
#include <limits>

void Mating::init(int seed, Result *res){
    srand(seed);

    // Initiate the mating pool
    for(int i=0;i<(int)(2*res->get_N());i++){
        vector<int> temp;
        for(int j=0;j<tourn_size;j++){
            temp.push_back(rand()%res->get_N());
        }
        mat_pool_idx.push_back(temp);

        to_choose.push_back(0);
    }
}

void Mating::matingPool_do(Result *res){
    // Generate the random index for tournament selection
    for(int i=0;i<mat_pool_idx.size();i++){
        for(int j=0;j<mat_pool_idx[i].size();j++){
            mat_pool_idx[i][j] = rand()%res->get_N();
        }
    }

    // Compare objective function values and definite individuals to be picked up for recombination
    float comp;
    int aux;
    for(int i=0;i<mat_pool_idx.size();i++){
        comp = numeric_limits<float>::infinity();
        for(int j=0;j<mat_pool_idx[i].size();j++){
            if(res->get_Fobj(mat_pool_idx[i][j])<=comp){
                comp = res->get_Fobj(mat_pool_idx[i][j]);
                aux = mat_pool_idx[i][j];
            }
        }
        to_choose[i] = aux;
    }
}

void Mating::print_matingPool(){
    cout << "Mating pool:" <<endl;
    for(int i=0;i<mat_pool_idx.size();i++){
        for(int j=0;j<mat_pool_idx[i].size();j++){
            cout << mat_pool_idx[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "'to_choose' parents:" <<endl;
    for(int i=0;i<to_choose.size();i++){
        cout << to_choose[i] << " ";
    }
    cout << endl;
}

int Mating::get_toChoose(int idx){
    return to_choose[idx];
}