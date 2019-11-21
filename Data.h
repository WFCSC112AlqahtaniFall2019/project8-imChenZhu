//
// Created by 朱宸 on 2019/11/21.
//

#ifndef PROJECT8_DATA_H
#define PROJECT8_DATA_H
#include <iostream>;
#include <string>;
using namespace std;

class Data{
private:
    double fixedAc;
    double volatileAc;
    double citricAc;
    double resiSugar;
    double chlorides;
    int fSulfurDiox;
    int tSulfurDiox;
    double density;
    double pH;
    double sulphates;
    double alcohol;
    int quality;

public:
    Data();
    Data(double f, double v,double c, double rs, double ch, int fsd, int tsd, double d, double pH, double s, double a, int q);
    friend ostream& operator<<(ostream& os, const Data& data);
    bool operator<(const Data &quality) const;
    bool operator>(const Data &quality) const;
};


#endif //PROJECT8_DATA_H
