//https://www.youtube.com/watch?v=jCan6UbUJFY&t=517s&ab_channel=CodeTrading
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
    vector<int> C(N);
    int top =0, b=0;
    for(int element:A)
    {
        if (element>N){b=top;}
        else
        {
            C[element-1] = (C[element-1]>b) ? C[element-1]+1:b+1;
            if (C[element-1]>top)
            {
                top=C[element-1];
            }
        }
    }

    for(int i=0;i<N;i++)
    {
        C[i] = C[i]<b ? b:C[i];
    }

    return C;
}

int main () {
  int myints[] = {3,4,4,6,1,4,4};
  int N=5;
  vector<int> myvector (myints, myints+sizeof(myints)/sizeof(myints[0]) );               // 32 71 12 45 26 80 53 33
  vector<int> result=solution(N,myvector);
  print_vector(result);

  return 0;
}
