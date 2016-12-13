#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
#include <fstream>

using namespace std;

int rollDice();
void diceNumOne();
void diceNumTwo();
void diceNumThree();
void diceNumFour();
void diceNumFive();
void diceNumSix();
int totDice = 0;

int rollDice(){
        srand (time(NULL));

        int n;
        n= rand();
        n = 1 + n % 6;
        //totDice = totDice + n;
        //cout << totDice << " TotDice "<< endl;
        
                switch (n){
                 case 1:
                        diceNumOne();
                        totDice = totDice + n;
                        cout  << " The total of all the roles is  " << totDice << endl  << " you have " << 21-totDice << " left till you go over 21!" << endl << endl ;
                        break;
                 case 2:
                        diceNumTwo();
                        totDice = totDice + n;
                        cout  << " The total of all the roles is  " << totDice << endl  << " you have " << 21-totDice << " left till you go over 21!" << endl << endl ;             
                        break;
                 case 3:
                        diceNumThree();
                        totDice = totDice + n;
                        cout  << " The total of all the roles is  " << totDice << endl  << " you have " << 21-totDice << " left till you go over 21!" << endl << endl ;               
                       break;
                 case 4:
                        diceNumFour();
                        totDice = totDice + n;
                        cout  << " The total of all the roles is  " << totDice << endl  << " you have " << 21-totDice << " left till you go over 21!" << endl << endl ;              
                        break;
                 case 5:
                        diceNumFive();
                        totDice = totDice + n;
                        cout  << " The total of all the roles is  " << totDice << endl << " you have " << 21-totDice << " left till you go over 21!" << endl << endl ;
                        break;
                 case 6:
                        diceNumSix();
                        totDice = totDice + n;
                        cout  << " The total of all the roles is  " << totDice << endl  << " you have " << 21-totDice << " left till you go over 21!" << endl << endl ;
                        break;
                 default:
                         cout<<"ERROR with case statement for random";
                        } 
            return 0;
    }  


void diceNumOne(){
        cout << " -----" << endl;
        cout << "|     |" << endl;
        cout << "|  O  |" << endl;
        cout << "|     |" << endl;
        cout <<  " -----" << endl;
        cout << " You rolled a 1 " << endl << endl;
    }
        
void diceNumTwo(){
        cout << " -----" << endl;
        cout << "|    O|" << endl;
        cout << "|     |" << endl;
        cout << "|O    |" << endl;
        cout <<  " -----" << endl;
        cout << " You rolled a 2 " << endl << endl;
    }
        
void diceNumThree(){
        cout << " -----" << endl;
        cout << "|    O|" << endl;
        cout << "|  O  |" << endl;
        cout << "|O    |" << endl;
        cout <<  " -----" << endl;
        cout << " You rolled a 3 " << endl << endl;
    }
            
void diceNumFour(){
        cout << " -----" << endl;
        cout << "|O   O|" << endl;
        cout << "|     |" << endl;
        cout << "|O   O|" << endl;
        cout <<  " -----" << endl;
        cout << " You rolled a 4 " << endl << endl;
    }
        
void diceNumFive(){
        cout << " -----" << endl;
        cout << "|O   O|" << endl;
        cout << "|  O  |" << endl;
        cout << "|O   O|" << endl;
        cout <<  " -----" << endl;
        cout << " You rolled a 5 " << endl << endl;
    }
    
void diceNumSix(){
        cout << " -----" << endl;
        cout << "|O   O|" << endl;
        cout << "|O   O|" << endl;
        cout << "|O   O|" << endl;
        cout <<  " -----" << endl;
        cout << " You rolled a 6 " << endl << endl;
    }

int runDiceGame(){
    char userChoice =' ';
        totDice=0;
        
        
            while (userChoice!='Q'){
                while(totDice <= 29){
                    if (totDice== 21){
                        cout << " You Won!!!" << endl;
                        cout << " You Won!!!" << endl << endl<< endl;
                        totDice=99;
                        
                    }
                    
                    else if (totDice > 21){
                        cout << " You went over 21! You Lost! " << endl << endl << endl << endl;
                         totDice=99;
                        
                    }
                    
                    else if (totDice!=99){
                        
                        cout<<"Type R to roll or Q to quit the game "<<endl;
                        char userChoice;
                        cin >> userChoice;
                                
                        if (userChoice=='r'){
                            rollDice();
                            }
                        else {
                                
                            exit (0);
                            }
                    }    
                }
               }
  return 0;      
}
int runPokerGame(){
    srand(time(0));
    int deck[52];
    int i;
    string cardSuit[4]={"\xe2\x99\xa4", "\xe2\x99\xa6", "\xe2\x99\xa7", "\xe2\x99\xa5"};
    string cardType[13]={"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
    
    // create a new deck, with cards in order, but unique
    for(i=0; i<52; i++)
    {
        deck[i] = i;
    }

    // shuffles the deck 
    for(i=0; i<52; i++)
    {
        // generate a random index to swap with the card at index i.
        int j = rand() % 52;
        int temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }


    // print all the cards
    for(i=0; i<52; i++)
    {
        int suitnumber = deck[i] / 13; // 0 - 3
        int type = deck[i] % 13;
        cout << i+1 << ".)  " << cardSuit[suitnumber] << " " << cardType[type] << "\n";
    }
    
    
    cout << endl << endl << "Your hand is " << endl;
    cout <<"_______________" << endl;
    
    // Get the type of the first 5 cards
    int T[5]; // = {4, 7, 6, 3, 5}; // type of the first 5 cards
    int S[5];
    for(i=0; i<5; i++)
    {
        T[i] = deck[i]%13;
        S[i] = deck[i]/13;
    }

    // Sort the T array
    bool swapped = false;
    do
        {
            // 1 pass of the bubble sort
            swapped = false;
            for(int i=0; i<4; i++)
            {
                if(T[i] > T[i+1])
                {
                    int temp = T[i];
                    T[i] = T[i+1];
                    T[i+1] = temp;
                    swapped = true;
                }
            }
        }
    while(swapped == true);

    // print the sorted types and suits
    
    for(i=0; i<5; i++)
    {
        cout  << cardType[T[i]] << " " << cardSuit[S[i]] << "\n";
    }
    cout << endl << endl;
    
    // Check first 5 cards for an ace
    int aceCount = 0;
    for(i=0; i<5; i++)
    {
        int acetype = 0;
        int currentCardtype = deck[i]%13;
        if(currentCardtype == acetype)
        {
            aceCount = aceCount +1;
        }
       
    }
    if (aceCount > 0){
    cout << "Your hand has " << aceCount << " Ace High!" << endl;
    }
    
//Check for Straight Flush
    if(S[0] == S[1] && S[1]==S[2] && S[2]==S[3] && S[3]==S[4])
            {
                if(T[1]==T[0]+1 && T[2]==T[1]+1 && T[3]==T[2]+1 && T[4]==T[3]+1){
                cout << "You got a Straight Flush! " << endl;
                }
                else
                    { 
                        cout << "You got a Flush!" << endl;
                    }
            }        
                
    // Check for a straight:
    else if(T[1]==T[0]+1 && T[2]==T[1]+1 && T[3]==T[2]+1 && T[4]==T[3]+1)
        {
            cout << "You got a Straight!" << endl;
        }
     
    // Check first 5 cards for 4 of a kind
    else if((T[0] == T[1] && T[1]==T[2] && T[2] == T[3] ) || 
       (T[0] == T[1] && T[1]==T[2] && T[2] == T[4] ) || 
       (T[0] == T[1] && T[1]==T[3] && T[3] == T[4] ) || 
       (T[0] == T[2] && T[2]==T[3] && T[3] == T[4] ) || 
       (T[1] == T[2] && T[2]==T[3] && T[3] == T[4] )) 
            {
                cout << "You got Four of a Kind!" << endl;
            }
            
    // Check first 5 cards for two pairs
    else if(((T[0] == T[1]) &&  (T[2]==T[3] ||  T[2]==T[4] || T[3]==T[4])) || 
       ((T[0] == T[2]) &&  (T[3]==T[4] ||  T[1]==T[3] || T[1]==T[4])) ||
       ((T[0] == T[3]) &&  (T[1]==T[4] ||  T[1]==T[2] || T[2]==T[4])) ||
       ((T[0] == T[4]) &&  (T[1]==T[2] ||  T[1]==T[3] || T[2]==T[3])) ||
       ((T[1] == T[2]) &&  (T[3]==T[4] ||  T[0]==T[3] || T[0]==T[4]))) 
    {
        cout << "You got Two Pairs!" << endl;
    }
    
    // Check first 5 cards for Full House 
    else if((T[0] == T[1] && T[1]==T[2] && T[3]==T[4] ) || (T[0] == T[1] && T[1]==T[3] && T[2]==T[4]) || (T[0] == T[1] && T[1]==T[4] && T[2]==T[3] ) || 
                (T[0] == T[2] && T[2]==T[3] && T[1]==T[4] ) || (T[0] == T[2] && T[2]==T[4]&& T[1]==T[3] ) || (T[0] == T[3] && T[3]==T[4] && T[1]==T[2]) ||
                (T[1] == T[2] && T[2]==T[3] && T[0]==T[4]) || (T[1] == T[2] && T[2]==T[4] && T[0]==T[3]) || (T[2] == T[3] && T[3]==T[4]&& T[0]==T[1] )) 
                       {
                            cout << "You got Full House!" << endl;
                        }
                        
  // Check first 5 cards for Three of a Kind
    else if((T[0] == T[1] && T[1]==T[2] ) || (T[0] == T[1] && T[1]==T[3] ) || (T[0] == T[1] && T[1]==T[4] ) || 
       (T[0] == T[2] && T[2]==T[3] ) || (T[0] == T[2] && T[2]==T[4] ) || (T[0] == T[3] && T[3]==T[4] ) ||
       (T[1] == T[2] && T[2]==T[3] ) || (T[1] == T[2] && T[2]==T[4] ) || (T[2] == T[3] && T[3]==T[4] )) 
            {
                cout << "You got Three of a Kind!" << endl;
            }

     // Check first 5 cards for any pair
    else if(T[0] == T[1] || T[1]==T[2] || T[2]==T[3] || T[3]==T[4])
    {
        cout << "You got a pair!" << endl;
    }
    
    return 0;
}
class RockPaperScissors{
    int countWin = 0;
    int countLoss = 0;
    int countScratch = 0;
    int runTimes = 0;
    int roundMax = 0;
    int userGuess = 0;
    int computerGuess = 0;
    string wordFromGuess;
    string wordFromComGuess;
    
 public:      // The class' public functions                                                              
        
                //Overload Consrctor
            RockPaperScissors(int rnd_)
            {
                userGuess= rnd_;
            };
          
                //Default Constructor
            RockPaperScissors()
            {
                
                roundMax =0;
                computerGuess=0;
                userGuess= 0;
                srand(time(0));
            };
// Computer input                
    int     SetComputerRockPaperScissors()
                {
                   computerGuess = (rand()%3 +1); 
                   //cout << "Computer Guess " << computerGuess << endl;
                 return 0;
                    
                }

    int     GetComputerRockPaperScissors()
                {   
                    return computerGuess;     
                }
                
 // Number of games       
    int     SetUserNumGamesRockPaperScissors()
                {
                    int valueTrue=0;
                    roundMax=0;
                    cout << "How many games do you want to play - Choices are 3, 5, or 7 rounds?" << endl;
                            cin>> roundMax;
                    while (valueTrue != 1) {
                        if (roundMax == 3){   
                            valueTrue = 1; 
                            }
                        else if (roundMax == 5){   
                            valueTrue = 1; 
                            }
                        else if (roundMax == 7){   
                            valueTrue = 1; 
                            } 
                        else { 
                            cout << "Please pick 3, 5, or 7!" << endl;
                            cout << "How many games do you want to play - Choices are 3, 5, or 7 rounds?" << endl;
                            cin>> roundMax;
                        }
                    return 0;}
                    
                        cout << "Lets play " << roundMax << " games!" << endl;
                }        

    int     GetUserNumGamesRockPaperScissors()
                {
                    return roundMax;     
                }
        
        
 // User Input       
    int     SetUserRockPaperScissors()
                {
                   cout << "Please enter your guess of items: ";
                   cout << "(1 for Rock), (2 for Paper), (3 for Scissors)" << endl;
                    userGuess=0;
                    cin >> userGuess;
                        if (userGuess > 3){
                                while (userGuess > 3) {
                                  cout << "(1 for Rock), (2 for Paper), (3 for Scissors)" << endl;
                                  cout << "Please Pick 1, 2, or 3" << endl;
                                  cin >> userGuess;
                                }}
                        if  (userGuess < 1){
                                while (userGuess < 1) {
                                      cout << "(1 for Rock), (2 for Paper), (3 for Scissors)" << endl;
                                      cout << "Please Pick 1, 2, or 3" << endl;
                                      cin >> userGuess;
                                    }
                            }
                        
                    //cout << "You input " << userGuess << " lets see what the computer picked" << " ";
                return 0;}       
                        

    int     GetUserRockPaperScissors()
                {
                    //cout << "UserGuess From Get " << userGuess << endl;
                    return userGuess;     
                }
// Converts numbers to words
    int SetUserNumToWords(int guess)
                {
                    //guess= GetUserRockPaperScissors();
                    //cout << " Switch Case int guess " << guess << " " << endl;
                    switch(guess)
                    {
                        case 1: 
                                wordFromGuess= "Rock";
                                break;
                        case 2:
                                wordFromGuess= "Paper";
                                break;
                        case 3:
                                wordFromGuess= "Scissors";
                                break;
                        default:
                                cout << "error in User switch case" << "**************";
                    }
               return 0; }
    string GetUserNumToWords(){
                return wordFromGuess;
            }
    
    int SetComputerNumToWords(int Cguess)
        {
            switch(Cguess)
            {
                case 1: 
                        wordFromComGuess= "Rock";
                        break;
                case 2:
                        wordFromComGuess= "Paper";
                        break;
                case 3:
                        wordFromComGuess= "Scissors";
                        break;
                        default:
                        cout << "error in Computer switch case" << "**************";
            }
       return 0; }        
        
        string GetComputerNumToWords(){
                return wordFromComGuess;
                }
        
            

int mainGame(){
    int countWin=0;
    int countLoss=0;
    int countScratch = 0;
    int runTimes = 0;
    int roundMax =0;
    int userGuess =0;
    int computerGuess=0;
   
   
   SetUserNumGamesRockPaperScissors();
   GetUserNumGamesRockPaperScissors();
   roundMax = GetUserNumGamesRockPaperScissors();
   
   
while (runTimes < roundMax){
         runTimes++;
    
    SetUserRockPaperScissors(); // working
    GetUserRockPaperScissors(); // working
    
    SetComputerRockPaperScissors(); // working
    GetComputerRockPaperScissors();// working
     
    SetUserNumToWords(GetUserRockPaperScissors());
    SetComputerNumToWords(GetComputerRockPaperScissors());
    
    cout << "You chose " << GetUserNumToWords();
    cout << " and the Computer chose " << GetComputerNumToWords();
    cout << endl << endl;
    
            computerGuess = GetComputerRockPaperScissors();
            userGuess = GetUserRockPaperScissors();
            
                if (userGuess == computerGuess){
                 cout << "Scratch!!!" << endl << endl;
                 countScratch= countScratch + 1;
                }
                
                else    {
                        switch (userGuess){
                            case 1: // 1 = Rock
                                    if (computerGuess==2){ // 2 = Paper
                                         cout << "Loss: Paper smothers Rock" << endl;
                                         countLoss = countLoss + 1;
                                        }
                                    else if (computerGuess==3){// 3 = Scissors
                                            cout << "Win: Rock beats Scissors" << endl;
                                            countWin = countWin + 1;
                                        } 
                                    break;    
                            case 2: // 2 = Paper
                                    if (computerGuess==1){// 1 = Rock
                                         cout << "Win: Paper smothers Rock" << endl;
                                         countWin= countWin + 1;
                                        }
                                    else if (computerGuess==3){ // 3 = Scissors
                                            cout << "Loss: Scissors cut Paper" << endl;
                                            countLoss = countLoss + 1;
                                        }
                                    break;
                            case 3: // 3 = Scissors
                                    if (computerGuess==1){// 1 = Rock
                                         cout << "Loss: Rock beats Scissors" << endl;
                                         countLoss= countLoss + 1;
                                        }
                                    else if (computerGuess==2){// 2 = Paper
                                            cout << "Win: Scissors cut Paper" << endl;
                                            countWin = countWin + 1;
                                        } 
                                    break;
                            }
                        } 
}   
            cout << endl <<"You Won " << countWin << " there was " << countScratch << " Scratch and Lost ";
            cout << countLoss << endl << endl;
    
                if ((countWin > countLoss) && (countWin >= countScratch)){
                    cout << "You the BIG Winner!!!" << endl;
                }
                
                else if ((countWin > countLoss) && (countWin < countScratch)){
                    cout << "You won but barely." << endl;
                }
                
                else if ((countWin < countLoss) && (countLoss = countScratch)){
                    cout << "You lost but barely." << endl;
                }
                else  {
                    cout << "You Lost Better Luck Next Time!" << endl;
                }
    
  return 0;}
};

char numBox[10] = {'o','1','2','3','4','5','6','7','8','9'}; 
int checkBoard(); 
void gameBoard(); 
// Draws TIC TAC TOE game board
            void gameBoard() { 
                        cout << "\n\n\tTic Tac Toe\n\n"; // Title
                        cout << "Player 1 (X) - Player 2 (O)"  << endl; //Player directions
                        
                        cout << "    ##################### " << endl; //Beginning of game board outside left
                        cout << "    #|     |     |     |# " << endl; // continue with game board frames inside R1
                        cout << "    #|  " << numBox[1] << "  |  " << numBox[2] << "  |  " << numBox[3] << "  |# " << endl; // the first row with dividers
                        cout << "    #|_____|_____|_____|# " << endl; // continue with game board frames inside R1
                        cout << "    #|     |     |     |# " << endl; // continue with game board frames outside right
                        cout << "    #|  " << numBox[4] << "  |  " << numBox[5] << "  |  " << numBox[6] << "  |# " << endl; // the second row with dividers
                        cout << "    #|_____|_____|_____|# " << endl; // continue with game board frames inside R2
                        cout << "    #|     |     |     |# " << endl; // continue with game board frames outside left
                        cout << "    #|  " << numBox[7] << "  |  " << numBox[8] << "  |  " << numBox[9] << "  |# " << endl; // the third row with dividers
                        cout << "    #|_____|_____|_____|# " << endl;  // continue with game board frames outside right
                        cout << "    ##################### " << endl << endl;}
      
      //Checks to see if one player has reached 3 in a row whether it is accross down or diagonal
            
            int checkBoard() { 
                    if (numBox[1] == numBox[2] && numBox[2] == numBox[3]) return 1;         // checks first row
                    else if (numBox[4] == numBox[5] && numBox[5] == numBox[6]) return 1;    // checks middle row
                    else if (numBox[7] == numBox[8] && numBox[8] == numBox[9]) return 1;    // checks last row
                    else if (numBox[1] == numBox[4] && numBox[4] == numBox[7]) return 1;    // checks first column
                    else if (numBox[2] == numBox[5] && numBox[5] == numBox[8]) return 1;    // checks middle column
                    else if (numBox[3] == numBox[6] && numBox[6] == numBox[9]) return 1;    // checks last column
                    else if (numBox[1] == numBox[5] && numBox[5] == numBox[9]) return 1;    // checks diagonal 1-9
                    else if (numBox[3] == numBox[5] && numBox[5] == numBox[7]) return 1;    // checks diagonal 3-7
                    else if (numBox[1] != '1' && numBox[2] != '2' && numBox[3] != '3'&& numBox[4] != '4' && numBox[5] != '5' 
                            && numBox[6] != '6' && numBox[7] != '7' && numBox[8] != '8' && numBox[9] != '9') return 0; // Checks to see if they are not equal to  keep going
                else return -1; } 

int runTicGame(){
    int player = 1,i,choice; 
    char placePiece; 
    do {    gameBoard(); 
            player=(player%2)?1:2; 
            cout << "Player " << player << ", enter a number: "; 
            cin >> choice; 
            placePiece=(player == 1) ? 'X' : 'O'; 
            if (choice == 1 && numBox[1] == '1') numBox[1] = placePiece;  // this iw where it see what the user typed in and marks the correct box for the choice.
            else if (choice == 2 && numBox[2] == '2') numBox[2] = placePiece; 
            else if (choice == 3 && numBox[3] == '3') numBox[3] = placePiece; 
            else if (choice == 4 && numBox[4] == '4') numBox[4] = placePiece; 
            else if (choice == 5 && numBox[5] == '5') numBox[5] = placePiece; 
            else if (choice == 6 && numBox[6] == '6') numBox[6] = placePiece; 
            else if (choice == 7 && numBox[7] == '7') numBox[7] = placePiece; 
            else if (choice == 8 && numBox[8] == '8') numBox[8] = placePiece; 
            else if (choice == 9 && numBox[9] == '9') numBox[9] = placePiece; 
            else { cout<<" Invalid move "; 
            player--; 
            cin.ignore(); 
            cin.get(); } 
            i=checkBoard(); 
            player++; }
            
            while(i==-1); 
            gameBoard(); 
            if(i==1) cout<<"==> Player "<<--player<<" win "; 
            else cout<<"==> Draw Nicely Played"; 
            cin.ignore(); 
            cin.get(); 
            return 0; 
}

int main(){
    int userChoice = 0;
  
  cout << "Please select one of the following games to play. (press the number for the game)." << endl;
  cout << "1. for DiceJack - roll the dice to get as close to 21 as possible without going over." << endl;
  cout << "2. for A hand of poker - deals out five cards that were shuffled and see if you were dealt a winning hand like a pair." << endl;
  cout << "3. for TicTacToe - A game for two players." << endl;
  cout << "4. for Rock Paper Scissors. Play against the computer." << endl;
  
  cin >> userChoice;
  
  switch(userChoice)
  {
        case 1:    //#include "DiceJack.h"
                   runDiceGame();
                    break;
    
        case 2:     //#include "PokerHand.h"
                    //#include "PokerHand.cpp"
                    runPokerGame();
                    break;
        
        case 3:     //#include "TicTacToe.h"
                    //#include "TicTacToe.cpp"
                    runTicGame();
                    break;        
                    
        case 4:     //#include "RockPaperScissors.h"
                    //#include "RockPaperScissors.cpp"
                    RockPaperScissors game1;
                    game1.mainGame();
                    break;
                    
        //default:  cout << "Please pick a number 1 - 4."  << endl;          
  }
};

