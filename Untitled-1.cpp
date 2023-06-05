/******************************************************************************
Aryaf Alanzi 2210003668
kawther emnayan 2210003670
Eman alghorabi 2210003569
Raghad almutairi 2210003547

*******************************************************************************/

#include <iostream>

using namespace std;
void pascal()
{
    // law of Pressure
    float P,F,A;
             cout<<"enter the value of Force (F): " ;
         cin>>F;
            cout<<"enter the value of Area (A): " ;
         cin>>A;
         P= F/A;
         cout<<" The Pressure (P) is: "<<P<<"Pa"<<endl;

} 
void voltage()
{
    //law of voltage
    float I, R, V;
         cout << "Enter the value of current (I): ";
         cin >> I;
         cout << "Enter the value of resistance (R): ";
         cin >> R;
         V = I * R;
         cout << "The voltage (V) is: " << V <<"V"<< endl;
}
void current()
{
    //Law of current
     float I,Q,T;
         cout<<"enter the value of charge (Q): " ;
         cin>>Q;
         cout<<"enter the value of time  (T): " ;
         cin>>T;
         I= Q/T;
         cout<<" The current (I) is: "<<I<<"A"<<endl;
}

void Wavelength()
{
    //law of Wavelength
    float W, f, v;
         cout << "Enter the value of Frequency (f): ";
         cin >> f;
         cout << "Enter the value of velocity (v): ";
         cin >> v;
         W=v/f;
         cout << "The Wavelength (W) is: " << W <<"m"<< endl;
}

int main()
{
   int choice=0;
    do 
    {
    cout<<"----- Hello,this program about physics laws-----"<<endl; cout<<"Choose one of the following:  "<<endl;
    cout<<"1- pascal"<<endl;
    cout<<"2- ohm"<<endl;
    cout<<"3- current"<<endl;
    cout<<"4- wave length"<<endl;
    cout<<"5- Exit"<<endl;
    cout<<"-----------------------------------------------------------------"<<endl;
cout<<"enter your choice :"<<endl;
    cin>>choice;
    
     switch(choice){
         case 1:
         {
        pascal();
         }
                 break;
         case 2:{
         voltage();
         }
                   break;
         case 3:
         {
         current();
         }
                     break;

         case 4:
         {
         Wavelength();
         }
                   break;
         case 5:
            cout<<"Exit...."<<endl;
                break;

        default:
        cout << "wrong choice! please  enter again  "<<endl;
          break;
}
  
    }while (choice!=5);


    return 0;
}



