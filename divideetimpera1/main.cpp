#include <iostream>

using namespace std;

int maximum(int balindex, int jobbindex,int tomb[]){
    if (balindex== jobbindex){
        return tomb[jobbindex];
    }
    int kozep=(balindex+jobbindex)/2;
    int max1=maximum(balindex, kozep, tomb);
    int max2=maximum(kozep+1, jobbindex, tomb);
    if (max1 > max2){
        return max1;

    }else{
        return max2;
    }
}


int main()
{
    int tomb[5]={1,3,1,2,7};
    cout << maximum(0,4,tomb) << endl;
    return 0;
}
