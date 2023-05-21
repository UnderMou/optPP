#include "Selection.hpp"

void Selection::init(Result *res, Crossover *cross){
    // Initialize selection matrix with Result infos
    for(int i=0;i<res->get_N();i++){ 
        sel_fobjs.push_back(res->get_Fobj(i));
        sel_inds.push_back(res->get_pop(i));
    }

    // Initialize selection matrix with Crossover infos
    for(int i=0;i<cross->get_offSize();i++){ 
        sel_fobjs.push_back(cross->get_offFobj(i));
        sel_inds.push_back(cross->get_off(i));
    }
}

void Selection::update_pop_selection(Result *res, Crossover *cross){
    // update selection matrix with Result infos
    for(int i=0;i<res->get_N();i++){
        sel_fobjs[i] = res->get_Fobj(i);
        sel_inds[i] = res->get_pop(i);
    }

    // update selection matrix with Crossover infos
    int idx;
    for(int i=0;i<cross->get_offSize();i++){
        idx = i + res->get_N();
        sel_fobjs[idx] = cross->get_offFobj(i);
        sel_inds[idx] = cross->get_off(i);
    }

    // update Result.pop and Result.Fobj
    // TODO: sort sel_fobjs storaging the indexes ...
    
}

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