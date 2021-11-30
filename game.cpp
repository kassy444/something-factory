#include <iostream>
using namespace std;
int main() {
 int tax_day = 365;
 int debt_day = 30;
 int tax_collection;
 int workers = 0;
 int manager = 0;
 long int debt_payment;
 string product;
 string daily;
 int $ = 0;
 char day;
 char buy_menu;
 bool mon = true;
 bool tue = true;
 bool game_start = true;
 bool hark = true;
 bool start = true;
 float product_worth; 
 long int debt; //overall debt 
 int money = 0;
 tax_collection = money/10;
 
 cout << "You’ve just graduated college but while you were there you made\na lot of bad decisions. You’re in a lot of debt. You have no\nmoney and no job to pay it off with. But suddenly you get an\nidea. You want to start a business. But what will you sell?\n";
 getline(cin, product);
 cout << "\nAlright, a little random but I guess that should be expected.\nHow much do you think they're worth?(Dont use the $ sign)\n";
 while(start){
 cin >> product_worth;
 if(product_worth >= 1000000){
   cout << "\nDoesn't that sound a little exaggerated to you? Please answer\nseriously this time.\n";
 }
 else if(product_worth <= 0){
   cout << "\nVery funny. Now please be seriouse.\n";
 }
 else{
   start = false;
 }
 }
 debt_payment = product_worth * 40;
 debt = product_worth * 1000000;
 cout << "\nGreat, now you can have a way of paying off your $" << debt << " \ndebt. By the way, we should probably talk about those bad \ndecisions. But first I should probably tell you how to run your\nbusiness. The first thing you need to know is how to sell\nthings. For now, you should just manually press 'enter' to sell\nyour stuff but later you can buy employees to increase your\nearnings and do these things for you. Just remember that you\nshould never spend all your money at once. If you do and\ncan't pay off your debts then they may possess the rest\nof your things including your business. If that happens\nit'll be over. Just remember, if you want to buy something\ntype 'B'. If you want to check your information\ntype 'S'. That's all you should worry about for now.\nPress 'enter' to sell your first product.\n";
 //What ever else goes here.
 //start loop
while(game_start){
while(hark){
 cin.get(day);
 if(mon == true && tue == true){
 cout << "$" << money << " ";
 money = money + product_worth;
 }
 if(tax_day == 0){
   money = money - money/10;
   cout << endl << "\nIt's time to pay your taxes." << endl;
   tax_day = 365;
 }
 if(debt_day == 0){
   money = money - debt_payment;
   cout << "\n\nIt's time for your debt payment.\n";
   debt = debt - debt_payment;
   debt_day = 30;
   if(money < debt_payment){
     cout << "You lose";
     hark = false;
     game_start = false;
   }
 }
 if(day == 'B' || day == 'b'){
   cout << endl;
   hark = false;
 }
 else if(day == 'S' || day == 's'){
   cout << endl;
   hark = false;
 }
 else{
   if(mon == true){
     tue = true;
   }
   tax_day--;
   debt_day--;
   mon = true;
 }
 if(money >= debt){
   hark = false;
   game_start = false;
 }
}
tue = false;
//stats & buy go below this line==
if(day == 'B' || day == 'b'){
 cout << endl << "What would you like to buy?\n\n1. Desperate Friend                    +1\n2. Worker                              +3\n3. Manager                             ×2\n4. Change Debt Payment Amount" << endl << endl << "Type number below or 'D' to quit.\n";
 cin >> buy_menu;
}
if(day == 'S' || day == 's'){
 cout << "\nDebt left: $" << debt << "\nMoney per turn: $" << product_worth << "\nWorkers: " << workers << "\nManagers: " << manager << "\nDays till taxes: " << tax_day << "\nDays till debt payment: " << debt_day << "\nDebt payments per month: $" << debt_payment << endl;//other stats go here
}
hark = true;
}
if(debt == 0){
cout << endl << "\nCongrats! You've paid off your debt and won the game.";//Replace this later
}
}
