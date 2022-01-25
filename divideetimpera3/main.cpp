#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;

int main()
{
    int  tomb[10], min;
    for (int i=0; i<10; i++){
        srand(time(NULL));
        tomb[i]=rand()%1000000;


    }

    min=999999999;
    for (int i=0; i<10; i++){
        if(tomb[i]<min){
            min=tomb[i];
        }
    }
    cout << min << endl;
    return 0;
}
