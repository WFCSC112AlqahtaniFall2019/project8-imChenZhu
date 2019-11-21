#include <iostream>
#include <fstream>
#include <stack>
#include <queue>
#include "Data.h"

using namespace std;

int main() {
    stack <Data> stack;
    queue <Data> queue;
    priority_queue <Data> priQueue;

    // test file
    ofstream myfile;
    myfile.open ("../test.txt");
    myfile << "Writing this to a file.\n";
    myfile.close();

    ifstream inFile;
    inFile.open("../winequality-red.csv");

    ofstream stacked;
    stacked.open("../stacked.txt");

    ofstream queued;
    queued.open("../queued.txt");

    ofstream priQueued;
    priQueued.open("../priQueued.txt");

    if (!inFile.is_open()){
        cout << "Input file cannot be opened correctly" << endl;
        return 1;
    }

    if (!stacked.is_open()){
        cout << "Stack file cannot be opened correctly" << endl;
        return 100;
    }

    if (!queued.is_open()){
        cout << "Queue file cannot be opened correctly" << endl;
        return 10000;
    }

    if (!priQueued.is_open()){
        cout << "priQueued file cannot be opened correctly" << endl;
        return 1000000;
    }


    cout << "All files are available." << endl;

    while (!inFile.eof()){
        double fixedAc1;
        getline(inFile, fixedAc1, ',');

        double volatileAc1;
        getline(inFile, volatileAc1, ',');;

        double citricAc1;
        getline(inFile, citricAc1, ',');

        double resiSugar1;
        getline(inFile, resiSugar1, ',');

        double chlorides1;
        getline(inFile, chlorides1, ',');

        int fSulfurDiox1;
        getline(inFile, fSulfurDiox1, ',');

        int tSulfurDiox1;
        getline(inFile, tSulfurDiox1, ',');

        double density1;
        getline(inFile, density1, ',');

        double pH1;
        getline(inFile, pH1, ',');

        double sulphates1;
        getline(inFile, sulphates1, ',');

        double alcohol1;
        getline(inFile, alcohol1, ',');

        int quality1;
        getline(inFile, quality1, ',');
    }

    return 0;
}