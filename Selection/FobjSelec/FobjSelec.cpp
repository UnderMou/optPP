#include "FobjSelec.hpp"

void FobjSelec::init(Result *res, Crossover *cross){
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

void FobjSelec::update_pop_selection(Result *res, Crossover *cross){
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
    fobj_sort = sort_indexes(sel_fobjs);
    for(int i=0;i<res->get_N();i++){
        res->set_pop(i, sel_inds[fobj_sort[i]]);
        res->set_Fobj(i, sel_fobjs[fobj_sort[i]]);
    }
    
}

vector<size_t> FobjSelec::sort_indexes(const vector<float> &v){

    // initialize original index locations
    vector<size_t> idx(v.size());
    iota(idx.begin(), idx.end(), 0);

    // sort indexes based on comparing values in v
    // using std::stable_sort instead of std::sort
    // to avoid unnecessary index re-orderings
    // when v contains elements of equal values 
    stable_sort(idx.begin(), idx.end(),[&v](size_t i1, size_t i2) {return v[i1] < v[i2];});

    return idx;
}