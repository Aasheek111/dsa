#include <iostream>
using namespace std;

void tower(int n, char source, char destination, char aux)
{

    if (n == 1)
    {
        cout << "Move" << n << " from " << source << " to " << destination<<endl;
        return;
    }
    tower(n - 1, source, aux, destination);
    cout << "Move" << n << " from " << source << " to " << destination<<endl;

    tower(n - 1, aux, destination, source);
}

int main()
{
    int n;
    cout << "Enter the number";
    cin >> n;
    tower(n, 'A', 'C', 'B');
    return 0;
}
