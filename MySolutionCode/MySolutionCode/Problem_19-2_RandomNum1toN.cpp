#include <iostream>   
#include <string>   
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function.

using namespace std;  



int RandomNumber(int From, int To)
{
    // Generate a random number between 0 and (To - From) using rand(),
    // then add From to shift the range to [From, To].
    int randNum = rand() % (To - From + 1) + From; // 20-10+1 11+10 21
    return randNum; 
}

int main() {
    
    // This ensures that we get a different sequence of random numbers on each run.
    srand((unsigned)time(NULL));

   
    cout << RandomNumber(10, 20) << endl;
    cout << RandomNumber(10, 20) << endl;
    cout << RandomNumber(10, 20) << endl;

    return 0;  
}