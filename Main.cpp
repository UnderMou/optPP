#include <iostream>
#include "Solver.cpp"
#include "./Algorithm/GA_simplest/GA_simplest.cpp"
//#include "./Algorithm/GA_simplest_v2/GA_simplest_v2.cpp"

int main(){
    Problem p;
    p.init();

    Result r;
    r.init(10,5,&p);
    r.write_results();

    GA_simplest a;
    //GA_simplest_v2 a;
    a.init(25, &r); // seed = 13, Result object, 
    
    Solver s;
    s.init(p,&r,50);
    s.run(&a);

    r.write_results();
}