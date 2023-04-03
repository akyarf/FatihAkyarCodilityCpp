#include <iostream>
using namespace std;

class Solution {
    public:
        int solution(int N) {
        // Implement your solution here
        int count=0;
        int maxcount=0;
        while(N!=0)
            {
               //count=(N%2==0 ?0:1)+count;
               //N/=2;
               if(N%2==1)
               {
                   N/=2;
                   while(N%2==0 && N!=0)
                   {
                       count=count+1;

                    if(count>maxcount)
                        {
                        maxcount=count;
                        }
                    N/=2;
                   }
                }
                else
                {
                    N/=2;
                }
                    count=0;

            }
        return maxcount;
    }
};

int main() {

    int N= 67425;
    Solution result;
    // Print attribute values
    cout << result.solution(N) << "\n";
    return 0;
    }
