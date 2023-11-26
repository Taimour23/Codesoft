//#include<iostream>
//using namespace std;
//
//const string id = "f223874", code = "cfd@3874";
//
//class library {
//    string loginid, password;
//    int numofbooksinlibrarayyoucanadd, numofbooksinlibraray;
//
//    struct books {
//        string title, author;
//        int ISBN;
//        bool availabilitystatus;
//    }*b1;
//
//public:
//    library() {
//        numofbooksinlibrarayyoucanadd = 10;
//        numofbooksinlibraray = 0;
//        loginid = password = "";
//        b1 = new books[numofbooksinlibrarayyoucanadd];
//    }
//
//    void addbooks() {
//        int s;
//        cout << "Enter the number of books you want to add: ";
//        cin >> s;
//        numofbooksinlibrarayyoucanadd = s;
//        b1 = new books[numofbooksinlibrarayyoucanadd];
//        for (int i = numofbooksinlibraray; i < s; i++) {
//            string title, author;
//            int ISBN;
//            cout << "Enter book title: ";
//            cin >> title;
//            cout << "Enter book author: ";
//            cin >> author;
//            cout << "Enter ISBN of the book: ";
//            cin >> ISBN;
//            b1[i].author = author;
//            b1[i].title = title;
//            b1[i].ISBN = ISBN;
//            b1[i].availabilitystatus = true;
//            numofbooksinlibraray++;
//        }
//    }
//
//    bool booksearch(string tit, string aut, int ISBN) {
//        for (int i = 0; i < numofbooksinlibraray; i++) {
//            if (b1[i].title == tit && b1[i].author == aut && b1[i].ISBN == ISBN) {
//                cout << "Book found.\n";
//                return true;
//            }
//        }
//        cout << "Book not found.\n";
//        return false;
//    }
//
//    bool bookscheckout(string tit, string aut, int ISBN) {
//        for (int i = 0; i < numofbooksinlibraray; i++) {
//            if (b1[i].title == tit && b1[i].author == aut && b1[i].ISBN == ISBN) {
//                if (b1[i].availabilitystatus) {
//                    cout << "Book found. Checking out...\n";
//                    b1[i].availabilitystatus = false;
//                    return true;
//                }
//                else {
//                    cout << "Book is already checked out.\n";
//                    return false;
//                }
//            }
//        }
//        cout << "Book not found.\n";
//        return false;
//    }
//
//    bool booksreturn(string tit, string aut, int ISBN) {
//        for (int i = 0; i < numofbooksinlibraray; i++) {
//            if (b1[i].title == tit && b1[i].author == aut && b1[i].ISBN == ISBN) {
//                if (!b1[i].availabilitystatus) {
//                    cout << "Book found. Returning...\n";
//                    b1[i].availabilitystatus = true;
//                    return true;
//                }
//                else {
//                    cout << "Book is already available in the library.\n";
//                    return false;
//                }
//            }
//        }
//        cout << "Book not found.\n";
//        return false;
//    }
//
//    int finecalculation(int dayslate) {
//        return dayslate * 25;
//    }
//};
//
//int main() {
//    library myLibrary;
//    string userid, password;
//    cout << "Welcome to the Library Management System!\n";
//
//    int choice;
//    do {
//        cout << "\nMenu:\n";
//        cout << "1. Add Books\n";
//        cout << "2. Search Book\n";
//        cout << "3. Check Out Book\n";
//        cout << "4. Return Book\n";
//        cout << "5. Calculate Fine\n";
//        cout << "0. Exit\n";
//        cout << "Enter your choice: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            for (int i = 0; i < 1; i++) {
//                cout << "Enter login_id: ";
//                cin >> userid;
//                cout << "Enter password: ";
//                cin >> password;
//                if (password == code && userid==id) {
//                    myLibrary.addbooks();
//                }
//                else {
//                    cout << "you have entered wrong id or password";
//                    i--;
//                }
//            }
//            break;
//        case 2: {
//            string title, author;
//            int ISBN;
//            cout << "Enter book title: ";
//            cin >> title;
//            cout << "Enter book author: ";
//            cin >> author;
//            cout << "Enter ISBN of the book: ";
//            cin >> ISBN;
//            myLibrary.booksearch(title, author, ISBN);
//            break;
//        }
//        case 3: {
//            string title, author;
//            int ISBN;
//            cout << "Enter book title: ";
//            cin >> title;
//            cout << "Enter book author: ";
//            cin >> author;
//            cout << "Enter ISBN of the book: ";
//            cin >> ISBN;
//            myLibrary.bookscheckout(title, author, ISBN);
//            break;
//        }
//        case 4: {
//            string title, author;
//            int ISBN;
//            cout << "Enter book title: ";
//            cin >> title;
//            cout << "Enter book author: ";
//            cin >> author;
//            cout << "Enter ISBN of the book: ";
//            cin >> ISBN;
//            myLibrary.booksreturn(title, author, ISBN);
//            break;
//        }
//        case 5: {
//            int daysLate;
//            cout << "Enter the number of days late: ";
//            cin >> daysLate;
//            cout << "Fine amount: $" << myLibrary.finecalculation(daysLate) << endl;
//            break;
//        }
//        case 0:
//            cout << "Exiting\n";
//            break;
//        default:
//            cout << "Invalid choice. Please try again.\n";
//        }
//
//    } while (choice != 0);
//
//    return 0;
//}