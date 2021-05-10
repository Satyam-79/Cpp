#include <iostream>
using namespace std;
int main()
{
    int num;
    int positives = 0, negatives = 0;
    int positives_sum = 0, negatives_sum = 0;
    float positives_mean = 0.0, negatives_mean = 0.0;
    cout << "\nEnter -1 to exit." << endl;
    cout << "\nEnter any number : ";
    cin >> num;
    do
    {
        if (num > 0)
        {
            positives_sum += num;
            positives++;
        }
        else if (num < 0)
        {
            negatives_sum += num;
            negatives++;
        }
        cout << "\n\nEnter any number : ";
        cin >> num;

    } while (num != -1);
    positives_mean = (float)positives_sum / positives;
    negatives_mean = (float)negatives_sum / negatives;
    cout << "\nSum of all positives entered : " << positives_sum;
    cout << "\nSum of all negatives entered : " << negatives_sum;
    cout << "\nMean of all positives entered : " << positives_mean;
    cout << "\nMean of all negatives entered : " << negatives_mean;

    return 0;
}