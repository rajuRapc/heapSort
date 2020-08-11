# heapSort
implements the heapSort functions 
The code takes N integers into a an integer array 
	1 <= numberOfElements <= 4,294,967,295
	-2,147,483,648 <= arr[i] <= 2,147,483,647

The Driver program then calls the heapSort funtion: void heapSort(vector<int>& arr, int n);
heapsort funtion first uses a forloop to call Heapfiy on each parent node
Then uses a  forloop to swap the fris tand last node in the array and call heapify on the affectnode 

heapify : void heapify(vector<int>& arr, int n, int i);
This program frist compares the parent to its children 
If parent not the largest swap with the lrgest then hall Hepify on the affected child node 

Once heap is being sorted the driver program then calls the print array funtion: void printArray(vector<int> arr, int n);

Clears the vector after printing

The ask for zero or a none zero iteger value
0 to exit any other to continue looping the above algoirthm 


How to run the code 

downlaod the heapSort.cpp file

using visualstudio:

To create a C++ project in Visual Studio 2019
From the main menu, choose File > New > Project to open the Create a New Project dialog box.

At the top of the dialog, set Language to C++, set Platform to Windows, and set Project type to Console.

From the filtered list of project types, choose Console App then choose Next. In the next page, enter a name for the project, and specify the project location if desired.

Choose the Create button to create the project.

Add a new source file
If Solution Explorer isn't displayed, on the View menu, click Solution Explorer.

Add a new source file to the project, as follows.

In Solution Explorer, right-click the Source Files folder, point to Add, and then click New Item.

In the Code node, click C++ File (.cpp), type a name for the file, and then click Add.

The .cpp file appears in the Source Files folder in Solution Explorer, and the file is opened in the Visual Studio editor.

copy the code from the heapSort.cpp file into the editor

Save the file.

On the Build menu, click Build Solution.

The Output window displays information about the compilation progress, for example, the location of the build log and a message that indicates the build status.

On the Debug menu, click Start without Debugging.

a command window is displayed follwo the instructions in the window 


running the heapSOrt.cpp file using g++ compiler 

open the terminal 
chnage the director to the folder you have the heapSot.cpp file stored 
type the command g++ -o main.exe heapSort.cpp
the ntype the command ./main.exe
follow the instructions in the terminal to run the program 


