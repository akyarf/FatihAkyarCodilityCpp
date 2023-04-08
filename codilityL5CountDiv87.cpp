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
int solution(int A, int B, int K)
{
    int first,result;

    if(B-A>=K)
    {
        cout<<"\n here";
        first= A+(K-(A%K))%K;
        cout<<"\n first "<<first;
        result=(B-first==0)? 1 : ((B-first)/K)+1;
    }
    else
    {

        if(A%K==0)
        {
            cout<<"\n Burdayým";
            result= 1;
            if(A!=B && B%K==0)
            {
                cout<<"\n Burdayýmmmmmmm";
                result=2;
            }

        }
        else
        {
            result=(A%K-B%K>0) ? 1:0;
        }

    }
    return result;
}

int main () {
  int myints[] = {3,4,4,-6,1,4,4};
  int N=5;
  vector<int> myvector (myints, myints+sizeof(myints)/sizeof(myints[0]) );               // 32 71 12 45 26 80 53 33
  //int result=solution(myvector);
  //print_vector(result);
  int result=solution(0,0,1);
  cout<<"\nThe smallest missing value is "<< result;
  return 0;
}
