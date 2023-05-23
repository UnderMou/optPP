#ifndef _GA_simplest_cpp_
#define _GA_simplest_cpp_

#include "GA_simplest.hpp"

void GA_simplest::init(int seed, Result *res){
    mating_pool.init(seed, res);
    cross.init(res);
    selec.init(res,&cross);
    mut.init(&cross);
}

void GA_simplest::advance_gen(Result *res, Problem prob){

    // Generate individuals "to_choose" on mating_pool.to_choose attribute
    mating_pool.matingPool_do(res);
    mating_pool.print_matingPool();

    // Recombination
    cross.crossover_do(res,&mating_pool);
    cross.print_p_cross();

    // Mutation
    mut.mutation_do(&cross, &prob);
    mut.print_p_mut();

    // Re-evaluation
    cross.evaluate_offs(prob);
    cross.print_offspring();

    // Selection
    selec.update_pop_selection(res, &cross);
    selec.print_selec_mat();
    selec.print_sorted();
}
#endif