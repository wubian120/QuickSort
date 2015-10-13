



#include "quicksort_one.h"



QuickSortOne::QuickSortOne()
{



}

QuickSortOne::~QuickSortOne()
{


}

void QuickSortOne::QuickSort(vector<double>& vals,int s, int e)
{
    if(vals.empty())
    {
        cout<<"The values is empty."<<endl;
    }

    if(s>e)
    {    return;   }

    int r = e;
    int l = s;
    double pivot = vals[s];

    while(l!=r){

        while(pivot <= vals[r] && l < r)
        {
            r--;
        }


        while( pivot >= vals[l] && l < r)
        {
            l++;
        }



        if(r>l)
        {//switch
            double t = vals[l];
            vals[l] = vals[r];
            vals[r] = t;

//            double t = vals[r];
//            vals[r] = vals[l];
//            vals[l] = t;

        }

    }

     vals[s] = vals[l];
     vals[l] = pivot;

    QuickSort(vals,s,l-1);
    QuickSort(vals,l+1,e);

}

double QuickSortOne::EvaluateMedian(vector<double>& vals)
{
	int mid = 0;
	int num = vals.size();

	if(vals.size() == 0){
		cout<<"There is no values in"<<endl;
		return 0.0;
	}
	if(num % 2 != 0)
	{
		mid = (num + 1) / 2;
		return vals[mid - 1];
	}else{//when the number is even
		// tricky part. compare num/2 and num/2 + 1

		double aver = 0.0;
		double sum = 0.0;
		vector<double>::const_iterator itr = vals.begin();
		for(;itr!=vals.end();++itr)
		{
			sum += *itr;
		}
		aver = sum / num;

//		diffOne =
//
		if(fabs(vals[num/2-1] - aver) >= fabs(vals[num/2]- aver))
		{
			return vals[num/2];
		}else{
			return vals[num/2 - 1];
		}

	}
	return 0.0;
}





