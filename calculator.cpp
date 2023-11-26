//#include<iostream>
//using namespace std;
//int main() {
//	int num1, num2;
//	for (int i = 0; i < 1; i++) {
//		cout << "enter num1: ";
//		cin >> num1;
//		if (num1 < 1) {
//			i--;
//		}
//		else {
//			for (int j = 0; j < 1; j++) {
//				cout << "enter num2: ";
//				cin >> num2;
//				if (num2 < 1) {
//					j--;
//				}
//			}
//		}
//	}
//	int choice=1;
//	while (choice != 0) {
//		cout << "\n1.Add 2 numbers";
//		cout << "\n2.Subtract 2 numbers";
//		cout << "\n3.Divide 2 numbers";
//		cout << "\n4.Multiply 2 numbers\n";
//		cin >> choice;
//		if (choice == 1) {
//			cout << "\nresult= " << num1 + num2 << endl;
//		}
//		else if (choice == 2) {
//			cout << "\nresult= " << num1 - num2 << endl;
//		}
//		else if (choice == 3) {
//			int num = num1 / num2;
//			if(num>0){
//				cout << "\nresult= " << num << endl;
//			}
//			else {
//				cout << "\nresult= " << num1 << "/" << num2 << endl;
//			}
//		}
//		else if (choice == 4) {
//			cout << "\nresult= " << num1 * num2 << endl;
//		}
//		else {
//			cout << "\nexiting the program ";
//			exit(1);
//		}
//	}
//}