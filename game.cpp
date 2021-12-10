#include <iostream>
using namespace std;
int main() {
int days;
int tax_day = 366;
int debt_day = 30;
long long int tax_collection;
int whilen;
int workers = 0;
int manager = 0;
int friends = 0;
int bn;
int bma;
int mbma = 100;
int subb;
int mi;
int bc[4] = {1,2,3,4};
int n = 0;
long int worker_worth;
long int worker_help = 1;
long int manager_n = 100;//manager number multiplier
long int debt_payment;
long long int day_counter = -1;
long long int total_money = 0;
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
bool bm1 = false;
bool buy_menu_start = false;
bool buyb;
bool kd = false;
bool w = false;
bool ma = false;
bool sb = false;
bool else_loop = true;
int k;
float product_worth;
float product_set;
long int debt; //overall debt
long int start_debt;
long long int money = 0;
cout << "\033[2J\033[0;0H\nYou’ve just graduated college but while you were there you made\na lot of bad decisions. You’re in a lot of debt. You have no\nmoney and no job to pay it off with. But suddenly you get an\nidea. You want to start a business. But what will you sell?\n";
getline(cin, product);
cout << "\033[2J\033[0;0H\nAlright, a little random but I guess that should be expected.\nHow much do you think they're worth?(Dont use the $ sign)\n";
while(start){
cin >> product_worth;
product_set = product_worth;
if(product_worth >= 1000000){
cout << "\033[2J\033[0;0H\nDoesn't that sound a little exaggerated to you? Please answer\nseriously this time.\n";
}
else if(product_worth <= 0){
cout << "\033[2J\033[0;0H\nVery funny. Now please be seriouse.\n";
}
else{
start = false;
}
}
debt_payment = product_set * 35;
debt = product_worth * 1000000;
start_debt = debt;
cout << "\033[2J\033[0;0H\nGreat, now you can have a way of paying off your $" << debt << " \ndebt. By the way, we should probably talk about those bad \ndecisions. But first I should probably tell you how to run your\nbusiness. Simply press enter if you want to sell things. Once\nyou gain enough money you can buy workers to increase your earnings.\nJust remember that you should never spend all your money at once.\nIf you do and can't pay off your debts then they may possess the\nrest of your things including your business. If that happens\nit'll be over. If you want to buy something type 'B'. If\nyou want to check your information type 'S'. Once\nyou get to $" << product_set * 10 << " you should try to buy something.\nThat's all you should worry about for now.\nPress 'enter' to sell your first product.\n";
//What ever else goes here.
//start loop
while(game_start){
while(hark){
cin.get(day);
if(mon == true && tue == true){
if(sb == true){
  cout << "\033[2J\033[0;0H";
  sb = false;
}
cout << "$" << money << " ";
money = money + product_worth;
total_money = total_money + product_worth;
tax_collection = total_money / 10;
day_counter++;
}
if(tax_day == 0){
money = money - tax_collection;
cout << endl << "\nIt's time to pay your taxes. -$" << tax_collection << endl;
tax_day = 365;
}
if(debt_day == 0){
money = money - debt_payment;
cout << "\n\nIt's time for your debt payment. -$" << debt_payment << endl;
debt = debt - debt_payment;
debt_day = 30;
if(money <= 0){
  cout << "You ran out of money. The bank reposessed your things. \nYou tried at least.";
  hark = false;
  game_start = false;
}
}
if(day == 'B' || day == 'b'){
cout << endl;
hark = false;
buy_menu_start = true;
buyb = true;
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
money = money - product_worth;
debt_day++;
money = money - product_worth;
day_counter--;
tax_day ++;
while(buy_menu_start){
  else_loop = true;
  while(else_loop == true){
cout << "\033[2J\033[0;0H\nWhat would you like to buy?\nMoney left $" << money <<"\n\n";
if(product_set <= 1000){
cout << bc[n] << ". Friend               +" << product_set << "     -$" << product_set * 10;
n++;
worker_worth = product_set * 40;
worker_help = product_set  *5 ;
bm1 = true;
cout << endl;
//friend
}
else{
worker_worth = product_set * 10;
}
cout << bc[n] << ". Worker               +" << worker_help << "     -$" << worker_worth;
n++;
cout << endl;
//worker
cout << bc[n] << ". Manager              ×2     -$" << product_set * manager_n;
n++;
cout << endl;
//manager
cout << bc[n] << ". Change debt payment amount";
cout << endl;
cout << endl << "Type number below or 'D' to exit.\n";
n = 0;
cin >> buy_menu;
  
if(bm1 == true){
if(buy_menu == '1'){
  bma = product_set * 10;
  k = 1;
  kd = true;
  w = true;
  else_loop = false;
}
else if(buy_menu == '2'){
  bma = product_set * 40;
  k = 2;
  kd = true;
  w = true;
  else_loop = false;
}
else if(buy_menu == '3'){
  bma = 0; // mangaer = change later
  k = 3;
  w = true;
  ma = true;
  else_loop = false;
 }
else if(buy_menu == '4'){
  buyb = false;
  cout << "\nWhat would you like to change it to?\n";
  cin >> debt_payment;
  else_loop = false;
}
else if(buy_menu == 'D' || buy_menu == 'd'){
  buy_menu_start = false;
  buyb = false;
  cout << "\033[2J\033[0;0H";
  else_loop = false;
}
else{
  cout << "\nPlease type a number or 'D' to exit.";
}
//  end of friend possitive answers

}
else{
if(buy_menu == '1'){
  bma = 10;
  k = 1;
  kd = true;
  else_loop = false;
}
else if(buy_menu == '2'){
  bma = 0; //manager
  k = 3;
  ma = true;
  else_loop = false;
}
else if(buy_menu == '3'){
  buyb = false;
  cout << "what would you like to change it to?";
  cin >> debt_payment;
  else_loop = false;
}
else if(buy_menu =='D' || buy_menu == 'd'){
  buy_menu_start = false;
  buyb = false;
  cout << "\033[2J\033[0;0H";
  else_loop = false;
}
else{
  cout << "\nPlease type a number or 'D' to exit.";
}
//end of buy menu answers
}
  }
if(buyb == true){

cout << "\nHow many?\n";
cin >> bn;
if(ma == true){
  whilen = bn;
  while(whilen > 0){
  //kdjkcjdkckckekscmk manager kdfkdjdjmdmkdk
  subb = manager_n;
  
  if(money < subb){
    cout << "\033[2J\033[0;0H\nYou do not have enough money\n";
    whilen = 0;
   }
   else{
  money = money - subb;
  manager_n = manager_n * 2;
  mbma = mbma * 2;
  whilen--;
  product_worth = product_worth * 2;
   }
  }
}
else{
  subb = bn * bma;
}
if(money < subb){
  if(ma != true){
  cout << "\033[2J\033[0;0H\nYou do not have enough money.\n";
  }
}
else{
if(k == 1){
  mi = product_set *bn;
  if(w == true){
    friends = friends + bn;
  }
  else{
    workers = workers + bn;
  }
}
else if(k == 2){
  mi = product_set * 5 * bn;
  if(w == true){
    workers = workers + bn;
  }
  else{
    manager = manager + bn;
  }
}
else if(k == 3){
  if(w == true){
    manager = manager + bn;
  }
  while (bn >= 2){
  product_worth = product_worth + product_worth;
  bn--;
  }
  mi = product_worth;
}
if(kd == true){
  product_worth = product_worth + mi;
}
if(ma != true){
money = money - subb;
}
}
}
}
ma = false;
}
// here for buy menu
if(day == 'S' || day == 's'){
day_counter--;
debt_day++;
money = money - product_worth;
money = money - product_worth;
cout << "\033[2J\033[0;0H\nDebt left: $" << debt << "\nMoney per turn: $" << product_worth;
if(product_set <= 1000 ){
cout << "\nFriends: " << friends;
}

cout << "\nWorkers: " << workers << "\nManagers: " << manager << "\nDays till taxes: " << tax_day << "\nDays till debt payment: " << debt_day << "\nDebt payments per month: $" << debt_payment << endl << "Day: " << day_counter << endl;
sb = true;
//other stats go here
}
hark = true;
}
if(debt == 0){
cout << endl << "\nWow! You actually paid off your" << start_debt << "debt! Who knew your" << product << "would actually sell? And it only took you "<< day_counter << "days. ";
}

}
