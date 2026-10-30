#include <iostream>
#include <string> 
#include <ctime>
#include <cstdlib>

using namespace std ;

void adamak(int mistakes) {

    cout << "  +---+" << endl ;
    cout << "  |   |" << endl ;
    if (mistakes >= 1) {
        cout << "  O   |" << endl ;
    }
    else {
        cout << "      |" << endl ;
    }
    if (mistakes >= 4) {
        cout << " /|\\  |" << endl ;
    }
    else if (mistakes >= 3) {
        cout << " /|   |" << endl ;
    }
    else if (mistakes >= 2) {
        cout << "  |   |" << endl ;
    }
    else {
        cout << "      |" << endl ;
    }
    if (mistakes >= 6) {
        cout << " / \\  |" << endl ;
    }
    else if (mistakes >= 5) {
        cout << " /    |" << endl ;
    }
    else {
        cout << "      |" << endl ;
    }

    cout << "=========" << endl ;
}

int main(){
    
    string name , last_name ;
    cout<< "name : " ;
    cin>> name ;
    cout<< "last_name : " ;
    cin>> last_name ;

    string words[30] = {
        "Cat", "Dog", "Sun", "Moon", "Star",
        "Fish", "Book", "Tree", "Rain", "Fire",
        "Apple", "House", "Water", "Music", "Happy",
        "Tiger", "Cloud", "Beach", "Chair", "Pizza",
        "Elephant", "Computer", "Mountain", "Butterfly", "Chocolate",
        "Giraffe", "Umbrella", "Adventure", "Knowledge"
    } ;

    srand(time(0)) ;
    int l = 0 , d = 0 , b = rand() % 30 , m , mistakes = 0 ;
    string s = words[b] , k ;
    char a ;
    bool dorost = false ;
    b = 6 ;
    int tries = 6 ;

    for(int i = 0 ; i < s.length() * 2 ; i += 2){
        k += '_' ;
        k += " " ;
    } 
    for(int i = 0 ; i < k.length() ; i++){
        cout<< k[i] ;
    }
    
    while(b){

        cin>> a ;

        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] <= 'Z' && s[i] >= 'A'){
                s[i] = s[i] - 'A' + 'a' ;
            }
            if(s[i] == a){
                k[d] = s[i] ;
                dorost = true ;
                l++ ;
                b++ ;
            }
            d += 2 ;
        }
        b-- ;

        if(dorost == true){
            cout<< endl 
                << "currect " << endl << "tries remaining : " << tries
                << endl ;
            for(int i = 0 ; i < s.length() * 2 ; i += 2){
                    cout<< k[i] << " " ;
            } 
        }

        else {
                mistakes++;
                tries-- ;
                cout << endl
                    << "Wrong" << endl
                    << "tries remaining : " << tries
                    << endl ;

                for (int i = 0; i < k.length(); i += 2) {
                    cout << k[i] << " " ;
                }

                cout << endl;
                adamak(mistakes) ;
        }
        if(l == s.length()){
            break ;
        }
        dorost = false ;
        d = 0 ;
    }

    for(int i = 0 , p = 0 ; i < s.length() ; i++){
        if(s[i] == k[p]){
            dorost = true ;
        }
        else{
            dorost = false ;
            break ;
        }
        p += 2 ;
    }   

    if(dorost == true){
        cout<< endl << "GG" ;
        cout<< endl << "word : " << s << endl ;
    }
    else{
        cout<< endl << name << " siah badbakht " << endl  ;
        cout<< endl << "word : " << s << endl ;
    }

    system("pause") ;
    return 0 ;
}