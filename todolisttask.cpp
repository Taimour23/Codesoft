//#include<iostream>
//#include<string>
//using namespace std;
//
//struct Task {
//    string taskDescription;
//    bool status;  // true if completed, false if not completed
//};
//
//class List {
//    Task* tasks;
//    int size;
//    int taskNumber;
//
//public:
//    List() {
//        size = 10;
//        tasks = new Task[size];
//        taskNumber = -1;
//    }
//
//    List(int s) {
//        size = s;
//        tasks = new Task[size];
//        taskNumber = -1;
//    }
//
//    void addTask(string taskDescription) {
//        if (taskNumber < size - 1) {
//            taskNumber++;
//            tasks[taskNumber].taskDescription = taskDescription;
//            tasks[taskNumber].status = false; 
//            cout << "Task added successfully.\n";
//        }
//        else {
//            cout << "Task list is full. Cannot add more tasks.\n";
//        }
//    }
//
//    void displayAllTasks() {
//        if (taskNumber >= 0) {
//            cout << "All tasks:\n";
//            for (int i = 0; i <= taskNumber; i++) {
//                cout << "\nTask " << i + 1 << ": " << tasks[i].taskDescription;
//                if (tasks[i].status == true) {
//                    cout << "\tStatus:Completed ";
//                }
//                else {
//                    cout << "\t Status: not Completed ";
//                }
//            }
//            cout << endl;
//        }
//        else {
//            cout << "Task list is empty.\n";
//        }
//    }
//
//    void removeTask() {
//        if (taskNumber >= 0) {
//            cout << "Task " << taskNumber + 1 << " is removed from the list.\n";
//            taskNumber--;
//        }
//        else {
//            cout << "Task list is empty. Nothing to remove.\n";
//        }
//    }
//
//    void completeTask() {
//        if (taskNumber >= 0) {
//            tasks[taskNumber].status = true;  // Mark the task as completed
//            cout << "Task " << tasks[taskNumber].taskDescription << " is completed.\n";
//            taskNumber--;
//        }
//        else {
//            cout << "Task list is empty. Nothing to complete.\n";
//        }
//    }
//};
//
//int main() {
//    int choice, size;
//    cout << "Enter the number of tasks you want to add in the list: ";
//    cin >> size;
//
//    List taskList(size);
//
//    do {
//        cout << "\n------ Menu ------\n";
//        cout << "1. Add Task\n";
//        cout << "2. Display All Tasks\n";
//        cout << "3. Remove Task\n";
//        cout << "4. Complete Task\n";
//        cout << "5. Exit\n";
//        cout << "Enter your choice: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1: {
//            string taskDescription;
//            cout << "Enter the task description: ";
//            cin.ignore(); // Clear the input buffer
//            getline(cin, taskDescription);
//            taskList.addTask(taskDescription);
//            break;
//        }
//        case 2:
//            taskList.displayAllTasks();
//            break;
//        case 3:
//            taskList.removeTask();
//            break;
//        case 4:
//            taskList.completeTask();
//            break;
//        case 5:
//            cout << "Exiting the program.\n";
//            break;
//        default:
//            cout << "Invalid choice. Please enter a valid option.\n";
//        }
//    } while (choice != 5);
//
//    return 0;
//}
