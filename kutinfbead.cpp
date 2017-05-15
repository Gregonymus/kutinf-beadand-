#include <iostream>
#include <fstream>
#include <vector>
#include <stdlib.h>

using namespace std;

int main()
{
    ifstream input("indat.txt");
    vector<double> mert;
    vector<double> valos;
    int i=0;
    while(i<45){
        double a,b;
        input >> a >> b;
        mert.push_back(a);
        valos.push_back(b);
        i++;
    }

    vector<double> velocity;
    for(i=0; i<45; i++){
        double RA=0;
        RA=(valos[i]-mert[i])/mert[i];
        RA=300000*RA;
        velocity.push_back(RA);
    }
	
    return 0;
}
