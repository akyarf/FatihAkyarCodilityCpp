//NumberOfDiscIntersections
#include <iostream>     // std::cout
#include <vector>       // std::vector
#include <algorithm> // std::vector


using namespace std;
//Print function
void print_vector(vector<int> &vect)
   {   cout<<"\nPrinted vector is: \n";
       for (auto i = vect.begin(); i != vect.end(); ++i)
        {cout<< *i << " ";}
   }
int solution(vector<int> A)
{
    int last=A.size();
    sort(A.begin(),A.end());
    int result=max(A[0]*A[1]*A[last-1],A[last-3]*A[last-2]*A[last-1]);
    return result;
}

int main ()
    {
      int myints[] = {3,4,4,-6,1,-4,4};
      vector<int> myvector (myints, myints+sizeof(myints)/sizeof(myints[0]) );
      string S{"CA"};
      //print_vector(result);
      int result=solution(myvector);
      cout<<"\nResult is "<< result<<endl;
      print_vector(myvector);
      return 0;
    }
