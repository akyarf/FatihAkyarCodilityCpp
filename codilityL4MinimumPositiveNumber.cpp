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
int solution(vector<int> &A)
{
    print_vector(A);
    sort(A.begin(), A.end(), greater<int>());
    print_vector(A);
    for (int i=0;i<A.size();i++)
    {
        if(A[i]<1){A.pop_back(); break;}

    }
    if(A.size()==0)
    {
        return 1;
    }
    int smallest=1;
    for(int i=A.size();i>0;i--)
        {
            if (A.back()==smallest)
            {
                smallest++;
            }
            A.pop_back();
        }
    return smallest;
}

int main () {
  int myints[] = {3,4,4,-6,1,4,4};
  int N=5;
  vector<int> myvector (myints, myints+sizeof(myints)/sizeof(myints[0]) );               // 32 71 12 45 26 80 53 33
  int result=solution(myvector);
  //print_vector(result);
  cout<<"\nThe smallest missing value is "<<result;
  return 0;
}
