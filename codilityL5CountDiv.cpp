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
    int a=(B - A) / K;
    int b=B % K;
    int c=A % K;
    int e=A+B % K;
    int d=B / K - A / K;
    cout<<"\na is "<<a<<"\nb is "<<b<<"\nc is "<<c<<"\nd is "<<d<<"\ne is "<<e;
    return (B - A) / K + (A % K == 0 ? 1 : 0);

}

int main () {
  int myints[] = {3,4,4,-6,1,4,4};
  int N=5;
  vector<int> myvector (myints, myints+sizeof(myints)/sizeof(myints[0]) );               // 32 71 12 45 26 80 53 33
  //int result=solution(myvector);
  //print_vector(result);
  int result=solution(11,345,17);//22
  cout<<"\nThe smallest missing value is "<< result;
  return 0;
}
