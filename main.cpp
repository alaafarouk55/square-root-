#include <iostream>

using namespace std;

int main()
{

float number ;
float sqr =1 ;
cout <<"enter the number " ;
cin >> number ;
if (number < 0 ) {
    cout <<"sorry , this in number is negative " << endl ;

}
else if (number == 0){
    cout << "the square root is 0 " << endl ;

}
else
for (int i=0 ; i < 10 ; i++ )
sqr = 0.5*(sqr + number / sqr) ;
cout << sqr ;
}

