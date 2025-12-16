#include "skibussy.hpp"




int main() {
    Calc calc;
    vector<Calc::ice_cream> load_eq = {};

    Calc::ice_cream x {0, '+'};
    Calc::ice_cream y {1, 'e'};
    Calc::ice_cream z {1, 'e'};

    load_eq.push_back(x);
    load_eq.push_back(y);
    load_eq.push_back(z);

    calc.road_in(load_eq);

    return 0;
}

void Calc::road_in(vector<ice_cream> x) {
    map_ice_lunch(x);
    return ;
}


vector<Calc::lunchbox> Calc::map_ice_lunch(vector<Calc::ice_cream> x) {
    vector<Calc::lunchbox> ret = {};
    for(int i=0; i<x.size(); i++) {
        lunchbox c(x.at(i).flavor, x.at(i).cone);
        ret.push_back(c);
        printf("%d, %c", c.num, c.op);
    }
    return ret;
}