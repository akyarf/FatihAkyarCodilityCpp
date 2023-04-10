//Codility example test
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
int solution(vector<int> &A)
{
    //print_vector(A);
    int result=1;
    int last=A.size();
    if(last==1)
        {
            if(A.back()==1)
            {
                return 2;
            }
            else{return 1;}
        }


    sort(A.begin(),A.end(),greater<int>());
    //print_vector(A);
    for(int i=0;i<last;i++)
    {
        if(A.back()<1)
        {
            A.pop_back();
        }else{break;}
    }
    last=A.size();
    int current=1;

    for(int i=0;i<last;i++)
    {
        if(A.back()<current)
        {
         A.pop_back();
        }
        else
        if(A.back()==current)
        {
        result=current+1;
        current++;
        A.pop_back();
        }

        else{return result;}
    }
    return current;
}

int main ()
    {
      int myints[] = {1,2,3};
      //int myints[] = {};
      vector<int> myvector (myints, myints+sizeof(myints)/sizeof(myints[0]) );
     // string S{"CA"};
      //print_vector(result);
      int result=solution(myvector);
      cout<<"\nResult is "<< result<<endl;
      //print_vector(myvector);
      return 0;
    }
