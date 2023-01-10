#include<iostream>
using namespace std;

long int gcd(long int,long int);

int main(){
    int x, y;
    cin >> x >> y;
    cout << gcd(x,y);
    return 0; 
}

long int gcd(long int x, long int y){
    int z;
    if(x%y == 0){
        z = y;
    }else{
        z = gcd(y, x%y);
    }
    return z;
}
