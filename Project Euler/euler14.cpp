/*
The following iterative sequence is defined for the set of positive integers:

n → n/2 (n is even)
n → 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:

13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1

It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

NOTE: Once the chain starts the terms are allowed to go above one million.
*/

#include <iostream>

using namespace std;

int sequenceLength(long long);

int main()
{

//    cout << sequenceLength(999999);

    
    int longestN = 0;
    int longesti;

    for (long i = 999999; i >= 1; i--)
    {
        if (sequenceLength(i) > longestN)
        {
        longestN = sequenceLength(i);
        longesti = i;
        }  
    }
    cout << "The longest chain is for number: " << longesti << ". Number of elements: " << longestN;

    return 0;
}

int sequenceLength(long long actual)
{
    int length = 0;

    while (actual != 1)
    {
        if (actual % 2 == 0) actual = actual / 2;
        else actual = 3 * actual + 1;
        length++;
    }

    return length + 1;
}