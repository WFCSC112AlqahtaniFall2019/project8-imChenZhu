//
// Created by 朱宸 on 2019/11/21.
//
#include "Data.h";
#include <iostream>;
using namespace std;

Data::Data(){
    fixedAc = 0.0;
    volatileAc = 0.0;
    citricAc = 0.0;
    resiSugar = 0.0;
    chlorides  = 0.0;
    fSulfurDiox = 0;
    tSulfurDiox = 0;
    density = 0.0;
    pH = 0.0;
    sulphates = 0.0;
    alcohol = 0.0;
    quality = 0;
}

Data::Data(double f, double v,double c, double rs, double ch, int fsd, int tsd, double d, double pH, double s, double a, int q){
    fixedAc = f;
    volatileAc = v;
    citricAc = c;
    resiSugar = rs;
    chlorides  = ch;
    fSulfurDiox = fsd;
    tSulfurDiox = tsd;
    density = d;
    pH = pH;
    sulphates = s;
    alcohol = a;
    quality = q;
}

ostream &operator<<(ostream &os, const Data &data) {
    os << data.fixedAc << ", \t" << data.volatileAc << ", \t" << data.citricAc << ", \t" << data.resiSugar << ", \t" << data.chlorides << ", \t"<< data.fSulfurDiox<< ", \t"<< data.tSulfurDiox<< ", \t"<< data.density<< ", \t"<< data.pH<< ", \t"<< ", \t"<< data.sulphates<< ", \t"<< data.alcohol << ", \t"<< data.quality<<endl;
    return os;
}

bool Data::operator<(const Data &winequality) const {
    return winequality.quality < quality;
}

//Overloads the comparison operators
bool Data::operator>(const Data &winequality) const {
    return quality > winequality.quality;
}