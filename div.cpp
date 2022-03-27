#include <iostream>

using namespace std;


string is_divisible(int number)
{
    int sum = 0;
    int real_number = number;

    while(number > 0) {
        int temp = number % 10;
        sum += temp;
        number = number / 10;
    }

    if (real_number % sum == 0){
        return "True";
    }

    return "False";
}

int main()
{
    int number = 75;
    string status = is_divisible(number);

    cout << status << endl;;

    return 0;
}