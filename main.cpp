// aprogram which computes and dispalys the total
//amount of money to be paid the customer after 
//reciecing the unit cost and quantity of 3 products from the user
#include <iostream>
using namespace std;
int main()
{
    int bananas=23000 , rice=6000,sugar=6000,oil=3000,cabagge=7000;
    // string bananas , rice , sugar , oil , cabbage;
    int option_1 , option_2 , option_3 , option_4;
    int sum ;

    cout<<"Thanks for visiting MHOSES SUPER-MARKET" <<endl;
    cout<<"What can we offer you please ! " <<endl;

    cout<<"We have everything in stoke " <<endl;
    cout<<"\nBananas" <<endl;
    cout<<"Rice" <<endl;
    cout<<"Sugar" <<endl;
    cout<<"Oil" <<endl;
    cout<<"Cabbage" <<endl;
    cout<<std::endl;

    cout<<"Make a choice of three products and we shall help calculate the sum for the prices"
        <<std::endl;

    cout<<"\nEnter 1 for bananas , 2 for rice , 3 for sugar , 4 for oil and 5 for cabbages"
        <<endl;

    cin>>option_1; 
    // entery for option1
    if( option_1 == 1)
    {
        option_1 = 23000;
    } else if( option_1 == 2)
    {
        option_1 = 6000;
    }else if (option_1 == 3){
        option_1 = 6000;
    }else if (option_1 == 4){
        option_1 = 3000;
    }else if (option_1 == 5){
        option_1 = 7000;
    }else{
        cout<<"\n\n\t\tYou entered invalid option";
    }


    cin>>option_2; 
    
    // entery for option2
    if( option_2 == 1)
    {
        option_2 = 23000;
    } else if( option_2 == 2)
    {
        option_2 = 6000;
    }else if (option_2 == 3){
        option_2 = 6000;
    }else if (option_2 == 4){
        option_2 = 3000;
    }else if (option_2 == 5){
        option_2 = 7000;
    }else{
        cout<<"\n\n\t\tYou entered invalid option";
    }


    cin>>option_3;
    // entry for option3
    if( option_3 == 1)
    {
        option_3 = 23000;
    } else if( option_3 == 2)
    {
        option_3 = 6000;
    }else if (option_3 == 3){
        option_3 = 6000;
    }else if (option_3 == 4){
        option_3 = 3000;
    }else if (option_3 == 5){
        option_3 = 7000;
    }else{
        cout<<"\n\n\t\tYou entered invalid option";
    }


    cin>>option_4; 
    // entry for option4
    if( option_4 == 1)
    {
        option_4 = 23000;
    } else if( option_4 == 2)
    {
        option_4 = 6000;
    }else if (option_4 == 3){
        option_4 = 6000;
    }else if (option_4 == 4){
        option_4 = 3000;
    }else if (option_4 == 5){
        option_4 = 7000;
    }else{
        cout<<"\n\n\t\tYou entered invalid option";
    }

    sum = (option_1 + option_2 + option_3 + option_4);

    // the caklculations for the options choosen by the user
    cout<<"This is the total price your are goona pay :" <<" shillings " <<sum <<std::endl;
    cout<<"\n\n\t\tThanks for choosing Mhoses SuperMarket ! " <<endl;
    cout<<"\n\n\n" <<endl;

}