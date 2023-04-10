//Fish
#include <iostream>     // std::cout
#include <vector>       // std::vector
#include <algorithm> // std::vector


using namespace std;
//Print function
void print_vector(vector<int> &vect)
   {   //cout<<"\nPrinted vector is: \n";
       for (auto i = vect.begin(); i != vect.end(); ++i)
        {cout<< *i << " ";}
        cout<<endl;
   }
int solution(vector<int> &A, vector<int> &B)
{
    int result=0;
    int last=A.size();
    vector<int>stackm;
    for(int i=0;i<last;i++)
    {
        if(B(i)==1)
            {
                stackm
            }
    }
    return result;
}

int main ()
    {
        int myints[] = {4,3,2,1,5};
        int myints1[] = {0,1,0,0,0};
      //int myints[] = {1,5,2,1,4,0};
      //int myints[] = {};
      vector<int> myvector (myints, myints+sizeof(myints)/sizeof(myints[0]) );
      vector<int> myvector1 (myints1, myints1+sizeof(myints1)/sizeof(myints1[0]) );
      //print_vector(result);
      //int result=solution(myvector);
      int result=solution(myvector,myvector1);
      cout<<"\nResult is "<< result<<endl;
      //print_vector(myvector);
      return 0;
    }
