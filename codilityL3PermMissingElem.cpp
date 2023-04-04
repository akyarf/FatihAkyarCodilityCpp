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
////i wrote the function below
int solution(vector<int> &A)
{

    vector<int> B=A;
    int last=B.size();
        if(last<1)
    {
        return 1;
    }
    else
    if(last<2)
    {
        if(B[0]==1){return 2;}
        else{return 1;}
    }

    //print_vector(B);
    sort (B.begin(),B.end());
    //print_vector(B);

    int first=0;
    int mid;
    if(B[0]!=1)
    {
        return 1;
    }
    if(B[last-1]==last)
    {
        return last+1;
    }

    while(true)
    {
        mid=(first+last)/2;
        if((B[mid]==mid+1) && (B[mid+1]!=mid+2))
        {
            //cout << "\nResult found here"<<"\nB[mid] is "<<B[mid]<<" mid+1 is "<< mid+1 <<" B[mid]+1 is "<< B[mid]+1<<" mid+2 is "<< mid+2;
            //found= true;
            return mid+2;
        }
        if(B[mid]==mid+1)
            {
                first=mid;
            }
        else
        {
          last=mid;
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
  int myints[] = {2,3};
  vector<int> myvector (myints, myints+sizeof(myints)/sizeof(myints[0]) );               // 32 71 12 45 26 80 53 33
  //vector<int> myvector;
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
