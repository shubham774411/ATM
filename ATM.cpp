#include <iostream>

using namespace std;

int main()
{
    int a,b,c,pin,option,bal=100000,Withdraw,deposite,ch=1;
    cout<<"\nWelcome to Shubham Bank of India";
    cout<<"\nEnter last 4 digits of your ATM Card:";
    cout<<"\nXXXX XXXX XXXX ";
    cin>>a;
    while(ch==1)
    {
    cout<<"Enter your Personal Identification Number (PIN): ";
    cin>>pin;
    if(pin==1234)
    {
        cout<<"\nPlease select an appropirate option ";
        cout<<"\n\t1 Saving \n\t2 Current\n";
        cin>>b;
        cout<<"\nPlease select an appropirate option \n";
        cout<<"\t1 Balance \n\t2 Withdraw \n\t3 Deposite ";
        cin>>option;
        switch(option)
        {
            case 1: cout<<"\nAvailable Balance is "<<bal;
                    break;
            case 2: cout<<"\nEnter the amount to Withdraw ";
                    cin>>Withdraw;
                    cout<<"\nPlease wait..";
                    cout<<"\n............";
                    cout<<"\nPlease collect your money";
                    cout<<"\nThe amount "<<Withdraw<<" has been withdrawn through your account ending "<<a;
                    cout<<"\nDo you wish to check Balance...If YES press 1 \n";
                    cin>>c;
                    if(c==1)
                    cout<<"\nAvailable Balance is "<<bal-Withdraw;
                    else
                    {
                        break;
                    }
                    bal=bal-Withdraw;
                    break;
            case 3: cout<<"\nEnter the amount to deposite ";
                    cin>>deposite;
                    cout<<"\nPlease put the money in the slot";
                    cout<<"\nTransaction successful ";
                    cout<<"\nDo you wish to check the Balance..If YES press 1 ";
                    cin>>c;
                    if(c==1)
                    cout<<"\nAvailable Balance is "<<bal+deposite;
                    else
                    {
                        break;
                    }
                    bal=bal+deposite;
                    break;
        }
    }
    else
    cout<<"\nEnter correct pin ";
    cout<<"\nDo you wish to continue....if YES press 1 ";
    cin>>ch;
    }
    return 0;
}

