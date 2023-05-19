#include "Mating.cpp"
#include "Algorithm.hpp"

void Algorithm::init(int seed, Result *res){
    mating_pool.init(seed, res);
}

void Algorithm::advance_gen(Result *res){
    /*vector<float> vec = {5,5,5,5,5};
    for(int i = 0;i<res->get_indSize();i++){
        res->set_pop(1,vec);
    }*/

    // Generate individuals "to_choose" on mating_pool.to_choose attribute
    mating_pool.matingPool_do(res);
    mating_pool.print_matingPool();
    
}