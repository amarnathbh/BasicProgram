#include<iostream>
#include<math.h>
#include<cstring>
using namespace std;

int palindrome(int i,int digit,int rev,int n)
{
    do
        {   n = i;
             digit = i%10;
            rev = (rev*10) + digit;
             i = i/10;
            }while (n==rev);
return n;
}
int square(int i)
{ 
    if(sqrt(i)!=i)
    {
    i++;
    }
    else
    {
    return i;
    }
}

int numberOfDigits(double n){
    if(n < 0){
        n*=-1;
    }
    int i=0;
        while(n > pow(10, i))
            i++;    
    cout << "This number has " << i << " digits" << endl;
    n++;
    return n;
}

int main()
{
    int i=0,n=0,rev,digit,size;
    do{
        numberOfDigits(n);
        square( n);
        palindrome( i,digit,rev, n);
        
    }while(n==15);
    cout<<"the 15digit palindrome perfect quare is"<<n<<endl;
    
    
        
   

cin.get();
    
}
