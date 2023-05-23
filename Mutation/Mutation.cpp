#ifndef _Mutation_cpp_
#define _Mutation_cpp_

#include "Mutation.hpp"

void Mutation::print_p_mut(){
    cout << endl;
    cout << "p_mut:" << endl;
    for(int i=0; i<p_mut.size(); i++){
        for(int j=0;j<p_mut[i].size();j++){
            cout << p_mut[i][j] << " ";        
        }
        cout << endl;
    }
    cout << endl;
}
#endif