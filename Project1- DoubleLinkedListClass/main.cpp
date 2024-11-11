#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;

int main()
{
    clsDblLinkedList <int> MydblLinkedList;

    MydblLinkedList.InsertAtBeginning(5);
    MydblLinkedList.InsertAtBeginning(4);
    MydblLinkedList.InsertAtBeginning(3);
    MydblLinkedList.InsertAtBeginning(2);
    MydblLinkedList.InsertAtBeginning(1);

    cout << "Linked List Content:\n";
    MydblLinkedList.PrintList();

    cout << "\nNumber of items in the linked list = " << MydblLinkedList.Size();
    cout << endl;

    MydblLinkedList.UpdateItem(2, 87);

    cout << "\nAfter Updating Item(2): " << "\n";
    MydblLinkedList.PrintList();

    clsDblLinkedList <int> ::Node* N;

    N = MydblLinkedList.GetNode(2);

    cout << "\nNode Value is: " << N->value << endl;

    cout << "\nItem(2) Value is: " << MydblLinkedList.GetItem(2);

    MydblLinkedList.Reverse();

    cout << "\n\nLinked List Contenet after reverse:\n";
    MydblLinkedList.PrintList();


    clsDblLinkedList<int>::Node* N1 = MydblLinkedList.Find(2);
    
    if (N1 != NULL)
        cout << "\nNode with value 2 is Found :-)\n";
    else
        cout << "\nNode Is not found :-(\n";

    MydblLinkedList.InsertAfter(N1, 500);
    cout << "\nAfter Inserting 500 after 2:\n";
    MydblLinkedList.PrintList();

    MydblLinkedList.InsertAfter(4, 500);

    cout << "\nAfter Insert:\n";
    MydblLinkedList.PrintList();

    MydblLinkedList.InsertAtEnd(700);
    cout << "\nAfter Inserting 700 at end:\n";
    MydblLinkedList.PrintList();

    clsDblLinkedList<int>::Node* N2 = MydblLinkedList.Find(4);
    MydblLinkedList.DeleteNode(N2);
    cout << "\nAfter Deleting 4:\n";
    MydblLinkedList.PrintList();

    MydblLinkedList.DeleteFirstNode();
    cout << "\nAfter Deleting First Node:\n";
    MydblLinkedList.PrintList();

    cout << "\nAfter Deleting Last Node:\n";
    MydblLinkedList.DeleteLastNode();
    MydblLinkedList.PrintList();

    cout << "\nNumber of items in the linked list = " << MydblLinkedList.Size();

    if (MydblLinkedList.IsEmpty())
        cout << "\n\nYes List is Empty.\n";
    else
        cout << "\n\nNo List is not Empty.\n";

    cout << "\nExecuting .Clear()";
    MydblLinkedList.Clear();
    cout << "\nNumber of items in the linked list = " << MydblLinkedList.Size();

   

    system("pause>0");

    return 0;
}
