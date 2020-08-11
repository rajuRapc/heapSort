#include <iostream> 
#include <vector>

using namespace std;

void heapify(vector<int>& arr, int n, int i);
void heapSort(vector<int>& arr, int n);
void printArray(vector<int> arr, int n);

// Driver program 
int main()
{

    int numberOfElements, temp;
    vector<int> arr;

    cout << "The program first input number of elements from keyboard." << endl;
    cout << "Then uses a for loop to collect the integers and save it to an integer vector." << endl;
    cout << "Make a call to heapSort funtion, then the printarray funtion to print the sorted array." << endl;
    cout << "Enter 0 to exit any other none intger number to continue the program." << endl;

    do {
        cout << "############################################################" << endl;
        cout << "enter the number of elements to be sorted: " << endl;
        cin >> numberOfElements;

        cout << "enter the elements to be sorted sperated by a space: " << endl;

        for (int i = 0; i < numberOfElements; i++) {
            cin >> temp;
            arr.push_back(temp);
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        heapSort(arr, numberOfElements);
        cout << "Sorted array is \n";
        printArray(arr, numberOfElements);
        arr.clear();
        cout << "Enter 0 to exit any other whole number to continue" << endl;
        cin >> temp;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
      
    } while (temp);

    return 0;
}

//sort the max heap array
void heapSort(vector<int>& arr, int numberOfElements)
{
    // Build max heap, for loop steps through the array starting from the last parents node 
    for (int i = numberOfElements / 2 - 1; i >= 0; i--)
        heapify(arr, numberOfElements, i);



    // swap first and last element correct the afected node 
    for (int i = numberOfElements - 1; i > 0; i--)
    {
        //swap root and last child 
        swap(arr[0], arr[i]);

        // correct the three from the root node 
        heapify(arr, i, 0);
    }


}

// Heapify the array 
void heapify(vector<int>& arr, int numberOfElements, int i)
{
    int largest = i; // set the largest to equal to root node 
    int leftChild = 2 * i + 1; // left child
    int rightChild = 2 * i + 2; // right child

    // compare left childwith root 
    if (leftChild < numberOfElements && arr[leftChild] > arr[largest])
        largest = leftChild;

    //compare right child with the larges out of teh root and left child
    if (rightChild < numberOfElements && arr[rightChild] > arr[largest])
        largest = rightChild;


    // set root to the largest if root is not the largest 
    if (largest != i)
    {
        swap(arr[i], arr[largest]);

        //recursive heapify call 
        heapify(arr, numberOfElements, largest);
    }



}



// print the vector array 
void printArray(vector<int> arr, int numberOfElements)
{
    //Steps through the array from front to back 
    for (int i = 0; i < numberOfElements; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}