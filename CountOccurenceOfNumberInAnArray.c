
#include <iostream>


using namespace std;

int main(){
    
    int x[5],i,count=0,b,j;
    cout<< "enter the data in to array";
    for (i=0;i<5;i++)
    {
        cin>>x[i];
    }
    cout<< "enter the number which you want to count";
    cin>> b;
    
    for (i=0;i<5;i++) //compare for 5 times
    {
        if (x[i]==b) // check each and every array 
            { 
                count= count + 1;
            }
    }
cout<< count;
    return 0;
}
