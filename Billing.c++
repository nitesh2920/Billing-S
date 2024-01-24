#include<iostream>
using namespace std;

int returnBill(){
    char ch;
    char items;
    char southItems;
    char GItems;
    int billAmount;
    cout<<"---------Welcome To Jarvis Restaurant---------"<<endl;
    cout<<"Step 1: PLEASE PRESS 'S' to place a order"<<"\n";
    cout<<"Step 2: You can order both South Indian food or Gujarati Food"<<"\n";
    cout<<"Step 3: You can press 1 for South Indian and 2 for Gujarati Dish"<<endl;
    cout<<"Step 4: You Will get Your bill after order is placed"<<endl;
    start:
    cin>>ch;

    if(ch=='s'||ch=='S')
    {
        cout<<"Please select your choice"<<endl;
        cout<<"1. South Indian Dish          2. Gujarati Dish"<<endl;
        cin>>items;
        char y;
        if(items=='1')
        {    southItemsList:
            cout<<"PLease select 1,2,3.. as per you like"<<endl;
            cout<<"1->  Dosa:            40Rs."<<endl;
            cout<<"2->  Masala Dosa:     80Rs."<<endl;
            cout<<"3->  Uttapam:         60Rs."<<endl;
            cout<<"4->  Appamam:         50Rs."<<endl;
           
            cin>>southItems;
            if(southItems=='1'){
                billAmount+=40;
            }
            else if(southItems=='2'){
                billAmount+=80;
            }
            else if(southItems=='3'){
                billAmount+=60;
            }
            else if(southItems=='4'){
                billAmount+=50;
            }
            else{
                cout<<"You have entered a wrong value"<<endl;
                goto southItemsList;
            }

            cout<<"Do you want to add more items Yes or No "<<endl;
            cin>>y;
            if(y=='Y'||y=='y'){
                goto southItemsList;
            }
            else{
                return billAmount;
            }
        }
        else if(items=='2'){
            GujaratiItemsList:
            cout<<"PLease select 1,2,3.. as per you like"<<endl;
            cout<<"1->  Dhokla:          40Rs."<<endl;
            cout<<"2->  Gathiya:         80Rs."<<endl;
            cout<<"3->  Khichdi:         60Rs."<<endl;
            cout<<"4->  Khaman:          50Rs."<<endl;
           
            cin>>GItems;
            if(GItems=='1'){
                billAmount+=40;
            }
            else if(GItems=='2'){
                billAmount+=80;
            }
            else if(GItems=='3'){
                billAmount+=60;
            }
            else if(GItems=='4'){
                billAmount+=50;
            }
            else{
                cout<<"You have entered a wrong value"<<endl;
                goto GujaratiItemsList;
            }

            cout<<"Do you want to add more items Yes or No"<<endl;
            cin>>y;
            if(y=='Y'||y=='y'){
                goto GujaratiItemsList;
            }
            else{
                return billAmount;
            }
        }
        else{
            cout<<"You have entered wrong value, please try again!"<<endl;
            goto start;
        }


    }
    else{
     cout<<"You have pressed a wrong key"<<endl;   
    }

return billAmount;



}

int main()
{
    int totalBill=returnBill();
    cout<<"Total Bill is "<<totalBill;
}
