#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> * numbers) {
    if (numbers->size() == 0 || numbers->size() == 1)
        return;

    for (int i = 0; i < numbers->size() - 2; i++)
        for (int j = i + 1; j < numbers->size() - 1; j++)
            if (numbers->at(j) < numbers->at(i))
                swap(numbers->at(j), numbers->at(i));
}

int main() {
    vector<int> *numbers = new vector<int>(0);

    numbers->push_back(3);
    numbers->push_back(2);
    numbers->push_back(5);
    numbers->push_back(1);
    numbers->push_back(4);

    selectionSort(numbers);

    for (int i = 0; i < numbers->size(); i++)
        cout << numbers->at(i) << " ";
    cout << endl;

    return 0;
}
