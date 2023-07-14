#include <iostream>
#include <vector>

using namespace std;

int main() {
    int money; 
    vector<int> result;
    result.push_back(0);

    cin >> money;

    for (int i = 1; i < money + 1; i++) 
    {
        if (i >= 100) 
        {
            int firstCondition = result[i - 100] + 1;
            int secondCondition = result[i - 20] + 1;
            int thirdCondition = result[i - 10] + 1;
            int fourthCondition = result[i - 5] + 1;
            int fifthCondition = result[i - 1] + 1;

            result.push_back(min(firstCondition, min(secondCondition, min(thirdCondition, min(fourthCondition, fifthCondition))))); 
        }

        else if (i >= 20) 
        {
            int secondCondition = result[i - 20] + 1;
            int thirdCondition = result[i - 10] + 1;
            int fourthCondition = result[i - 5] + 1;
            int fifthCondition = result[i - 1] + 1;

            result.push_back(min(secondCondition, min(thirdCondition, min(fourthCondition, fifthCondition))));
        }

        else if (i >= 10) 
        {
            int thirdCondition = result[i - 10] + 1;
            int fourthCondition = result[i - 5] + 1;
            int fifthCondition = result[i - 1] + 1;

            result.push_back(min(thirdCondition, min(fourthCondition, fifthCondition)));
        }  
        else if (i >= 5) 
        {
            int fourthCondition = result[i - 5] + 1;
            int fifthCondition = result[i - 1] + 1;

            result.push_back(min(fourthCondition, fifthCondition));
        } 

        else if (i >= 1) 
        {
            result.push_back(result[i - 1] + 1);
        }  
    }

    cout << result[money];

}