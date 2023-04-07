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
vector<int> solution(int N, vector<int> &A)
{
    vector<int> myvector(N+1);
    for(int element:A)
    {
        if(element<=N)
        {
            myvector[element-1]++;
            if (myvector[N]<(myvector[element-1])){myvector[N]++;}
        }

        else
        {
            myvector.assign(N+1,myvector[N]);
        }
    }
    myvector.pop_back();
    return myvector;
}

int main () {
  int myints[] = {3,4,4,6,1,4,4};
  int N=5;
  vector<int> myvector (myints, myints+sizeof(myints)/sizeof(myints[0]) );               // 32 71 12 45 26 80 53 33
  vector<int> result=solution(N,myvector);
  print_vector(result);

  return 0;
}
