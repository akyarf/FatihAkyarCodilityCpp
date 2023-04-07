// sort algorithm example
#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>       // std::vector
using namespace std;
//Print function
void print_vector(vector<int> &vect)
   {   cout<<"\nPrinted vector is: \n";
       for (auto i = vect.begin(); i != vect.end(); ++i)
        {cout<< *i << " ";}
   }
int solution(vector<int> &A)
{
    int count=0, sum=0;
    while(!A.empty())
    {
        //cout<<"\nLast element is A.back()"<<A.back();
        if(A.back()==1)
        {
            count++;
        }
        else
        {
            sum+=count;
        }
        if(sum>1000000000)
        {
            return(-1);
        }
        A.pop_back();
    }

    return sum;
}

int main () {
  int myints[] = {0,1,0,1,1};
  int N=5;
  vector<int> myvector (myints, myints+sizeof(myints)/sizeof(myints[0]) );               // 32 71 12 45 26 80 53 33
  int result=solution(myvector);
  //print_vector(result);
  cout<<"\nThe smallest missing value is "<<result;
  return 0;
}
