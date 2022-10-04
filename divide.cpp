#include <iostream>

using namespace std;

int main(void)
{
    int n;
    int i = 1;
    
    cout << "정수를 입력하시오: ";
    cin >> n;

    cout << "N=" << n << "출력:";
    while (n * i <= 100)
    {
        cout << n * i << " ";
        i++;
    }

    return 0;
}
