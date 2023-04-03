//Program to return only even elements in a vector
#include <vector>
#include <iostream>
using namespace std;

//Print function
void print_vector(vector<int> &vect)
   {   cout<<"Shifted array is: ";
       for (auto i = vect.begin(); i != vect.end(); ++i)
        {cout<< *i << " ";}
   }

//I added this part for codility assignment
vector<int> solution(vector<int> &A, int K){
    if(A.size()==0)
    {
        return A;
    }
    vector<int> B=A;
    vector <int> shifted_vector;
    //cout<<"\n A="<< A.size() <<"\n";
    int last=B.size();
    for (int j=0;j<K;j++)
    {
        shifted_vector.push_back(B[last-1]);
        for (int i=0;i<last-1;i++)
            {
                shifted_vector.push_back(B[i]);
            }

            B=shifted_vector;
            shifted_vector.clear();
    }
   return B;
}


int main(){
   //vector<int> vec={20, 51, 11, 88, 44, 77, 14, 99};
   vector<int> vec;
   vector<int> shifted=solution(vec,1);
   print_vector(shifted);
}
//</int></int></int></int></int></int></iostream></vector>
