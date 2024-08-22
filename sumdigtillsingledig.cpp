// WAP to keep calculate the sum of the digits of a number until the number is a single digit.
#include <iostream>
using namespace std ;
int main(){
    int num,digsum; 
    cout<< "Enter a number : ";
    cin >> num;
    digsum=num%9;
    cout<<digsum;
}
    /*do{ digsum=0;
    while(num){
        digsum=num%10+digsum;
        num=num/10;
    }
    num=digsum;
    }
    while(digsum/10!=0);
    cout<<digsum;
}*/

