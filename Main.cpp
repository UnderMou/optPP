#include <iostream>
#include "Solver.cpp"
#include "./Algorithm/GA_simplest/GA_simplest.cpp"
#include "./Algorithm/GA_simplest_v2/GA_simplest_v2.cpp"

int main(){
    Problem p;
    p.init();

    Result r;
    r.init(50,2,&p);
    r.write_results();

    GA_simplest a;
    GA_simplest_v2 a_v2;

    Algorithm *pA;
    pA = &a_v2;

    pA->init(25, &r); // seed = 13, Result object, 
    
    Solver s;
    s.init(p,&r,500);
    s.run(pA);

    r.write_results();
}