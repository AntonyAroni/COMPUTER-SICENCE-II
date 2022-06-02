//ANTONY ARONI JARATA
#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<string>
#include<time.h>
#include<conio.h>
#include<stdlib.h>
#include <windows.h>
#include <cmath>
#include<math.h>
#include<ctime>
#include<vector>
#include <chrono>
#include <thread>
using namespace std;
using namespace std::this_thread;
using namespace std::chrono;

void punto(int a[],int b[]){
    int producto=0, punto=0;
    for (int i = 0; i < 2; i++){
        producto=((*(a+i))*((*(b+i))));
        punto+=producto;
    }
    cout<<"el prodcuto punto es de: "<<punto<<endl;
}
int main(){
    int vec1[2],vec2[2];
    
    srand(time(0));
    for (int i = 0; i < 4; i++)
    {       

            int *a,*b;
            a=vec1;
            b=vec2;
            for (int x = 0; x < 2; x++){ 
                *(a+x)=1+rand()%(9-1);
                *(b+x)=1+rand()%(9-1);
            }
            /*for (int y = 0; y < 2; y++){
                cout<<*(vec1+y)<<" ";
            }
            cout<<endl;
            for (int z = 0; z < 2; z++){
                cout<<*(vec2+z)<<" ";
            }
            */
            punto(a, b);
            delete [] a;
            delete [] b;
            a=NULL;
            b=NULL;
            delete a;
            delete b;
            
            

    }
    




        

    return 0;
}