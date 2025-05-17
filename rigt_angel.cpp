#include <iostream>
using namespace std;

int main(){
    int N = 10;
    for (int i=1;i<=N;i++){
        for (int j=1;j<=i;j++)
        {
            if (i == 1 || i == N)
            {
                cout<<"*";
            }
            else{
                if (j==1||j==N)
                {
                    cout<<"*";
                }
            }
        }
        cout<<endl;
    }
}