//NumberOfDiscIntersections
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
int solution(vector<int> A)
{
    long last=A.size();
    long result=0,active=0;
    vector<long> open;
    vector<long> close;
    //disc open
    for(long i=0;i<last;i++)
    {
//        cout<<"A[i] is "<<A[i]<<"  i is"<<i<<endl;
        close.push_back(i-A[i]);
        open.push_back(A[i]+i);
    }
//    cout<<"open is ";
//    print_vector(open);
//    cout<<"close is ";
//    print_vector(close);
//    cout<<endl<<endl;

    sort(open.begin(),open.end());
    sort(close.begin(),close.end());
//    cout<<"Sorted open is ";
//    print_vector(open);
//    cout<<"Sorted close is ";
//    print_vector(close);
//    cout<<endl<<endl;

    while(!open.empty())
    {
        if(open.back()>=close.back())
        {
//            cout<<"Open before operation"<<endl;
//            print_vector(open);
            result=result+active;
            active++;
            open.pop_back();
//            cout<<"Open after operation"<<endl;
//            print_vector(open);

        }else
        {
//            cout<<"Close before operation"<<endl;
//            print_vector(close);
            active--;
            close.pop_back();
//            cout<<"Close after operation"<<endl;
//            print_vector(close);
        }
//        cout<<"Result is now "<<result<<endl;
//        cout<<"Active is now "<<active<<endl<<endl;
    if(result>10000000){return -1;}
    }
    //disc close

    return result;
}

int main ()
    {
      //int myints[] = {1,5,2,1,4,0};
      int myints[] = {};
      vector<int> myvector (myints, myints+sizeof(myints)/sizeof(myints[0]) );
      string S{"CA"};
      //print_vector(result);
      int result=solution(myvector);
      cout<<"\nResult is "<< result<<endl;
      print_vector(myvector);
      return 0;
    }
