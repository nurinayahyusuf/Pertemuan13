#include <iostream>
#include <string>

using namespace std;

struct biodata{

int nu ;
int nim;
char jk;

biodata*next;
};

void printList(biodata*n)
{
while (n!= NULL)
    {

cout<<"Nomor Urut        : "<<n->nu<<" "<<endl;;
cout<<"NIM               : "<<n->nim<<" "<<endl;
cout<<"Jenis Kelamin     : "<<n->jk<<" "<<endl;
cout<< " "<<endl;
        n = n->next;
    }
}

int main ()
{biodata*head = NULL;
biodata*second = NULL;
biodata*third = NULL;

head = new biodata();
second = new biodata();
third = new biodata();

head->nu = 1;
head->nim = 1234;
head->jk = 'L';
head->next = second;

second->nu = 2;
second->nim = 5678;
second->jk = 'P';
second->next = third;

third->nu = 3;
third->nim = 9123;
third->jk = 'P';
third->next = NULL;

printList(head);

cin.get();
return 0;
}
