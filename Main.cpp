#include <iostream>
#include "Solver.cpp"

int main(){
    Problem p;

    Result r;
    r.init(100,5,&p);
    r.write_results();

    Algorithm a;
    a.init(25, &r); // seed = 13, Result object, 
    
    Solver s;
    s.init(p,&r,500,a);
    s.run();

    r.write_results();
}