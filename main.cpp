#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int num = 0;
    
    cout << "Enter How many Number:";
    cin >> num;
    
    float i = 1;
    float x = 0;
    float sum = 0;
    float Ave = 0;
    
    while(i <= num){
        cout << "Enter Number:";
        cin >> x;
        
        sum = sum + x;
        i++;
    }
    if (num <= 10000){
        Ave = sum / num;
    }
    cout << "Total sum is:" << sum << endl;
    
    cout << "Total Average is:" << Ave;
}
