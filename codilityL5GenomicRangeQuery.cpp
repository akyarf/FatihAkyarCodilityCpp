//GenomicRangeQuery
#include <iostream>     // std::cout
#include <map>
#include <algorithm>    // std::sort
#include <vector>       // std::vector
using namespace std;
//Print function
void print_vector(vector<int> &vect)
   {   cout<<"\nPrinted vector is: \n";
       for (auto i = vect.begin(); i != vect.end(); ++i)
        {cout<< *i << " ";}
   }
vector<int> solution(string &S, vector<int> &P, vector<int> &Q)
{
    map<string,int> Map;
    Map["A"]=1;
    Map["C"]=2;
    Map["G"]=3;
    Map["T"]=4;
    vector<int> stoint;
    vector<int> result;

//The code above is a bruteforce code. It will be reduced
    for(int i=0;i<S.size();i++)
    {
        string temp;
        //cout<<i<<endl;
        //cout<<S[i]<<endl;
        temp=S[i];
        //cout<<Map[temp]<<endl;

        stoint.push_back(Map[temp]);
    }
//The code above is a bruteforce code. It will be reduced

    for(int j=0;j<P.size();j++)
    {
        int mini=5;
        for(int k=P[j];k<=Q[j];k++)
            {
                if(stoint[k]<mini)
                {
                    mini=stoint[k];
                }
            }
            result.push_back(mini);
    }

    return result;
}

int main ()
    {
      //int myints[] = {3,4,4,-6,1,4,4};
      //int N=5;
      //vector<int> myvector (myints, myints+sizeof(myints)/sizeof(myints[0]) );               // 32 71 12 45 26 80 53 33
      //int result=solution(S,P,Q);
      //print_vector(result);
      //int result=solution(0,0,1);
      //string S{"C","A","G","C","C","T","A"};
      string S{"CAGCCTA"};
      vector<int> P{2,5,0};
      vector<int> Q{4,5,6};
      vector<int> result=solution(S,P,Q);
      print_vector(result);
      //cout<<"\nThe smallest missing value is "<< result;
      return 0;
    }
