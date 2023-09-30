#include<iostream>

using namespace std;

class Library{

public:
    int shelf_no;
    int row_no;
    int book_no;
    bool book_present;

    Library(){
    shelf_no = 0;
    row_no = 0;
    book_no = 1;
    book_present = true;
    }

    void get_book(){
        cout<<"Book from Shelf "<<shelf_no<<" and Row number "<<row_no<<endl;
        book_present = false;
    }

    void keep_back(){
        cout<<"Book kept back to shelf "<<shelf_no<<" and row number "<<row_no<<endl;
    }
};

class Book{


public:
    int bno;
    string title;
    string author;
    int returned;

    Book(){
        bno = 1;
        returned = 1;
        title = "Nil";
        author = "Nil";
    }

    void get_bno(){
        cout<<"Book number is "<<bno<<endl;
    }

    void check_returned(){
        if(returned == 1){
            cout<<"Book "<<bno<<" has been returned"<<endl;
        }
        else{
            cout<<"Book "<<bno<<" has not been returned"<<endl;
        }
    }

    void print_book_details(){
        cout<<"Book "<<title<<" by "<<author<<endl;
    }

};

class Student{

public:
    string rollno;
    string name;
    bool has_book = false;

    Student(){
        rollno = "Nil";
        name = "Nil";
    }

    void get_student_details(){
        cout<<"Name: "<<name<<endl<<" Rollno: "<<rollno<<endl;
    }
    void check_have_book(){
        if(has_book == true){
            cout<<"Already withdrew a book"<<endl;
        }
        else{
            cout<<"Doesn't have a book"<<endl;
        }
    }
};

int main(){

    Library l;
    Student s ;
    Book b;

    cout<<"\t\t LIBRARY MANAGEMENT SYSTEM"<<endl;

    cout<<"Enter bno,book_name,author "<<endl;
    cin>>b.bno;
    string garb;
    cin >> garb;
    getline(cin,b.title);
    getline(cin, b.author);

    cout<<"Enter shelfno, rowno, bookno "<<endl;
    cin>>l.shelf_no>>l.row_no>>l.book_no;

    cout<<"Enter roll no and name"<<endl;
    cin>>s.rollno;
    cin >> garb;
    getline(cin, s.name);

    return 0;

}
