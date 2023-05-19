#include "Solver.hpp"

void Solver::init(Problem value1, Result* value2, int value3, Algorithm value4){
    max_gen = value3;
    prob = value1;
    res = value2;
    t = 0;
    alg = value4;
}

bool Solver::stop_criteria(){
    if(t<max_gen){return true;}
    return false;
}

void Solver::run(){
    while(stop_criteria()){
        cout << "iteração: " << t << endl;
        //evaluate();
        update_pop();
        t++;
    }
}

void Solver::evaluate(){
    /*
    for(int i = 0;i<res->get_N();i++){
        // evaluate objective funtion of each individual and set its value
        // on Result.Fobj attribute of the Result class
        res->set_Fobj(
                    i,                           // individual index
                    prob.f_obj(res->get_pop(i))  // individual objective function value
                );
    }
    */

    
}

void Solver::update_pop(){
    alg.advance_gen(res, prob);    
}