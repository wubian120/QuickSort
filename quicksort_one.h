
/*
 * quickort_one.h
 *
 *  Useage    : 快速排序及求中位数
 *  Created on: 2015年10月1日
 *      Author: wubian
 */

#ifndef QUICKSORT_ONE
#define QUICKSORT_ONE

#include <vector>
#include <iostream>
#include <math.h>

using namespace std;

class QuickSortOne
{
public:


    QuickSortOne();

    ~QuickSortOne();

    // quick sort algorithm
    void QuickSort(vector<double>& vals,int s, int e);


    // return the median value
    double EvaluateMedian(vector<double>& vals);



};


#endif // QUICKSORT_ONE

