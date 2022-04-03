//Reads in 5 scores and shows how much each
//score differs from the highest score.
#include <iostream>

int main()
{
    using namespace std;
    int i, score[5], max;

    cout << "Enter 5 scores:\n";
    cin >> score[0];
    max=score[0];
    for(i=1; i<5; i++)
    {
        cin >> score[i];
        if(score[i] > max)
            max=score[i];
            // max is the largest for current elements in score[]
    }
    cout << "The highest score is " << max << endl
        << "The scores and their\n"
        << "differences form the highest are:\n";
    for (i=0;i<5;i++)
    {
        cout << score[i] << " off by " << (max-score[i]) << endl;

    }

    /*We can use 
    for (datatype varname: array)
    {
        // varname is successively set to each element
    }
    */
   // for example:
   int arr[]={2,4,6,8};
   for (int x: arr) // for c++11
        cout << x;
    cout << endl;
    for (int&x : arr)
        x++;
    for (auto x:arr)
        cout << x;
    cout << endl;
    return 0;
}