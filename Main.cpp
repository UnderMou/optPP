#include <iostream>
#include "Solver.cpp"

int main(){
    Result r;
    r.init(10,5);
    r.write_results();

    Problem p;
    
    Solver s;
    s.init(p,&r,7);
    s.run();

    r.write_results();
}