#include<iostream>
#include<iostream>
#include< tgmath.h >
using namespace std;



bool narcissistic(int value) {
    //Code away
    bool isNarNum = true;
    int count = 0;
    int secondary = value;
    int totalSum = 0;
    int compareValue = value;
    while (value > 0)
    {
        cout << value % 10;
        value /= 10;
        count++;
    }

    cout << endl;
    cout << "Counter: ";
    cout << count << endl;
 
    while (secondary > 0)
    {
        totalSum = totalSum + pow(secondary % 10, count); 
        secondary /= 10;
        
    }
    cout << endl;
    cout << "narcisistic num: " << totalSum << endl;


    if (totalSum != compareValue)
    {
        isNarNum = false;
    }
    
    
    return isNarNum;
}

int main()
{
    //initialize num
    int num = 0;
    bool tester = false;
    cout << "Enter a value: ";
    cin >> num;

    tester = narcissistic(num);
    
    if (tester == true)
    {
        cout << "We officially have a narcissistic number! " << endl;
    }
    else
    {
        cout << "We do not have a narcissistic number" << endl;
    }

    cout << endl;
    system("PAUSE");
   

    return 0;
}