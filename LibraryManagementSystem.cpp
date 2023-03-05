#include <iostream>
using namespace std;

int main()
{

    char g, ir, pro, proc;                            // character variable with data size 1.
    int age, bookReturn, i, stuNumber = 0, count = 0; // intger variable with data size 2 and 4.
    // original quantities of the book.
    const int quantity_Book_A = 15, quantity_Book_B = 12, quantity_Book_C = 14, quantity_Book_D = 8, quantity_Book_E = 7, quantity_Book_F = 5;

    // Below is the Details of each Books Library Has in its shelve. We are storing it in array of size 255;

    int IBAN[6] = {12345, 54321, 23451, 45123, 12453, 54123};    // iban no
    int edition[6] = {3, 2, 1, 4, 5, 8};                         // edition
    int price[6] = {1000, 2000, 1500, 1800, 3600, 2500};         // price
    int released_year[6] = {2002, 2007, 2009, 2013, 2015, 2018}; // year
    int noofbooks[6] = {15, 12, 14, 8, 7, 5};                    // quantity

    int number[255];
    int stu_age[255];
    int rollno[255];
    int gender[255];
    int book_issues_len = 0; // length of the issued book.

    cout << endl
         << endl                                                               // welcome message to the user starting the program
         << "=======================================================" << endl; // beginning of User Interface program
    cout << "        WELCOME TO OUR LIBRARY MANAGEMENT SYSTEM        " << endl;
    cout << "=======================================================" << endl
         << endl
         << endl
         << endl;

    long double rollNumber;

    while (true)
    {
        cout << "Enter your Roll Number: (use digits only): "; // Asking input of ID Number from student / teacher
        cin >> rollNumber;                                     // receiving input

        if (rollNumber > 0 && rollNumber != 0)
        {
            cout << "\n\nEnter your Gender. Press 'm' for 'male' and 'f' for 'female' : " << endl
                 << endl;
            cin >> g;
            cin.ignore(10000, '\n'); // cin.ignore and cin.get studied in chp 3 Input/Output by DS Malik Eigth Edition. This cin.ignore() gets the first character of the input and ignores the next 10,000 additional characters.

            if (g == 'm' || g == 'f' || g == 'F' || g == 'M') // 'm' for male, and 'f' for female.
            {
                long int age;
                cout << "Enter your age: "; // taking input
                cin >> age;
                cin.ignore(8, '\n');
                if (age > 0 && age <= 120)
                {

                    while (true)
                    {
                        cout << endl
                             << endl
                             << "Press 'i' if you want the Library to issue you a book" << endl; // option for issuance of the book
                        cout << "Press 'r' if you want to return a book" << endl;                // option for the return of the book
                        cout << "Press 'q' to quit the Library" << endl                          // option to exit the program
                             << endl;
                        cin >> ir;
                        cin.ignore(10000, '\n'); // cin.ignore and cin.get studied in chp 3 Input/Output by DS Malik Eigth Edition. This cin.ignore() gets the first character of the input and ignores the next 10,000 additional characters.

                        if (ir == 'i')
                        {
                            char choice = ' ';
                            char bo = ' ';
                            int input = 0;

                            while (true) // second while loop under a loop, it is called Nested Loop.
                            {
                                cout << "\n***** In the library of Books, how you want to Select the Book? *****\n\n"; // options to choose the way to select the book or exit.
                                cout << "Press '1' to Select Book by Name\n";
                                cout << "Press '2' to Select by IBAN number\n";
                                cout << "Press '0' to Exit to Library Lobby for Issue or Return\n\n";

                                cin >> choice;
                                cin.ignore(10000, '\n'); // cin.ignore and cin.get studied in chp 3 Input/Output by DS Malik Eigth Edition. This cin.ignore() gets the first character of the input and ignores the next 10,000 additional characters.

                                if (choice == '1')
                                { // details of the books, by book name, IBAN NUMBER and Author.
                                    cout << "Enter 'a' to select 'Seerat-un-Nabi' with IBAN number " << IBAN[0] << " by Shibli Nomani \n";
                                    cout << "Enter 'b' to select 'Atomic Habits' with IBAN number " << IBAN[1] << " by James Clear \n";
                                    cout << "Enter 'c' to select 'The Power of Positive Thinking ' with IBAN number " << IBAN[2] << " by Norman Vincent Peale \n";
                                    cout << "Enter 'd' to select 'Rich Dad Poor Dad' with IBAN number " << IBAN[3] << " by Robert Kiyosaki \n";
                                    cout << "Enter 'e' to select 'The Magic of Thinking Big' with IBAN number " << IBAN[4] << " by David J. Schwartz \n";
                                    cout << "Enter 'f' to select 'The One Thing' with IBAN number " << IBAN[5] << " Gary W. Keller \n";

                                    cin >> bo;
                                    cin.ignore(10000, '\n'); // cin.ignore and cin.get studied in chp 3 Input/Output by DS Malik Eigth Edition. This cin.ignore() gets the first character of the input and ignores the next 10,000 additional characters.

                                    if ((bo >= 'a' && bo <= 'f') || (bo >= 'A' && bo <= 'F')) // choosing the response to user's input
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout << "***** Please Enter the Correct Option. Thanks for your Patience. *****";
                                    }
                                }
                                else if (choice == '2') // second option if user want to select by IBAN Number.
                                {
                                    cout << "Enter IBAN Number '" << IBAN[0] << "' to select book 'a'   'Seerat-un-Nabi'  by  'Shibli Nomani' \n";
                                    cout << "Enter IBAN Number '" << IBAN[1] << "' to select book 'b'   'Atomic Habits'  by  'James Clear'\n";
                                    cout << "Enter IBAN Number '" << IBAN[2] << "' to select book 'c'   'The Power of Positive Thinking'  by  'Norman Vincent Peale' \n";
                                    cout << "Enter IBAN Number '" << IBAN[3] << "' to select book 'd'   'Rich Dad Poor Dad'  by  'Robert Kiyosaki'\n";
                                    cout << "Enter IBAN Number '" << IBAN[4] << "' to select book 'e'   'The Magic of Thinking Big'  by  'David J. Schwartz' \n";
                                    cout << "Enter IBAN Number '" << IBAN[5] << "' to select book 'f'   'The One Thing'  by  'Gary W. Keller' \n";

                                    cin >> input;

                                    if ((input == IBAN[0] || input == IBAN[1] || input == IBAN[2] || input == IBAN[3] || input == IBAN[4] || input == IBAN[5]))
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout << "***** Please Enter the Correct Option. Thanks for your Patience. *****";
                                    }
                                }
                                else if (choice == '0') // fulfill of exit option
                                {                       // lobby message to the user to  Select the Option to Issue, Return or Quit.
                                    cout << "\n=====================================================================================\n";
                                    cout << "You are in the Lobby of Library. You May Select the Option to Issue, Return or Quit.\n";
                                    cout << "=====================================================================================\n";
                                }

                                else
                                {
                                    cout << "***** Please Enter the Correct Option. Thanks for your Patience. *****";
                                }
                            }

                            long int book;

                            cout << "\nHow many books do you want? (Numbers only) \n"; // user choosing the quantity option, how many he wants to issue it to him

                            cin >> book;

                            if (book > 0)
                            {
                                if (bo == 'a' || bo == 'A' || input == IBAN[0])
                                {
                                    if (book >= noofbooks[0])
                                    {
                                        int temporary = noofbooks[0] - book; // user restricted to issue books above limit
                                        book = book + temporary - 1;

                                        cout << "***** Sorry! We cannot issue all the quantities of this book, and we have to keep at least 1 book in Library\n *****";
                                        cout << "You can issue at max " << book << " books." << endl; // user restricted to issue books above limit
                                    }
                                    else
                                    {
                                        noofbooks[0] = noofbooks[0] - book;
                                    }
                                }
                                else if (bo == 'b' || bo == 'B' || input == IBAN[1])
                                {
                                    if (book >= noofbooks[1])
                                    {
                                        int temporary = noofbooks[1] - book; // user restricted to issue books above limit
                                        book = book + temporary - 1;

                                        cout << "***** Sorry! We cannot issue all the quantities of this book, and we have to keep at least 1 book in Library\n *****";
                                        cout << "You can issue at max " << book << " books." << endl; // user restricted to issue books above limit
                                    }
                                    else
                                    {
                                        noofbooks[1] = noofbooks[1] - book;
                                    }
                                }
                                else if (bo == 'c' || bo == 'C' || input == IBAN[2])
                                {
                                    if (book >= noofbooks[2])
                                    {
                                        int temporary = noofbooks[2] - book; // user restricted to issue books above limit
                                        book = book + temporary - 1;

                                        cout << "***** Sorry! We cannot issue all the quantities of this book, and we have to keep at least 1 book in Library\n *****";
                                        cout << "You can issue at max " << book << " books." << endl; // user restricted to issue books above limit
                                    }
                                    else
                                    {
                                        noofbooks[2] = noofbooks[2] - book;
                                    }
                                }
                                else if (bo == 'd' || bo == 'D' || input == IBAN[3])
                                {
                                    if (book >= noofbooks[3])
                                    {
                                        int temporary = noofbooks[3] - book;
                                        book = book + temporary - 1; // user restricted to issue books above limit

                                        cout << "***** Sorry! We cannot issue all the quantities of this book, and we have to keep at least 1 book in Library\n *****";
                                        cout << "You can issue at max " << book << " books." << endl; // user restricted to issue books above limit
                                    }
                                    else
                                    {
                                        noofbooks[3] = noofbooks[3] - book;
                                    }
                                }
                                else if (bo == 'e' || bo == 'E' || input == IBAN[4])
                                {
                                    if (book >= noofbooks[4])
                                    {
                                        int temporary = noofbooks[4] - book;
                                        book = book + temporary - 1; // user restricted to issue books above limit

                                        cout << "***** Sorry! We cannot issue all the quantities of this book, and we have to keep at least 1 book in Library\n *****";
                                        cout << "You can issue at max " << book << " books." << endl; // user restricted to issue books above limit
                                    }
                                    else
                                    {
                                        noofbooks[4] = noofbooks[4] - book;
                                    }
                                }
                                else if (bo == 'f' || bo == 'F' || input == IBAN[5])
                                {
                                    if (book >= noofbooks[5])
                                    {
                                        int temporary = noofbooks[5] - book;
                                        book = book + temporary - 1; // user restricted to issue books above limit

                                        cout << "***** Sorry! We cannot issue all the quantities of this book, and we have to keep at least 1 book in Library\n *****";
                                        cout << "You can issue at max " << book << " books." << endl; // user restricted to issue books above limit
                                    }
                                    else
                                    {
                                        noofbooks[5] = noofbooks[5] - book;
                                    }
                                }

                                cout << "Enter 'e' to Exit or any other character to repeat \n";
                                cin >> pro;
                                cin.ignore(10000, '\n');      // cin.ignore and cin.get studied in chp 3 Input/Output by DS Malik Eigth Edition. This cin.ignore() gets the first character of the input and ignores the next 10,000 additional characters.
                                if (pro == 'e' || pro == 'E') // exit option to quit the program
                                {
                                    int IBAN_copy[6];
                                    int edition_copy[6];
                                    int price_copy[6];
                                    int released_year_copy[6];
                                    int noofbooks_copy[6];

                                    for (int i = 0; i < 6; i++)
                                    {
                                        IBAN_copy[i] = IBAN[i];
                                        edition_copy[i] = edition[i];
                                        price_copy[i] = price[i];
                                        released_year_copy[i] = released_year[i];
                                        noofbooks_copy[i] = noofbooks[i];
                                    }

                                    for (int i = 0; i < 6; ++i)
                                    {
                                        for (int j = i + 1; j < 6; ++j)
                                        {
                                            if (IBAN_copy[i] > IBAN_copy[j])
                                            {
                                                int temp1 = IBAN_copy[i];
                                                IBAN_copy[i] = IBAN_copy[j];
                                                IBAN_copy[j] = temp1;

                                                int temp2 = edition_copy[i];
                                                edition_copy[i] = edition_copy[j];
                                                edition_copy[j] = temp2;

                                                int temp3 = price_copy[i];
                                                price_copy[i] = price_copy[j];
                                                price_copy[j] = temp3;

                                                int temp4 = released_year_copy[i];
                                                released_year_copy[i] = released_year_copy[j];
                                                released_year_copy[j] = temp4;

                                                int temp5 = noofbooks_copy[i];
                                                noofbooks_copy[i] = noofbooks_copy[j];
                                                noofbooks_copy[j] = temp5;
                                            }
                                        }
                                    }

                                    cout << endl; // total current data of the books library has.
                                    cout << "Book 1 with IBAN Number " << IBAN_copy[0] << " edition " << edition_copy[0] << " with price Rs. " << price_copy[0] << " released in the year " << released_year_copy[0] << " and we have " << noofbooks_copy[0] << " of them currently available in the Library\n";
                                    cout << "Book 2 with IBAN Number " << IBAN_copy[1] << " edition " << edition_copy[1] << " with price Rs. " << price_copy[1] << " released in the year " << released_year_copy[1] << " and we have " << noofbooks_copy[1] << " of them currently available in the Library\n";
                                    cout << "Book 2 with IBAN Number " << IBAN_copy[2] << " edition " << edition_copy[2] << " with price Rs. " << price_copy[2] << " released in the year " << released_year_copy[2] << " and we have " << noofbooks_copy[2] << " of them currently available in the Library\n";
                                    cout << "Book 3 with IBAN Number " << IBAN_copy[3] << " edition " << edition_copy[3] << " with price Rs. " << price_copy[3] << " released in the year " << released_year_copy[3] << " and we have " << noofbooks_copy[3] << " of them currently available in the Library\n";
                                    cout << "Book 4 with IBAN Number  " << IBAN_copy[4] << " edition " << edition_copy[4] << " with price Rs. " << price_copy[4] << " released in the year " << released_year_copy[4] << " and we have " << noofbooks_copy[4] << " of them currently available in the Library\n";
                                    cout << "Book 5 with IBAN Number  " << IBAN_copy[5] << " edition " << edition_copy[5] << " with price Rs. " << price_copy[5] << " released in the year " << released_year_copy[5] << " and we have " << noofbooks_copy[5] << " of them currently available in the Library\n";
                                    cout << "*************************************************\n";
                                }
                            }
                            else
                            {
                                cout << "***** Please write the correct amount how many books you want *****";
                                break; // user restricted to input wrong.
                            }
                        }
                        else if (ir == 'r') // user returning the book option
                        {
                            char choiceReturn;
                            char enter = ' ';
                            int inputReturn = 0;
                            cout << "\n***** In the Library of Books, how you want to Return the Book? *****\n"; // asking again which way user want to return the book. by Name or IBAN number
                            cout << "***** Note: You can only *return* the books if you have *issued* it before. Thanks for your Patience. *****\n\n";
                            cout << "Press '1' to Return Book by Name\n";
                            cout << "Press '2' to Return by IBAN number\n";
                            cout << "Press '0' to Exit to Library Lobby for Issue or Return\n\n";

                            cin >> choiceReturn;
                            cin.ignore(10000, '\n'); // cin.ignore and cin.get studied in chp 3 Input/Output by DS Malik Eigth Edition. This cin.ignore() gets the first character of the input and ignores the next 10,000 additional characters.

                            if (choiceReturn == '1') // user's returning book choice #1 by Name
                            {                        // user selecting the book to return
                                cout << "Enter 'a' to return the book 'Seerat-un-Nabi' with IBAN number " << IBAN[0] << "\n";
                                cout << "Enter 'b' to return the book 'Atomic Habits' with IBAN number " << IBAN[1] << " \n";
                                cout << "Enter 'c' to return the book 'The Power of Positive Thinking ' with IBAN number " << IBAN[2] << "\n";
                                cout << "Enter 'd' to return the book 'Rich Dad Poor Dad' with IBAN number " << IBAN[3] << " \n";
                                cout << "Enter 'e' to return the book 'The Magic of Thinking Big' with IBAN number " << IBAN[4] << " \n";
                                cout << "Enter 'f' to return the book 'The One Thing' with IBAN number " << IBAN[5] << "\n";

                                cin >> enter;
                                cin.ignore(10000, '\n'); // cin.ignore and cin.get studied in chp 3 Input/Output by DS Malik Eigth Edition. This cin.ignore() gets the first character of the input and ignores the next 10,000 additional characters. // cin.ignore and cin.get studied in chp 3 Input/Output by DS Malik Eigth Edition. This cin.ignore() gets the first character of the input and ignores the next 10,000 additional characters.
                            }
                            else if (choiceReturn == '2')
                            { // user selecting the book to return by IBAN number
                                cout << "Enter " << IBAN[0] << " to return the book 'a'   'Seerat-un-Nabi'\n";
                                cout << "Enter " << IBAN[1] << " to return the book 'b'   'Atomic Habits'\n";
                                cout << "Enter " << IBAN[2] << " to return the book 'c'   'The Power of Positive Thinking '\n";
                                cout << "Enter " << IBAN[3] << " to return the book 'd'  'Rich Dad Poor Dad'\n";
                                cout << "Enter " << IBAN[4] << " to return the book 'e'  'The Magic of Thinking Big'\n";
                                cout << "Enter " << IBAN[5] << " to return the book 'f'   'The One Thing'\n";

                                cin >> inputReturn;
                            }
                            else if (choiceReturn == '0') // quitting option to get to the library lobby to again start choosing the issue, return and quit option
                            {
                                // lobby message
                                cout << "\n=====================================================================================\n";
                                cout << "You are in the Lobby of Library. You May Select the Option to Issue, Return or Quit.\n";
                                cout << "=====================================================================================\n";
                            }
                            else
                            {
                                cout << "***** Please Enter the Correct Option. Thanks for your Patience. *****";
                            }
                            long int book = 0;
                            if ((enter >= 'a' && enter <= 'f' || enter >= 'A' && enter <= 'F') || (inputReturn == IBAN[0] || inputReturn == IBAN[1] || inputReturn == IBAN[2] || inputReturn == IBAN[3] || inputReturn == IBAN[4] || inputReturn == IBAN[5]))
                            { // user selecting option how much to return the book
                                cout << "\nHow many books do you want to Return? \n";
                                cin >> book;

                                if (book > 0)
                                {
                                    cout << "Enter 'e' to Exit or any other character to repeat \n"; // on other character entered, the while loop will automatically repeat the program. so no need for restart using return 0 etc;
                                    cin >> proc;
                                    cin.ignore(10000, '\n'); // cin.ignore and cin.get studied in chp 3 Input/Output by DS Malik Eigth Edition. This cin.ignore() gets the first character of the input and ignores the next 10,000 additional characters.

                                    if (enter == 'a' || enter == 'A' || inputReturn == IBAN[0]) // User's returning book option by name or IBAN Number
                                    {

                                        if (noofbooks[0] + book > quantity_Book_A) // user restricted to return books above limit
                                        {
                                            cout << "***** Sorry! We cannot get the return of the book which is exceeding the quantities in Library *****";
                                            cout << "\nYou can return at max " << quantity_Book_A - noofbooks[0] << " books." << endl; // user restricted to return books above limit
                                        }
                                        else
                                        {
                                            noofbooks[0] = noofbooks[0] + book; //****** success on return within limit*****
                                        }
                                    }
                                    else if (enter == 'b' || enter == 'B' || inputReturn == IBAN[1]) // User's returning book option by name or IBAN Number
                                    {
                                        if (noofbooks[1] + book > quantity_Book_B)
                                        {
                                            cout << "***** Sorry! We cannot get the return of the book which is exceeding the quantities in Library *****";
                                            cout << "\nYou can return at max " << quantity_Book_B - noofbooks[1] << " books." << endl; // user restricted to return books above limit
                                        }
                                        else
                                        {
                                            noofbooks[1] = noofbooks[1] + book; //****** success on return within limit*****
                                        }
                                    }
                                    else if (enter == 'c' || enter == 'C' || inputReturn == IBAN[2]) // User's returning book option by name or IBAN Number
                                    {
                                        if (noofbooks[2] + book > quantity_Book_C)
                                        {
                                            cout << "***** Sorry! We cannot get the return of the book which is exceeding the quantities in Library *****";
                                            cout << "\nYou can return at max " << quantity_Book_C - noofbooks[2] << " books." << endl; // user restricted to return books above limit
                                        }
                                        else
                                        {
                                            noofbooks[2] = noofbooks[2] + book; //****** success on return within limit*****
                                        }
                                    }
                                    else if (enter == 'd' || enter == 'D' || inputReturn == IBAN[3]) // User's returning book option by name or IBAN Number
                                    {
                                        if (noofbooks[3] + book > quantity_Book_D)
                                        {
                                            cout << "***** Sorry! We cannot get the return of the book which is exceeding the quantities in Library *****";
                                            cout << "\nYou can return at max " << quantity_Book_D - noofbooks[3] << " books." << endl; // user restricted to return books above limit
                                        }
                                        else
                                        {
                                            noofbooks[3] = noofbooks[3] + book; //****** success on return within limit*****
                                        }
                                    }
                                    else if (enter == 'e' || enter == 'E' || inputReturn == IBAN[4]) // User's returning book option by name or IBAN Number
                                    {
                                        if (noofbooks[4] + book > quantity_Book_E)
                                        {
                                            cout << "***** Sorry! We cannot get the return of the book which is exceeding the quantities in Library *****";
                                            cout << "\nYou can return at max " << quantity_Book_E - noofbooks[4] << " books." << endl; // user restricted to return books above limit
                                        }
                                        else
                                        {
                                            noofbooks[4] = noofbooks[4] + book; //****** success on return within limit*****
                                        }
                                    }
                                    else if (enter == 'f' || enter == 'F' || inputReturn == IBAN[5]) // User's returning book option by name or IBAN Number
                                    {
                                        if (noofbooks[5] + book > quantity_Book_F)
                                        {
                                            cout << "***** Sorry! We cannot get the return of the book which is exceeding the quantities in Library *****";
                                            cout << "\nYou can return at max " << quantity_Book_F - noofbooks[5] << " books." << endl; // user restricted to return books above limit
                                        }
                                        else
                                        {
                                            noofbooks[5] = noofbooks[5] + book; //****** success on return within limit*****
                                        }
                                    }

                                    if (proc == 'e' || proc == 'E') // exit option for the user, and displaying the data
                                    {
                                        int IBAN_copy[6];
                                        int edition_copy[6]; // IBAN NUMBER DATA
                                        int price_copy[6];
                                        int released_year_copy[6];
                                        int noofbooks_copy[6];

                                        for (int i = 0; i < 6; i++)
                                        {
                                            IBAN_copy[i] = IBAN[i];
                                            edition_copy[i] = edition[i];
                                            price_copy[i] = price[i];
                                            released_year_copy[i] = released_year[i];
                                            noofbooks_copy[i] = noofbooks[i];
                                        }

                                        for (int i = 0; i < 6; ++i)
                                        {
                                            for (int j = i + 1; j < 6; ++j)
                                            {
                                                if (IBAN_copy[i] > IBAN_copy[j])
                                                {
                                                    int tempaa = IBAN_copy[i];
                                                    IBAN_copy[i] = IBAN_copy[j];
                                                    IBAN_copy[j] = tempaa;

                                                    int tempuu = edition_copy[i];
                                                    edition_copy[i] = edition_copy[j];
                                                    edition_copy[j] = tempuu;

                                                    int tempoo = price_copy[i];
                                                    price_copy[i] = price_copy[j];
                                                    price_copy[j] = tempoo;

                                                    int tempann = released_year_copy[i];
                                                    released_year_copy[i] = released_year_copy[j];
                                                    released_year_copy[j] = tempann;

                                                    int tempana = noofbooks_copy[i];
                                                    noofbooks_copy[i] = noofbooks_copy[j];
                                                    noofbooks_copy[j] = tempana;
                                                }
                                            }
                                        }

                                        cout << endl; // total current data of the books library has.
                                        cout << "Book 1 with IBAN Number " << IBAN_copy[0] << " edition " << edition_copy[0] << " with price Rs. " << price_copy[0] << " released in the year " << released_year_copy[0] << " and we have " << noofbooks_copy[0] << " of them currently available in the Library\n";
                                        cout << "Book 2 with IBAN Number " << IBAN_copy[1] << " edition " << edition_copy[1] << " with price Rs. " << price_copy[1] << " released in the year " << released_year_copy[1] << " and we have " << noofbooks_copy[1] << " of them currently available in the Library\n";
                                        cout << "Book 2 with IBAN Number " << IBAN_copy[2] << " edition " << edition_copy[2] << " with price Rs. " << price_copy[2] << " released in the year " << released_year_copy[2] << " and we have " << noofbooks_copy[2] << " of them currently available in the Library\n";
                                        cout << "Book 3 with IBAN Number " << IBAN_copy[3] << " edition " << edition_copy[3] << " with price Rs. " << price_copy[3] << " released in the year " << released_year_copy[3] << " and we have " << noofbooks_copy[3] << " of them currently available in the Library\n";
                                        cout << "Book 4 with IBAN Number  " << IBAN_copy[4] << " edition " << edition_copy[4] << " with price Rs. " << price_copy[4] << " released in the year " << released_year_copy[4] << " and we have " << noofbooks_copy[4] << " of them currently available in the Library\n";
                                        cout << "Book 5 with IBAN Number  " << IBAN_copy[5] << " edition " << edition_copy[5] << " with price Rs. " << price_copy[5] << " released in the year " << released_year_copy[5] << " and we have " << noofbooks_copy[5] << " of them currently available in the Library\n";
                                        cout << "*************************************************\n";
                                    }
                                }
                                else
                                {
                                    cout << "***** Please write the correct amount how many books you want *****";
                                }
                            }
                        }
                        else if (ir == 'q') // user choosing the quit option
                        {
                            cout << endl
                                 << endl // thank you message on using our library
                                 << "=======================================================" << endl;
                            cout << "             THANK YOU FOR VISITING LIBRARY            " << endl;
                            cout << "=======================================================" << endl
                                 << endl;

                            break;
                        }
                        else
                        { // user restricted to select wrong option
                            cout << "\n***** Please Enter the 'i', 'r' or 'q' keywords only. Thanks for your patience. *****\n\n";
                        }
                    }

                    // storing the students data,  it is entered on the number of program it runs on.

                    number[book_issues_len] = ++stuNumber;
                    rollno[book_issues_len] = rollNumber; // Student number data
                    stu_age[book_issues_len] = age;
                    if (g == 'm')
                    {
                        gender[book_issues_len] = 1;
                    }
                    else
                        gender[book_issues_len] = 0;
                    book_issues_len++;
                    // book_issues[book_issues_len] = 255;

                    for (int i = 0; i < book_issues_len; ++i)
                    {
                        for (int j = i + 1; j < book_issues_len; ++j)
                        {
                            if (stu_age[i] > stu_age[j])
                            {
                                int tempa = stu_age[i];
                                stu_age[i] = stu_age[j];
                                stu_age[j] = tempa;

                                int tempo = number[i];
                                number[i] = number[j]; // bubble sorting
                                number[j] = tempo;

                                int tempu = gender[i];
                                gender[i] = gender[j];
                                gender[j] = tempu;

                                int tempan = rollno[i];
                                rollno[i] = rollno[j];
                                rollno[j] = tempan;
                            }
                        }
                    }

                    for (int i = 0; i < book_issues_len; i++)
                    {
                        cout
                            << "Student " << number[i]
                            << " has Roll Number " << rollno[i]
                            << " and age is " << stu_age[i];
                        if (gender[i] == 1)
                        {
                            cout << " and his gender is male\n\n";
                        }
                        else
                        {
                            cout << " and the gender is female\n\n";
                        }
                    }
                }
                else
                { // user restricted to enter the library on wrong input .
                    cout << "\n***** Please Enter your correct *age* to enter the Library. Restart again. *****\n\n ";
                    // break;
                }
            }
            else
            { // user restricted to enter the library  on wrong input .
                cout << "\n***** Please Enter your correct *gender* to enter the Library. Restart again. *****\n\n";
            }
        }
        else
        { // user restricted to enter the library on wrong input .
            cout << "\n***** Please Enter your Valid *Roll Number* to enter the Library. Restart again. *****\n\n";
        }
    }
    return 0;
}