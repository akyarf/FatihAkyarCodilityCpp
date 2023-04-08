//FAiled
#include <iostream>     // std::cout
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

    vector<int> result;
    vector<int>A(S.size(),0),C(S.size(),0),G(S.size(),0),T(S.size(),0);
        cout<<"S[0]= "<<S[0]<<endl;
        cout<<"S.size()= "<<S.size()<<endl;
        if(S[0]=='A'){A[0]++;}
        else
        if(S[0]=='C'){C[0]++;}
        else
        if(S[0]=='G'){G[0]++;}
        else
        {T[0]++;}
        /*print_vector(A);
        print_vector(C);
        print_vector(G);
        print_vector(T);*/

    for(int j=1;j<S.size();j++)
    {
        //cout<<"Burdayim"<<endl;
        A[j]=A[j-1];
        C[j]=C[j-1];
        G[j]=G[j-1];
        T[j]=T[j-1];
        if(S[j]=='A'){A[j]++;}
        else
        if(S[j]=='C'){C[j]++;}
        else
        if(S[j]=='G'){G[j]++;}
        else
        {T[j]++;}
        //cout<<S[j]<<endl;
    }
    /*print_vector(A);
    print_vector(C);
    print_vector(G);
    print_vector(T);*/
    /*if(P.size()==1)
    {
            if(A[0]==1)
                {
                   result.push_back(1);
                }else
            if(C[0]==1)
                {
                   result.push_back(2);
                }else
            if(G[0]==1)
                {
                   result.push_back(3);
                }else
                   {result.push_back(4);}

    }
    else
    {*/

        cout<<"P.size() is "<<P.size();
        for(int i=0;i<P.size();i++)
        {
            //cout<<"Burdayým"<<endl;
            if(A[Q[i]]-A[P[i]]>0){result.push_back(1);} //cout<<"Adayim"<<endl;}
            else
                if(C[Q[i]]-C[P[i]]>0){result.push_back(2);} //cout<<"Bdayim"<<endl;}
            else
                if(G[Q[i]]-G[P[i]]>0){result.push_back(3);} //cout<<"Cdayim"<<endl;}
            else
                if(T[Q[i]]-T[P[i]]>0){result.push_back(4);} //cout<<"Cdayim"<<endl;}
            else
                if(P.size()<=1 || (P[i]==0 && Q[i]==0))
            {
                if(A[0]>0){result.push_back(1);} //cout<<"Adayim"<<endl;}
            else
                if(C[0]>0){result.push_back(2);} //cout<<"Bdayim"<<endl;}
            else
                if(G[0]>0){result.push_back(3);} //cout<<"Cdayim"<<endl;}
            else
                if(T[0]>0){result.push_back(4);} //cout<<"Cdayim"<<endl;}
            }
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
      //string S{"CAGCCTA"};
      string S{"CA"};
      vector<int> P{0,0};//{2,5,0};
      vector<int> Q{0,1};//{4,5,6};
      vector<int> result=solution(S,P,Q);
      print_vector(result);
      //cout<<"\nThe smallest missing value is "<< result;
      return 0;
    }
