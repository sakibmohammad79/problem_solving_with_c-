#include<bits/stdc++.h>
using namespace std;

int main(){
    char word[1000001];
    cin >> word;
    int freq[5] = {0};
    for(int i = 0; word[i] != '\0'; i++){
        char lowerChar =  tolower(word[i]);
       if(lowerChar == 'e'){
            freq[0]++;
       }
       else if(lowerChar == 'g'){
            freq[1]++;
       }
       else if(lowerChar == 'y'){
            freq[2]++;
       }
       else if(lowerChar == 'p'){
            freq[3]++;
       }
       else if(lowerChar == 't'){
            freq[4]++;
       }
    }
    int low = freq[0];
    for(int i = 0; i<5; i++){
        if(low > freq[i]){
            low = freq[i];
        }
    }

    cout << low;
    return 0;
}