#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while (t--)
   {
     int num;
    cin >>  num;
   
    int sumLastThree = 0;
    for(int i = 0; i<3; i++){
        sumLastThree += (num % 10);
        num/=10;
    }
    int sumFirstThree = 0;
    for(int i = 0; i<3; i++){
        sumFirstThree += (num % 10);
        num/=10;
    }

    if(sumFirstThree == sumLastThree){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
   }
    return 0;
}