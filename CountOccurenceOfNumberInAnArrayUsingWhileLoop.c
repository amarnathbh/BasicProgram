// Example program
#include <iostream>


using namespace std;

int main(){
    
    char x[5],b;
    int i=0,count=0,j;
    cout<< "enter the data in to array";
    while (i!=5)
    {
        cin>>x[i];
        i++;
    }
    cout<< "enter the number which you want to count";
    cin>> b;
    
    i=0;
    
    while(i!=5) //compare for 5 times
    {
        if (x[i]==b) // check each and every array 
            { 
                count= count + 1;
            }i++;
    }
cout<< count;
    cin.get();
}
