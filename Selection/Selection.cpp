#ifndef _Selection_cpp_
#define _Selection_cpp_

#include "Selection.hpp"

void Selection::print_selec_mat(){
    cout << endl;
    cout << "Sel_inds: " << endl;
    for(int i=0;i<sel_inds.size();i++){
        for(int j=0;j<sel_inds[i].size();j++){
            cout << sel_inds[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Sel_fobj: " << endl;
    for(int i=0;i<sel_fobjs.size();i++){
        cout << sel_fobjs[i] << " ";
    }
    cout << endl;
}

void Selection::print_sorted(){
    cout << endl;
    cout << "fobj_sort:" << endl;
        for(int i=0;i<fobj_sort.size();i++){
            cout << fobj_sort[i] << " ";
        }
        cout << endl;
    cout << endl;
}
#endif