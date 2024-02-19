#include <iostream>
#include <vector>

using namespace std;

int main() {
    // create a nested list of integers
    vector<vector<int>> nested_list = {
        {1, 2, 3},
        {4, 5},
        {6, 7, 8, 9}
    };

    // access and print the elements of the nested list
    for (auto inner_list : nested_list) {
        for (auto element : inner_list) {
            cout << element << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // create an empty nested list of integers
    vector<vector<int>> nested_list;

    // prompt the user to enter values for the nested list
    int num_inner_lists;
    cout << "Enter the number of inner lists: ";
    cin >> num_inner_lists;

    for (int i = 0; i < num_inner_lists; i++) {
        int num_elements;
        cout << "Enter the number of elements for inner list " << i << ": ";
        cin >> num_elements;

        vector<int> inner_list;
        for (int j = 0; j < num_elements; j++) {
            int element;
            cout << "Enter element " << j << " for inner list " << i << ": ";
            cin >> element;
            inner_list.push_back(element);
        }

        nested_list.push_back(inner_list);
    }

    // access and print the elements of the nested list
    for (auto inner_list : nested_list) {
        for (auto element : inner_list) {
            cout << element << " ";
        }
        cout << endl;
    }

    return 0;
}

*/