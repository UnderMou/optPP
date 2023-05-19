#include <iostream>
#include "Solver.cpp"

int main(){
    Result r;
    r.init(10,5);
    r.write_results();

    Problem p;

    Algorithm a;
    a.init(13, &r); // seed = 13, Result object, 
    
    Solver s;
    s.init(p,&r,7,a);
    s.run();

    r.write_results();
}