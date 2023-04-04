// sort algorithm example
#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>       // std::vector
using namespace std;
//Print function
void print_vector(vector<int> &vect)
   {   cout<<"Printed vector is: ";
       for (auto i = vect.begin(); i != vect.end(); ++i)
        {cout<< *i << " ";}
   }
////i wrote the function below
int solution(vector<int> &A)
{
    vector<int> B=A;
    sort (B.begin(),B.end());
    int last=B.size();
    for(int i=0;i<last;i=i+2)
    {
        if(B[i]!=B[i+1])
            {
                return B[i];
            }
    }
    return -1;
}
//i wrote the function above

/*bool myfunction (int i,int j) { return (i<j); }

struct myclass {
  bool operator() (int i,int j) { return (i<j);}
} myobject;*/

int main () {
  int myints[] = {9,3,9,3,9,7,9};
  vector<int> myvector (myints, myints+sizeof(myints)/sizeof(myints[0]) );               // 32 71 12 45 26 80 53 33
/*
  // using default comparison (operator <):
  std::sort (myvector.begin(), myvector.begin()+4);           //(12 32 45 71)26 80 53 33

  // using function as comp
  std::sort (myvector.begin()+4, myvector.end(), myfunction); // 12 32 45 71(26 33 53 80)

  // using object as comp
  std::sort (myvector.begin(), myvector.end(), myobject);     //(12 26 32 33 45 53 71 80)

  // print out content:
  std::cout << "myvector contains:";
  for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';*/
  int result=solution(myvector);
  cout << "\nResult is "<< result <<"\n";

  return 0;
}
