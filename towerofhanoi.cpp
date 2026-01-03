#include <iostream>
using namespace std;

void tower(int index, char source, char destination, char aux)
{

    if (index == 1)
    {
        cout << "Move 1 from " << source << " TO " << destination << endl;
        return;
    }

    tower(index - 1, source, aux, destination);
    cout << "Move " << index << " From " << source << " TO " << destination << endl;
    tower(index - 1, aux, destination, source);
}

int main()
{
    tower(3, 'A', 'C', 'B');
    return 0;
}