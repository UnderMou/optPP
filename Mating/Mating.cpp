#ifndef _Mating_cpp_
#define _Mating_cpp_

#include "Mating.hpp"
#include <limits>

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

#endif