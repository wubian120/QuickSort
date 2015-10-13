#include <iostream>

#include <math.h>
using namespace std;


#include "quicksort_one.h"


int main()
{

    QuickSortOne* qso;
    qso = new QuickSortOne();

    vector<double> values;
//    values.push_back(8);
    values.push_back(2);
//    values.push_back(6);
    values.push_back(4);
//    values.push_back(1);
    values.push_back(9);
    values.push_back(5);
    values.push_back(8);
    values.push_back(7);


    int s = 0;
    int e = values.size() - 1;

    double mid = 0.0;

    qso->QuickSort(values,s,e);

    for(int i = 0;i != values.size();++i){
        cout<<" the ["<<i<<"]: "<<values[i]<<endl;
    }

    mid = qso->EvaluateMedian(values);
    cout<<"the mid is: "<<mid<<endl;
    double a = 1.0;
    double  b = 3.1;

    double d = 0.0;
    d = a - b;
    double c = 0.0;
    c = fabs(a-b);
    cout<<" the abstract value of b-a is: "<<d<<" "<<c<<endl;

    cout << "Hello World!" << endl;
    return 0;
}

