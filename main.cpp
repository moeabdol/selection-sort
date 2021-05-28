#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> * numbers) {
    if (numbers->size() == 0 || numbers->size() == 1)
        return;

    for (int i = 0; i < numbers->size() - 1; i++) {
        int smallest = i;

        for (int j = i + 1; j < numbers->size(); j++)
            if (numbers->at(j) < numbers->at(smallest)) {
                smallest = j;
            }

        swap(numbers->at(i), numbers->at(smallest));
    }
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
