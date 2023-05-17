#include <iostream>
#include "Problem.cpp"

int main(){
    Result r;
    r.init(10,5);
    r.write_results();

    Problem p;
    p.f_obj(&r);

    r.write_results();
}