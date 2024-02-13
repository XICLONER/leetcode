#include <iostream>

using namespace std;

int main()
{
    int input;
    int target;

    cout << "how many numbers do you want to enter?\n";
    cin >> input;

    int numbers[input];

    cout << "what is your target?\n";
    cin >> target;

    cout << "enter your numbers\n";

    for (int i = 0; i < input; i++)
    {
        cin >> numbers[i];
    }

    cout << "\n";

    int solution[2];

    for (int i = 0; i < input; i++)
    {
        for (int j = i + 1; j < input; j++)
        {
            if (numbers[i] + numbers[j] == target)
            {
                solution[0] = i;
                solution[1] = j;

                cout << solution[0] << " - " << solution[1] << "\n";

                return 0;
            }
        }
    }
}