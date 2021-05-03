#include <iostream>
#include <stdio.h>
#include<cstdlib>
#include<string.h>
using namespace std;

class BankAccount{   //base class
protected:
string name;
string surname;
int ID;
int balance=0;
int randomN;
public:
BankAccount(); //constructer
virtual void GetAccount();
virtual void deposit();
virtual void withdraw();
virtual void Customers();


};

BankAccount::BankAccount(){    //constructer
}

void BankAccount::GetAccount(){
cout<<"\t\tBANKAMIZA HOSGELDINIZ\t"<<endl;
cout<<"AD : ";
cin>>name;
cout<<"SOYAD :";
cin>>surname;
cout<<"TC KIMLIK NUMARANIZ :";
cin>>ID;
randomN = rand();
  cout <<"HESAP NUMARANIZ : " <<randomN << endl;
 cout<<"\n\t\tHesabiniz Basariyla olusturuldu\t"<<endl;
 
}

void BankAccount::deposit(){
cout << "\nYatirmak Istediginiz miktar :";
double newbalance;
 cin >> newbalance;
 balance += newbalance;
 cout << "\nToplam Hesaptaki Para = " << balance<< endl;

}

void BankAccount::withdraw(){
  double withd;
  cout<<"Cekmek istediginiz miktar :";
  cin>>withd;
  if(withd>balance){
    cout<<"Hesapta yetrli para yoktur!\n";
  }
  else{
 balance = balance - withd;
cout<<"\nHESABINIZDA "<< balance<< " TL VARDIR";
  }
}

void BankAccount::Customers(){

  cout<<"\n\t AD : "<<name;
  cout<<"\n\t SOYAD : "<<surname;
  cout<<"\n\t TC kimlik Numarasi : "<<ID;
  cout <<"\n\t Hesap Numarasi : "<<randomN;
  cout<<"\n\t Bakiye :"<<balance;
cout<<endl;
}


class cari:public BankAccount{
  public:
  void carimenu(){
    BankAccount b;
    int sec;
    do{
      cout<<endl;
   cout << endl;
   cout << "\t \t\tMENU \n";
   cout<< "1-Hesap Olustur\n";
   cout << "2-Para yatir\n";
   cout << "3-Para Cek\n";
   cout << "4-Hesap Bilgileri Goster\n";
   cout << "5-Exit\n\n";
   cout << "Secim--> : ";
         cin >> sec;

            switch (sec)
            {
              case 1:b.GetAccount();
              break;
            case 2: b.deposit();
                break;
            case 3: b.withdraw();
                break;
            case 4: b.Customers();
                break;
             
      
            }
        } 
        while (sec != 5);

}
};

class vadesiz:BankAccount{   //inheritance
public :
void vadesizmenu(){
   BankAccount b;
    int sec;
    do{
   cout << endl;
   cout << "\t \t\tMENU \n";
   cout<< "1- Hesap Olustur\n";
   cout << "2-Para yatir\n";
   cout << "3-Para Cek\n";
   cout << "4-Hesap Bilgileri Goster\n";
   cout << "5-Exit\n\n";
   cout << "Secim--> : ";
         cin >> sec;

            switch (sec)
            {
              case 1:b.GetAccount();
              break;
            case 2: b.deposit();
                break;
            case 3: b.withdraw();
                break;
            case 4: b.Customers();
                break;
             
      
            }
        } 
        while (sec != 5);
}


};

class vadeli:BankAccount{ //inheritance
public:
void VadeliHesaplar(){
  int v;
  cout<<"1-UZUNVADELI\n";
  cout<<"2-KISAVADELI \n";
cout<<"Acmak istediginiz hesap turunu secin :";
cin>>v;
if(v==1){
  cout<<"bu hesabin faizi %14";
  vadelimenu();
}
else if(v==2){
  cout<<"bu hesabin faizi %8";
  vadelimenu();
}
else {
  cout<<"lutfen dogru secimi yapin \n";
}
}

void vadelimenu(){

   BankAccount b;
    int sec;
    do{
   cout << endl;
   cout << "\t \t\tMENU \n";
   cout<< "1- Hesap Olustur\n";
   cout << "2-Para yatir\n";
   cout << "3-Para Cek\n";
   cout << "4-Hesap Bilgileri Goster\n";
   cout << "5-Exit\n\n";
   cout << "Secim--> : ";
         cin >> sec;

            switch (sec)
            {
              case 1:b.GetAccount();
              break;
            case 2: b.deposit();
                break;
            case 3: b.withdraw();
                break;
            case 4: b.Customers();
                break;
             
      
            }
        } 
        while (sec != 5);
}

};



int main() {
  cari c;
  vadesiz v;
  vadeli va;
    int sec;
    do
    {
        cout << endl;
        cout << "\t \t \tMENU \n";
        cout << "Acmak Istediginiz Hesap Turunu Secin :";
        cout << "\n1) cari Hesap";
        cout << "\n2) Vadeli Hesap";
        cout << "\n3) Vadesiz Hesap";
        cout << "\n4) cikis\n";
        cout << "secin --> ";
        cin >> sec;

        switch (sec)
        {
        case 1: c.carimenu();
            break;
        case 2:va.VadeliHesaplar();
            break;
         case 3: v.vadesizmenu();
         break;
        case 4: goto end;

        }
    
    } while (1);
end:
    return 0;
    
}