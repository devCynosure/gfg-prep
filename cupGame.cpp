#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    srand((unsigned) time(0));
    int n = 0;
    int player1 = 0, player2 = 0;
    cout<<" Choose player 1 or player2 ";
    cin>> n;
    if(n >= 1 && n <= 2){
        if(n == 1){
            player1 = 1;
        }
        else {
            player2 = 1;
        }

        n = 1 + (rand() % 500); // 1 - 500
        cout<<"Random Cups No(s) "<<n<<"\n";
        if(player1 == 1){
            if( n % 2 != 0 ){
                cout<<"Player1 won ";
            }
            else{
                cout<<"Player2 won ";
            }
        }
        else if(player2 == 1){
            if(n % 2 != 0){
                cout<<"Player2 won ";
            }
            else{
                cout<<"Player1 won ";
            }
        }
    }
    else {
        cout<<"Choose player 1 or 2 only ";
        exit(0);
    }
}