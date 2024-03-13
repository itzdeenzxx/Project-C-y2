#include <cstdlib> // random
#include <cstring>
#include <ctime>
#include <iostream>
#include <string.h>
#include <unistd.h> //sleep
using namespace std;
// เหลือ 1 class ไว้ล่าเงิน
/** File **/
FILE *fpt, *umy;

// Global_variable
char user[20], pass[10];
float MONEY = 0;

// Class
class SystemGame {
public:
  SystemGame() { cout << "\t\t\tWelcome to 3KONPOH888!!\n"; } // Constructor
  void slot();       //เกมสล็อต
  void slot_title(); //หน้าเกมสล็อต

  void football();       //เกมเตะฟุตบอล
  void football_title(); //หน้าเกมเตะฟุตบอล

  void rockpaper();       //เกมเป่ายิ่งฉุบ
  void rockpaper_title(); //หน้าเกมเป่ายิ่งฉุบ

  void horse();       //เกมแทงม้า
  void horse_title(); //หน้าเกมแทงม้า

  void blackjack();       //เกมแบล็คแจ็ค
  void blackjack_title(); //หน้าเกมแบล็คแจ็ค

  void High_Low();        //เกมไฮโร
  void Hight_Low_title(); //หน้าเกมไฮโร

  void Tiger_Dragon();       //เกมพยัคฆ์มังกร
  void Tiger_Dragon_title(); //หน้าเกมพยัคฆ์มังกร
};
class clear : public SystemGame{
	public :
		int a;
		void endpro(){
      cout << "\t\t\tDirected by. " << endl;
			cout << "\t\t\t6530200223 Thanes Wanitchakorn" << endl;
			cout << "\t\t\t6530200231 Teerakorn Tangwatanakit" << endl;
			cout << "\t\t\t6530200894 Addeen Salaehsakul" << endl;
		}
};

void SystemGame::slot_title() {
  cout << "\033[32;1;4m"
       << "\t\t\t--- SLOTMACHINE ---\n"
       << "\033[0m" << endl;
}
void SystemGame::slot() {
  char con;
  char answer;
  int choice, multiply;
  string result[3];
  string ch_array[5] = {"B", "A", "C", "G", "7"};
  while (true) {

    cout << "\033[2J\033[1;1H";
    SystemGame::slot_title();
    cout << "20 baht/turn\nConfirm (Y/N) : ";
    cin >> answer;
    if (answer == 'Y' || answer == 'y') {
      cout << "How many multiply : ";
      cin >> multiply;
      MONEY -= (20 * multiply); //หักเงิน
      if (MONEY < 0) { //ตรวจสอบว่าเงินพอมั้ย
        cout << "Your money is not enough !\n"; //ไม่พอ เลยเพิ่มเงินคืน
        MONEY += (20 * multiply);
        return;
      }
      srand(time(0));
      int randomch;
      cout << "\033[2J\033[1;1H";
      SystemGame::slot_title();
      for (int slot_loop = 0; slot_loop < 3; slot_loop++) {
        randomch = rand() % 5;
        result[slot_loop] = ch_array[randomch];
      }
      cout << "Loading ..." << endl;
      cout << " ";
      sleep(2);
      cout << "\033[2J\033[1;1H";
      SystemGame::slot_title();
      cout << "\t\t⠀ ⣀⣤⣴⣶⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣶⣤⣤⣀\n"
           << "\t\t  ⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿\n"
           << "\t\t   ⢀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⡀\n"
           << "\t\t   ⢸⣿⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⣿⡇⠀⠀⣤⣄\n"
           << "\t\t   ⢸⣿⠀⢸⣿⣿⡇⢸⣿⣿⡇⢸⣿⣿⡇⠀⣿⡇⠀⠀⠛⠛\n"
           << "\t\t   ⢸⣿⠀⢸ "
           << "\033[33;1m" << result[0] << "\033[0m"
           << "⡇⢸ "
           << "\033[33;1m" << result[1] << "\033[0m"
           << "⡇⢸ "
           << "\033[33;1m" << result[2] << "\033[0m"
           << "⡇⠀⣿⡇⠀⠀⣷\n"
           << "\t\t   ⢸⣿⠀⢸⣿⣿⡇⢸⣿⣿⡇⢸⣿⣿⡇⠀⣿⡇⠀⣾⡇\n"
           << "\t\t   ⢸⣿⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣿⡇⠀⣿⡿\n"
           << "\t\t   ⠈⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠁⠀⠙⠃\n"
           << "\t\t ⢀⣴⣿⠟⠛⠛⢻⡿⠛⠛⠛⢻⣿⣿⡟⠋⠉⠉⠛⢿⣦⡀\n"
           << "\t\t⢰⣿⣿⣥⣤⣤⣤⣾⣧⣤⣤⣤⣿⣿⣿⣷⣦⣤⣤⣶⣿⣿⣿⡆\n"
           << "\t\t⠈⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n"
           << "\t\t ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n"
           << "\t\t ⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉\n";
      cout << endl;
      cout << "\t\t-----------------------------" << endl;
      cout << "\t\t-----------------------------" << endl;

      if (result[0] == result[1] && result[1] == result[2]) {
        cout << "\t\tCongreatulation !!";
        cout << "You get : " << (50 * multiply) << " Bhath\n";
        MONEY += (50 * multiply);
      }

      cout << "\t\tContinue ( Y/N ) :";
      cin >> con;
      if (con == 'N' || con == 'n') {
        cout << "\033[2J\033[1;1H";
        break;
      }
    } else {
      cout << "\033[2J\033[1;1H";
      return;
    }
  }
  //ลองอีกครั้งและตรวจสอบยอดเงิน
}

void SystemGame::football_title(){
    cout  << "\033[2J\033[1;1H";
    
    cout  << "\t\t\t⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶\n"
              "\t\t\t⣿⣿⡏⠉⠉⠉⣉⠉⠉⠉⡉⠉⠉⢉⡉⠉⠉⢉⠉⠉⠉⣉⠉⠉⠉⢹⣿⣿\n"
              "\t\t\t⣿⣿⡇⠀⠀⠀⣿⠀⠀⠀⡇⠀⠀⢸⡇⠀⠀⢸⠀⠀⠀⣿⠀⠀⠀⢸⣿⣿\n"
              "\t\t\t⣿⣿⡇⠶⠶⠶⣿⠶⠶⢾⣿⠶⠶⠾⠷⠶⠶⣿⡷⠶⠶⣿⠶⠶⠶⢸⣿⣿\n"
              "\t\t\t⣿⣿⡇⠀⠀⠀⣿⠀⠀⠀⡇ ⢠⣶⣶⡄⠀⢸⠀⠀⠀⣿⠀⠀⠀⢸⣿⣿\n"
              "\t\t\t⣿⣿⡇⠿⠿⠿⣿⠿⠿⠿⡿⠀⢿⣿⣿⡿⠀⢿⠿⠿⠿⣿⠿⠿⠿⢸⣿⣿\n"
              "\t\t\t⣿⣿⡇⠀⠀⠀⣿⠀⠀⢀⡇⢀⣨⣿⣿⣥⡀⠸⡀⠀⠀⣿⠀⠀⠀⢸⣿⣿\n"
              "\t\t\t⣿⣿⡇⠛⠛⠛⣿⠛⠛⠛⢀⣿⣿⣿⣿⣿⣿⡄⠛⠛⠛⣿⠛⠛⠛⢸⣿⣿\n"
              "\t\t\t⣿⣿⡇⣀⣀⣀⣿⣀⣀⡀⢸⣿⣿⣿⣿⣿⣿⡇⢀⣀⣀⣿⣀⣀⣀⢸⣿⣿\n"
              "\t\t\t⣿⣿⡇⠛⠛⠛⣿⠛⠛⠃⠘⠛⣿⣿⣿⣿⠛⠃⠘⠛⠛⣿⠛⠛⠛⢸⣿⣿\n"
              "\t\t\t⣿⣿⡇⣀⣀⣀⣿⣀⣀⣠⣧⠀⣿⣿⣿⣿⠀⣼⣄⣀⣀⣿⣀⣀⣀⢸⣿⣿\n"
              "\t\t\t⣿⣿⡇⠉⠉⠉⠉⠉⠉⠉⠉⠀⢻⣿⣿⣿⠀⠉⠉⠉⠉⠉⠉⠉⠉⢸⣿⣿\n"
              "\t\t\t⠛⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠋⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠛⠛\n"
            "\t\t\t    ⡀⠄⣩⠿⠿⠿⣿⡿⠿⠛⠶⣤⣀\n"
            "\t\t\t ⡠⠊⠁⡠⠊⠀⠀⠀⠀⠀⢣⠀⠀⠀⠀⠙⠷⣄\n"
        	"\t\t\t⣔⣠⣴⣾⠀⠀⠀⠀⠀⠀⠀⢘⣄⡀⠀⠀⠀⠀⢹⣧\n"
        	"\t\t\t⡜ ⣼⣿⣿⣿⣇⣀⠀⠀⠀⢀⣴⣿⣿⣿⣶⣄⠤⠜⢿⣧\n"
  			"\t\t\t⢰⢁⣿⣿⣿⡿⠁⠀⠀⠉⠉⢻⣿⣿⣿⣿⣿⣿⠀⠀⠀⢻⡄\n"
  			"\t\t\t⢸⡘⠛⠿⡟⠁⠀⠀⠀⠀⠀⠀⢻⣿⣿⣿⣿⡏⠀⠀⠀⢸⡇\n"
       		"\t\t\t⢸⡇⠀⠀⠘⡄⠀⠀⠀⠀⠀⠀⡜⠉⠉⠉⠉⠱⡀⠀⠀⡜⡇\n"
        	"\t\t\t ⢧⠀⠀⠀⠘⣄⡀⠀⠀⢀⠞⠀⠀⠀⠀⠀⠀⠘⣤⣤⣶⢱⠁\n"
        	"\t\t\t ⢆⠀⠀⢠⣿⣿⣿⣿⣿⡄⠀⠀⠀⠀⠀⢀⣼⣿⣿⡿⠃\n"
        	"\t\t\t ⠈⠫⡑⠺⣿⣿⣿⣿⣿⣿⣄⣀⡀⠠⠤⣾⣿⣿⠟⠁\n"
          	"\t\t\t ⠈⠒⠤ ⣉⠻⢿⠛⠉⠀⠀⠀⠀⣀⡨⠛⠁\n"
            "\t\t\t     ⠉⠐ ⠓⠒⠒⠒⠈⠉\n";  
}

void SystemGame::football() { 
  int shoot, j, k, l,round;
  float bet;
  char con;
  while (true) {
    cout << "\033[2J\033[1;1H";
    football_title();
    cout << "Enter your bet : ";
    cin >> bet;
    MONEY -= bet;
    if (MONEY < 0) { //ตรวจสอบว่าเงินพอมั้ย
      cout << "Your money is not enough !\n"; //ไม่พอ เลยเพิ่มเงินคืน
      MONEY += bet;
      cout << "\033[2J\033[1;1H";
      break;
    }
    cout << "\033[2J\033[1;1H";
    for (round = 0; round < 9; round++) {
	    int goal_Keeper = 0;
      srand(time(0));
      goal_Keeper = rand() % 3 + 1;
	cout  << "\033[4m\033[1m\033[92m\t\t\t\t FOOTBALLPREDICTION\n"<<"\033[0m" << endl; //สีเขว
      football_title();

      cout << endl;
      cout << "\t\tLEFT";
      cout << "\t\t\tCENTER";
      cout << "\t\t\t\tRIGHT";
      cout << endl << endl;

      cout << "\033[31;1;4m"
           << "Round " << round + 1 << "\033[0m" << endl;
      cout << "Choose your shooting direction - \033[4m\033[1m\033[32m1. Left 2. Center 3. Right 4. Exit\n\033[0m\n "
           << "Select :";
      cin >> shoot;
      if ((shoot) == 4) {
        cout << "Exit\n";
        round += 9;
      } else if ((shoot) != goal_Keeper) {
        bet *= 1.75;
        cout << "\033[36m"
             << "\n PERFECT \n"
             << "\033[0m";
        sleep(1);
      } else {
        cout << "\033[31m"
             << " SAFE !! "
             << "\033[0m" << endl
             << endl;
        bet *= 0;
        round += 9;
		
      }
        
    }
    MONEY += bet;
    cout << "Your money: " << MONEY << endl;
    cout << "Continue (Y/N): ";
    cin >> con;
    if (con == 'N' || con == 'n') {
      cout << "\033[2J\033[1;1H";
      break;
    }
  }
}
void SystemGame::rockpaper_title() {
  cout << "\033[2J\033[1;1H";
  cout << "\t\t\t    ⣀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⡀⠀⠀⠀⠀\n"
          "\t\t\t⠀⢀⣠⢋⡀⠔⠀⠉⠲⢤⢤⡀⠀⠀⠀⠀⠀⠀⠀⢀⠜⠁⠀⣸⠀⠀⠀⠀\n"
          "\t\t\t⡞⠁⠈⠀⠀⠀⠀⢠⠤⠌⣇⢱⢸⠉⠉⢳⠀⠀⡠⠋⠀⠀⡔⡡⠔⠒⠲⡄\n"
          "\t\t\t⡸⠒⠤⠀⠀⠀⠠⠴⢒⣂⢸⢸⠀⢧⠀⠀⡧⠊⠀⠀⢀⠞⠉⠀⠀⣀⠴⠃\n"
          "\t\t\t⢧⡀⠀⠀⠀⠀⠀⠈⠉⢀⠞⠋⠀⠸⠀⠀⠀⠀⠀⠠⠃⠀⢀⣤⠮⠥⠤⢤\n"
          "\t\t\t⠀⠙⢍⣁⣀⣀⣀⠤⠖⠁⠀⠀⠠⢇⢀⡴⠂⣠⠀⠀⠀⠠⠋⠀⢀⡠⠴⠚\n"
          "\t\t\t⠀⠀⢀⡤⣄⡤⠴⠒⡲⠤⡀⠀⢰⡘⣌⠐⣊⠤⠀⠀⠀⢀⠴⠊⠁⠀⠀⠀\n"
          "\t\t\t⠀⢠⢋⡞⣁⡀⠀⠀⠘⢤⣘⡄⠀⠑⢌⣳⠤⠤⠤⠴⠚⠁⠀⠀⠀⠀⠀⠀\n"
          "\t\t\t⠀⡇⡜⢐⠦⣈⡀⠀⠀⠀⠀⠈⠉⠉⠉⠒⢦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
          "\t\t\t⠀⠉⢣⠈⠓⠀⠁⠀⠀⠐⠂⠠⢤⡤⠤⢄⡸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
          "\t\t\t⠀⠀⠀⠳⣄⠀⠀⠀⠀⣀⡀⠀⠀⠉⠲⢄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
          "\t\t\t⠀⠀⠀⠀⠈⠙⠒⠤⠔⠒⠉⠑⠢⢄⡀⢨⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
          "\t\t\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀\n";
}
void SystemGame::rockpaper() {
  const char *result[3] = {"Rock", "Paper", "Scissors"};
  int choose, bet;
  rockpaper_title();
  cout << "\t\t\t=== Rock Paper Scissors ===";
  cout << "\n\t\t\tEnter your Bet :  ";
  cin >> bet;
  MONEY -= bet;
  if (MONEY < 0) { //ตรวจสอบว่าเงินพอมั้ย
    cout << "Your money is not enough !\n"; //ไม่พอ เลยเพิ่มเงินคืน
    MONEY += bet;
    sleep(2);
    cout << "\033[2J\033[1;1H";
    return;
  }
  cout << "\033[2J\033[1;1H";
  for (int round = 0; round < 3; round++) {
    cout << "\033[2J\033[1;1H";
    int bot = rand() % 3;
    rockpaper_title();
    cout << "\n\t\t\t1. Rock \n\t\t\t2. Paper \n\t\t\t3. "
            "Scissors\n\t\t\tSelect : ";
    cin >> choose;

    char p1[20], p2[20];
    strcpy(p1, result[choose - 1]);
    strcpy(p2, result[bot]);
    cout << "\t\t\t--------------------------------------\n";
    cout << "\033[36m"
         << "\t\t\t\tYou"
         << "\033[0m";
    cout << "\033[31;1;4m"
         << "\t\t\t\t\t\tComputer"
         << "\033[0m" << endl;
    cout << "\t\t\t\t" << p1;
    cout << "\t\t\t\t\t" << p2 << endl;
    cout << "\t\t\t--------------------------------------\n";
    if (strcmp(p1, "Paper") == 0 && strcmp(p2, "Rock") == 0) {
      cout << "\t\tYou win!" << endl;
      MONEY += bet * 1.75;
      sleep(2);
    } else if (strcmp(p1, "Scissors") == 0 && strcmp(p2, "Paper") == 0) {
      cout << "\t\tYou win!" << endl;
      MONEY += bet * 1.75;
      sleep(2);
    } else if (strcmp(p1, "Rock") == 0 && strcmp(p2, "Scissors") == 0) {
      cout << "\t\tYou win!" << endl;
      MONEY += bet * 1.75;
      sleep(2);
    } else if (strcmp(p1, p2) == 0) {
      cout << "\t\tDraw!" << endl;
      sleep(2);
    } else {
      cout << "\t\tYou lose!" << endl;
      sleep(2);
    }
  }
  cout << "\nFinal money: " << MONEY << " baht" << endl;
  sleep(2);
  cout << "\033[2J\033[1;1H";
}
void SystemGame::horse_title() {
  cout << "                         ⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
       << "                     ⠀⠀⠀⢱⠐⠄⠙⠽⡲⣤⡀⠀⠀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
       << "                     ⠀⠀⠀⡾⠃⠀⠀⢀⠈⠻⣿⣿⣶⡶⢃⣧⡀⠀⠀⠀⠀⠀⠀\n"
       << "                     ⠀⠀⡼⣧⣀⣠⡴⠀⢂⠀⠙⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀\n"
       << "                     ⢸⣅⣩⠟⠁⢰⠀⠸⡄⠀⠐⢻⣿⣿⡿⠂⠀⠀⠀⠀\n"
       << "                     ⠈⠙⠁⠀⠀⢀⠀⠀⡇⠀⠀⠄⠻⠿⢷⣋⣀⠀⠀⠀\n"
       << "                     ⠀⠀⠀⠀⠀⠀⣸⠀⢠⠇⢀⡜⠀⠀⠐⡄⠀⠀⠈⠈⠐⢤⡀⠀⠀\n"
       << "                     ⠀⠀⠀⠀⠀⢠⡏⠀⢈⡴⠋⠀⠀⠀⠀⡗⠀⠀⠀⠀⠀⠀⢻⣿⣶⣦⣄⠀\n"
       << "                     ⠀⠀⠀⠀⠀⡾⠀⡄⡎⠀⠀⠀⠀⠀⡰⠃⠀⠀⠀⠀⡠⠀⢀⡇⠙⣿⣿⡷  \n"
       << "                      ⠀⠀⠀⠀⡠⠣⠀⠇⡄⠀⠀⠀⢠⠔⠁⠀⠀⠀⣠⠞⠀⢀⡜⣠⣾⢿⠟⠀\n"
       << "                     ⠀⠀⢀⡴⠁⣀⠤⠊⠘⡆⠀⣠⠣⢤⠤⠴⢲⠋⠙⠀⣰⠋⠘⡝⠁⠘⠄⠀\n"
       << "                     ⠀⣰⡿⠖⠉⠀⠀⢀⠊⡀⠚⠁⠀⠈⠀⡰⠁⠀⡆⡜⠁⠀⠀⠁⠀\n"
       << "                     ⢀⡿⠁⠀⠀⠀⢰⣿⠏⠀⠀⠀⠀⡀⢰⠁⢀⣼⡞⠀⠀\n"
       << "                     ⣾⡇⠀⠀⠀⠀⠀⢻⣧⣶⡄⠀⠀⣇⠎⣠⡾⠛⠀\n"
       << "                     ⣿⣷⠀⠀⠀⠀⠀⠀⠉⠉⠁⠀⣼⢏⣴⠟ \n";
  cout <<  "\n\033[4m\033[1m\033[33m\t\t\t\t\t--- BETTING ON HORSES ---\033[0m" << endl;
}
void SystemGame::horse() {
  const int NUM_HORSES = 5;
  int horses[NUM_HORSES] = {1, 2, 3, 4, 5};
  int lengths[NUM_HORSES] = {0};
  int race_length = 30;
  int user_money = MONEY;
  char enter;

  srand(time(NULL));
  cout << "\033[2J\033[1;1H";
  horse_title();
  cout << "\t\t_______________________________________________\t\t" << endl;
  int user_bet;
  cout << "\t\t| You have " << user_money << " Baht." << endl;
  cout << "\t\t| /No.1/^" << endl;
  cout << "\t\t| /No.2/^" << endl;
  cout << "\t\t| /No.3/^" << endl;
  cout << "\t\t| /No.4/^" << endl;
  cout << "\t\t| /No.5/^" << endl;
  cout << "\t\t| Which horse do you think will win? (Enter horse number): ";
  cin >> user_bet;
  cout << endl;
  cout << "\033[2J\033[1;1H";
  horse_title();
  cout << "\t\t_______________________________________________\t\t" << endl;
  int bet_amount;
  cout << "\t\t| You have " << user_money << "." << endl;
  cout << "\t\t| /01/^" << endl;
  cout << "\t\t| /02/^" << endl;
  cout << "\t\t| /03/^" << endl;
  cout << "\t\t| /04/^" << endl;
  cout << "\t\t| /05/^" << endl;
  cout << "\t\t| How much would you like to bet? (Enter amount): ฿";
  cin >> bet_amount;
  cout << endl;
  if (bet_amount > user_money) {
    cout << "Sorry, you don't have enough money to make that bet." << endl;
    return;
  }
  user_money -= bet_amount;
  cout << "\033[2J\033[1;1H";
  // Run
  for (int i = 0; i < race_length; i++) {
    // random run
    for (int j = 0; j < NUM_HORSES; j++) {
      lengths[j] += rand() % 4 + 1;
    }
    horse_title();
    // Display
    cout << "\t\t_________________________________________\t\t" << endl;
    for (int j = 0; j < NUM_HORSES; j++) {
      cout << "\t\t| Horse " << horses[j] << ": ";
      for (int k = 0; k < lengths[j]; k++) {
        cout << ">";
      }
      cout << endl;
    }
    cout << endl;

    // Check for winner
    for (int j = 0; j < NUM_HORSES; j++) {
      if (lengths[j] >= race_length) {
        cout << "Horse " << horses[j] << " wins!" << endl;

        // Check user's bet
        if (user_bet == horses[j]) {
          int winnings = bet_amount * 2;
          user_money += winnings;
          cout << "Congratulations, you win " << winnings << "!" << endl;
        } else {
          cout << "Sorry, you lose." << endl;
        }

        cout << "You now have ฿" << user_money << "." << endl;
        MONEY = user_money;
        // Exit program
        cout << "Confirm (Y) : ";
        cin >> enter;
        cout << "\033[2J\033[1;1H";
        return;
      }
    }

    cout << "Running..." << endl;
    sleep(1);
    cout << "\033[2J\033[1;1H";
  }

  cout << "No winner after " << race_length << " iterations." << endl;
  cout << "Please try again." << endl;
}

void SystemGame::blackjack_title() {
  cout << "\t "
       << "\033[30;1m"
       << "BLACKJACK\t"
       << "\033[37;1m"
       << "BLACKJACK\t"
       << "\033[30;1m"
       << "BLACKJACK\t"
       << "\033[37;1m"
       << "BLACKJACK\t"
       << "\033[0m\n"
       << "\t          _____\n"
       << "\t         |A .  | _____\n"
       << "\t         | / \\ ||J ^  | _____\n"
       << "\t         |(_._)|| / \\ ||Q _  | _____\n"
       << "\t         |  |  || \\ / || ( ) ||K_ _ |\n"
       << "\t         |_____||  .  ||(_'_)||( v )|\n"
       << "\t                |_____||  |  || \\ / |\n"
       << "\t                       |_____||  .  |\n"
       << "\t                              |_____|\n";
}

void SystemGame::blackjack() {
  srand(time(0));
  char choice;
  int card = 0, random2, random1, card2 = 0, play1 = 0, play2 = 0;
  float bet;
  cout << "\033[2J\033[1;1H";
  cout << endl << endl;
  SystemGame ::blackjack_title();
  cout << "\t_______________________________________________\t\t" << endl;
  cout << "\t| Your money: " << MONEY << endl;
  cout << "\t| Enter your bet: ";
  cin >> bet;
  MONEY -= bet;
  if (MONEY < 0) { //ตรวจสอบว่าเงินพอมั้ย
    cout << "Your money is not enough !\n"; //ไม่พอ เลยเพิ่มเงินคืน
    MONEY += bet;
    return;
  }
  while (play1 == 0) {
    cout << "\033[2J\033[1;1H";
    cout << endl << endl; // ทำกรอบ
    SystemGame ::blackjack_title();
    cout << "\t_______________________________________________\t\t" << endl;
    random1 = rand() % 13 + 1;
    if (random1 == 11 || random1 == 12 || random1 == 13) {
      random1 = 10;
    }
    card += random1;
    if (card > 21) {
      break;
    }
    cout << "\t| Your card total: " << card << endl;
    cout << "\t| Do you want to draw another card? (Y/N): ";
    cin >> choice;
    if (choice == 'Y' || choice == 'y') {
      play1 = 0;
    } else if (choice == 'N' || choice == 'n') {
      play1 += 1;
    }
  }
  while (play2 == 0) {
    random2 = rand() % 13 + 1;
    if (random2 == 11 || random2 == 12 || random2 == 13) {
      random2 = 10;
    }
    card2 += random2;
    if (card2 <= 15) {
      play2 = 0;
    } else if (card2 > 16) {
      play2 += 1;
    }
  }
  if (card == card2) {
    MONEY += bet;
    cout << "\nIt's a tie.";
  } else if (card == 21 || (card < 21 && (card > card2 || card2 > 21))) {
    cout << "\nYou win!";
    MONEY += (bet * 2);
  } else {
    cout << "\033[31;1;4m"
         << "\nSorry, you lose."
         << "\033[0m";
  }
  cout << "\033[36m"
       << "\nThe player's card total is " << card << "\033[0m"
       << "\033[31m"
       << "\nThe dealer's card total is " << card2 << "\033[0m" << endl;
  cout << "Your money: " << MONEY << endl;
  cout << "5 Sec back to menu" << endl;
  sleep(5);
  cout << "\033[2J\033[1;1H";
}

void SystemGame::Hight_Low_title() {
  cout << "\033[2J\033[1;1H";
  cout << "\t\t\t                (( _______" << endl;
  cout << "\t\t\t       _______    /\\O    O\\ " << endl;
  cout << "\t\t\t      /O     /\\  /  \\      \\" << endl;
  cout << "\t\t\t     /   O  /O \\/ O  \\O____O\\ ))" << endl;
  cout << "\t\t\t  ((/_____O/    \\\\   /O     /" << endl;
  cout << "\t\t\t    \\O    O\\    /\\  /   O  /" << endl;
  cout << "\t\t\t     \\O    O\\ O/  \\/_____O/" << endl;
  cout << "\t\t\t      \\O____O\\/ ))         ))" << endl << endl;
	cout << "\t\t\t\t\t\t\033[1m\033[37mHigh_Low\033[0m " << endl<<endl;
}

void SystemGame::High_Low() {
  int dice1, dice2, dice3, sum, i = 0;
  char choice;
  float bet;
  while (MONEY > 0) {
    srand(time(0));
    dice1 = rand() % 6 + 1;
    dice2 = rand() % 6 + 1;
    dice3 = rand() % 6 + 1;
    Hight_Low_title();
    cout << "\t\t\t1. High, 2. 11 High_Low, 3. Low, 4. Exit\n\t\t\tSelect: ";
    cin >> choice;

    if (choice == '4') {
      cout << "Exiting...\n";
      break;
    }

    cout << "\t\t\tEnter your bet: ";
    cin >> bet;
    MONEY -= bet;
    if (MONEY < 0) { //ตรวจสอบว่าเงินพอมั้ย
      cout << "Your money is not enough !\n"; //ไม่พอ เลยเพิ่มเงินคืน
      MONEY += bet;
      return;
    }
    cout <<  "\t\t\t\033[4m\033[1m\033[31mRound:"<< i + 1 <<"\033[0m"<< endl;
    cout << "\t\t\tDice 1: " << dice1 << endl;
    cout << "\t\t\tDice 2: " << dice2 << endl;
    cout << "\t\t\tDice 3: " << dice3 << endl;

    sum = dice1 + dice2 + dice3;
    cout << "\t\t\tDice sum score = " << sum << endl;

    if (choice == '1' && sum >= 11) {
      cout << "\033[36;1m"
           << "\t\t\t\033[1m\033[36mWin\033[0m"
           << "\033[0m" << endl;
      cout << "Loading...\n"
           << " ";
      sleep(4);
      MONEY += bet * 2;
      cout << "\t\t\tYour Money: " << MONEY << endl;
    } else if (choice == '2' && sum == 11) {
      cout << "\033[36;1m"
           << "\t\t\t\033[1m\033[36mWin\033[0m"
           << "\033[0m" << endl;
      cout << "Loading...\n"
           << " ";
      sleep(4);
      MONEY += bet * 3;
      cout << "\t\t\tYour Money: " << MONEY << endl;
    } else if (choice == '3' && sum <= 10) {
      cout << "\033[36;1m"
           << "\t\t\t\033[1m\033[36mWin\033[0m"
           << "\033[0m" << endl;
      cout << "Loading...\n"
           << " ";
      sleep(4);
      MONEY += bet * 2;
      cout << "\t\t\tYour Money: " << MONEY << endl;
    } else {
      cout << "\033[31m"
           << "\t\t\t\033[1m\033[31mLose\033[0m"
           << "\033[0m" << endl;
      cout << "Loading...\n"
           << " ";
      sleep(4);
      cout << "\t\t\tYour Money: " << MONEY << endl;
    }

    i++;
  }

  if (MONEY <= 0) {
    cout << "\t\t\tGame over. You ran out of money." << endl;
  }

  return;
}
void SystemGame::Tiger_Dragon_title() {
  cout << "\033[2J\033[1;1H";
  cout << "\t\t\t         ⣀⣀⣤⣤⣤⣤⡼⠀⢀⡀⣀⢱⡄⡀⠀⠀⠀⢲⣤⣤⣤⣤⣀⣀⡀\n"
       << "\t\t\t⠀⠀   ⠀⠀⣠⣴⣾⣿⣿⣿⣿⣿⡿⠛⠋⠁⣤⣿⣿⣿⣧⣷⠀⠀⠘⠉⠛⢻⣷⣿⣽⣿⣿⣷⣦⣄⡀\n"
       << "\t\t\t⠀  ⠀⢀⣴⣞⣽⣿⣿⣿⣿⣿⣿⣿⠁⠀⠀⠠⣿⣿⡟⢻⣿⣿⣇⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣟⢦⡀\n"
       << "\t\t\t  ⠀⣠⣿⡾⣿⣿⣿⣿⣿⠿⣻⣿⣿⡀⠀⠀⠀⢻⣿⣷⡀⠻⣧⣿⠆⠀⠀⠀⠀⣿⣿⣿⡻⣿⣿⣿⣿⣿⠿⣽⣦⡀\n"
       << "\t\t\t⠀⠀⣼⠟⣩⣾⣿⣿⣿⢟⣵⣾⣿⣿⣿⣧⠀⠀⠀⠈⠿⣿⣿⣷⣈⠁⠀⠀⠀⠀⣰⣿⣿⣿⣿⣮⣟⢯⣿⣿⣷⣬⡻⣷⡄\n"
       << "\t\t\t⠀⢀⡜⣡⣾⣿⢿⣿⣿⣿⣿⣿⢟⣵⣿⣿⣿⣷⣄⠀⣰⣿⣿⣿⣿⣿⣷⣄⠀⢀⣼⣿⣿⣿⣷⡹⣿⣿⣿⣿⣿⣿⢿⣿⣮⡳⡄\n"
       << "\t\t\t⢠⢟⣿⡿⠋⣠⣾⢿⣿⣿⠟⢃⣾⢟⣿⢿⣿⣿⣿⣾⡿⠟⠻⣿⣻⣿⣏⠻⣿⣾⣿⣿⣿⣿⡛⣿⡌⠻⣿⣿⡿⣿⣦⡙⢿⣿⡝⣆\n"
       << "\t\t\t⠀⢯⣿⠏⣠⠞⠋⠀⣠⡿⠋⢀⣿⠁⢸⡏⣿⠿⣿⣿⠃⢠⣴⣾⣿⣿⣿⡟⠀⠘⢹⣿⠟⣿⣾⣷⠈⣿⡄⠘⢿⣦⠀⠈⠻⣆⠙⣿⣜⠆\n"
       << "\t\t\t⢀⣿⠃⡴⠃⢀⡠⠞⠋⠀⠀⠼⠋⠀⠸⡇⠻⠀⠈⠃⠀⣧⢋⣼⣿⣿⣿⣷⣆⠀⠈⠁⠀⠟⠁⡟⠀⠈⠻⠀⠀⠉⠳⢦⡀⠈⢣⠈⢿⡄\n"
       << "\t\t\t⣸⠇⢠⣷⠞⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠻⠿⠿⠋⠀⢻⣿⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⢾⣆⠈⣷\n"
       << "\t\t\t⡟⠀⡿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣴⣶⣤⡀⢸⣿⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⡄⢹\n"
       << "\t\t\t⡇⠀⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡇⠀⠈⣿⣼⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠃⢸\n"
       << "\t\t\t⢡⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⠶⣶⡟⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡼\n"
       << "\t\t\t⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡾⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠁\n"
       << "\t\t\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡁⢠\n"
       << "\t\t\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣿⣿⣼⣀⣠⠂\n";
  cout << "\033[31;1;4m"
       << "\n\t\t\t\t\t\t---Tiger && Dargorn--"
       << "\033[0m" << endl;
}
void SystemGame::Tiger_Dragon() {
  int Blue, Red, tiger_loop = 0, round = 0;
  int choice;
  float bet;
  while (tiger_loop == 0) {
    round += 1;
    srand(time(0));
    Blue = rand() % 13 + 1;
    Red = rand() % 13 + 1;
    Tiger_Dragon_title();
    cout << "\n\t\t\t1.Tiger && 2.Dargorn && 3.Exit" << endl;
    cout << "\t\t\tNumber : ";
    cin >> choice;
    if (choice == 3) {
      cout << "\t\t\tThank you.\n";
      cout << "\t\t\tLoading...\n"
           << " ";
      sleep(1);
      cout << "\033[2J\033[1;1H";
      return;
    }
    cout << "\t\t\tEnter your bet: ";
    cin >> bet;
    MONEY -= bet;

    if (MONEY < 0) { //ตรวจสอบว่าเงินพอมั้ย
      cout << "Your money is not enough !\n"; //ไม่พอ เลยเพิ่มเงินคืน
      MONEY += bet;
      return;
    }
    cout << "\033[31;1;4m"
         << "\n\t\t\tRound : " << round << "\033[0m" << endl
         << endl;
    cout << "\t\t\tTiger : " << Blue << endl;
    cout << "\t\t\tDargorn : " << Red << endl;
    if (choice == 1 && Blue > Red || choice == 2 && Red > Blue) {
      cout << "\033[36;1m"
           << "\t\t\tWin"
           << "\033[0m" << endl;
      cout << "\t\t\tLoading...\n"
           << " ";
      sleep(4);
      MONEY += bet * 2;
    } else if (choice == 1 && Blue == Red || choice == 2 && Red == Blue) {
      cout << "\t\t\tDraw" << endl;
      cout << "\t\t\tLoading...\n"
           << " ";
      sleep(4);
    } else {
      cout << "\033[31;1m"
           << "\t\t\tLose"
           << "\033[0m" << endl;
      cout << "\t\t\tLoading...\n"
           << " ";
      sleep(4);
    }
  }

  cout << "\033[2J\033[1;1H";
  return;
}

// class Login
class LoginSystem {
public:
  int ask_signup();  // control center login
  int Login();       // Login function
  int SignUP();      // SignUP function
  int guest();       // GUEST function
  float userMoney(); // set old user money
  void addMoney();   // add money
  ~LoginSystem();
};
// logout deconstructor
LoginSystem::~LoginSystem() {
  umy = fopen("usermoney.txt", "a+");
  cout << "\033[2J\033[1;1H";
  if (strcmp(user, "Guest") == 0)
    cout << "Goodbye Guest !";
  else {
    fprintf(umy, "%s\n%f\n", user, MONEY);
    cout << "Saved Successful !\nGood Luck :)";
  }
}
// center func login,signup
int LoginSystem::ask_signup() {
  int choice, control = 0;
  do {
	cout << "\t\t\t+====================+\n";
    cout << "\t\t\t1. Login\n\t\t\t2. Sign up\n\t\t\t3. Guest\n";
	cout << "\t\t\t+====================+\n";
    cout << "\t\t\tSelect : ";
    cin >> choice;
    switch (choice) {
    // case 0:
    //     return 0;
    case 1:
      control = Login();
      MONEY = userMoney();
      if (control == 1)
        return 1; // return 1 คือผู้ที่ล็อกอินสำเร็จ ถ้าไม่จะเป็น 0
      break;
    case 2:
      control = SignUP();
      if (control == 1)
        return 1;
      break;
    case 3:
      control = guest();
      if (control == 2)
        return 2; // return 2 คือผู้ที่เป็นแขก จะไม่นำมาบันทึกในไฟล์
      break;
    default:
      cout << "Invalid ur choice !\n";
    }
  } while (choice != 0);
  return control;
}

// Sign UP
int LoginSystem::SignUP() {
  char confirm;
  char usercheck[20], passcheck[20];
  fpt = fopen("userlogin.txt", "a+");
  umy = fopen("usermoney.txt", "a+");
  cout << "\033[2J\033[1;1H";
  while (true) {
    cout << "\n\t\t\t+===== Register =====+\n";
    cout << "\t\t\tNew Username : ";
    cin >> user;
    cout << "\t\t\tNew Password : ";
    cin >> pass;
	  cout << "\t\t\t+====================+\n";
    while (fscanf(fpt, "%s", usercheck) && fscanf(fpt, "%s", passcheck)) {
      if (strcmp(user, usercheck) == 0 && strcmp(pass, passcheck) == 0) {
        cout << "\t\t\tYou have a account ! \n";
		  sleep(2);
		  cout << "\033[2J\033[1;1H";
        return 0;
      } else if (strcmp(user, usercheck) == 0) {
        cout << "\t\t\tThis username is already taken !\n";
		  sleep(2);
			  cout << "\033[2J\033[1;1H";
        break;
      } else if (feof(fpt)) {
        fprintf(fpt, "%s\n%s\n", user, pass);
        fprintf(umy, "%s\n%f\n", user, MONEY);
        fclose(fpt);
        fclose(umy);
        cout << "User data saved !\n";
        return 1;
      }
    }
  }
}

// Login
int LoginSystem::Login() {
  char usercheck[20], loguser[20], passcheck[10], passuser[10];
  int ch;
  fpt = fopen("userlogin.txt", "r");
	cout << "\033[2J\033[1;1H";
  cout << "\t\t\t+======= Login =======+\n";
  cout << "\t\t\tUsername : ";
  cin >> loguser;
  cout << "\t\t\tPassword : ";
  cin >> passuser;
	cout << "\t\t\t+=====================+\n";
  while (fscanf(fpt, "%s", usercheck) && fscanf(fpt, "%s", passcheck)) {
    if (strcmp(loguser, usercheck) == 0 && strcmp(passuser, passcheck) == 0) {
      cout << "\t\t\tLogin success !! \n";
      strcpy(user, usercheck);
      fclose(fpt);
      return 1;
    }
    if (feof(fpt)) {
      cout << "Username or Password invalid !!\n";
		cout << "\033[2J\033[1;1H";
		sleep(5);
      fclose(fpt);
      return 0;
    }
  }
  fclose(fpt);
}
// GUEST
int LoginSystem::guest() {
  MONEY = 99999;
  strcpy(user, "Guest");
  return 2;
}
// set user money
//ทำแบบล็อกอิน อ่านไฟล์ txt และสแกนเช็คทีละตัว เทียบกับ user ที่ login มา  และแทน money
//ไปเรื่อยๆ
float LoginSystem::userMoney() {
  float moneycheck;
  char usercheck[20];
  umy = fopen("usermoney.txt", "r");
  while (fscanf(umy, "%s", usercheck) == 1 &&
         fscanf(umy, "%f", &moneycheck) == 1) {
    if (strcmp(user, usercheck) == 0) {
      MONEY = moneycheck;
    }
  }
  fclose(umy);
  return MONEY;
}
// addmoney
void LoginSystem::addMoney() {
  float moneyin;
  cout << "\033[2J\033[1;1H";
  cout << "\n\n\t\t\t+======== Prepaid System ========+\n";
  cout << "\t\t\tHow much : ";
  cin >> moneyin;
  cout << "\t\t\t+==================================+\n";
  cout << "Loading  ...\n";
  cout << "";
  sleep(1);
  MONEY += moneyin;
  cout << "\033[2J\033[1;1H";
}

class Profile : public LoginSystem {
public:
  string name;
  int age, number;
  Profile() {}

  Profile(string n, int a) {
    name = n;
    age = a;
  }
  Profile(string a, int b, int c) {
    name = a;
    age = b;
    number = c;
  }

  // Profile view with name only
  void view(string prefix) { cout << prefix << " " << name << endl; }

  // Profile view with age only
  void view(int suffix) {
    char con;
    cout << "Money : " << age << suffix << endl << endl;
    cout << "\n-- Press any button to back --" << endl;
    cin >> con;
    cout << "\033[2J\033[1;1H";
  }

  // Profile view with both name and age
  void view(string prefix, int suffix) {
    cout << "\033[2J\033[1;1H";
    cout << "\n\n\t\t\t-------------" << endl;
    cout << "\t\t\t|   Avartar |" << endl;
    cout << "\t\t\t|     **    |" << endl;
    cout << "\t\t\t|   ******  |" << endl;
    cout << "\t\t\t|  ******** |" << endl;
    cout << "\t\t\t|           |" << endl;
    cout << "\t\t\t-------------" << endl;
  }
};
// function in main เดี๋ยวลอง
int menu_game() {
  int choice;
  cout << "\033[2J\033[1;1H";

  cout << "\t\t+---------------------------------------------+" << endl;
cout << "\t\t|                  MENU                       |" << endl;
cout << "\t\t+---------------------------------------------+" << endl;
cout << "\t\t| 1. SLOT                                     |" << endl;
cout << "\t\t| 2. FOOTBALL PREDICTION                      |" << endl;
cout << "\t\t| 3. ROCK PAPER SCISSORS                      |" << endl;
cout << "\t\t| 4. BETTING ON HORSES                        |" << endl;
cout << "\t\t| 5. BLACKJACK                                |" << endl;
cout << "\t\t| 6. HIGH LOW                                 |" << endl;
cout << "\t\t| 7. TIGER DRAGON                             |" << endl;
cout << "\t\t| 0. Back                                     |" << endl;
cout << "\t\t+---------------------------------------------+" << endl;

  cout << "\t\tSelect : ";
  cin >> choice;
  return choice;
}
// main
int main() {
  /*-------------------------------*/
  SystemGame sys;
  LoginSystem log;
	clear clr;
  /*-------------------------------*/
  int control;
  int choice;
  int selectgame;
  control = log.ask_signup();
  cout << "wait checking .. " << endl;
  cout << " ";
  sleep(1);
  cout << "\033[2J\033[1;1H";
  while (control != 0) {
    if (control != 2){
      cout << "\033[2J\033[1;1H";
      cout << "\t\t\t +==== Welcome " << user << " ====+ " << endl;
	} // login member
    else {
       srand((unsigned)time(NULL));
       int random = rand(); // guest
       cout << "\033[2J\033[1;1H";
      cout << "\n\t\t\t+====== Welcome " << user << random << " ======+ " << endl;
    }
    cout << "\t\t\tMoney : " << MONEY << " Bath " << endl;
    cout << "\t\t\t1. Addmoney \n\t\t\t2. Menu game\n\t\t\t3. Profile\n\t\t\t0. Log out\n\t\t\tSelect : ";
    cin >> choice;

    Profile myProfile(user, MONEY);          // overload 1
    Profile myProfile1(user, MONEY, choice); // overload 2

    switch (choice) {
    case 1:
      log.addMoney();
      break;
    case 2:
      if (MONEY >= 20) {
        selectgame = menu_game();
        switch (selectgame) {
        case 0:
          break;
        case 1:
          sys.slot();
          break;
        case 2:
          sys.football();
          break;
        case 3:
          sys.rockpaper();
          break;
        case 4:
          sys.horse();
          break;
        case 5:
          sys.blackjack();
          break;
        case 6:
          sys.High_Low();
          break;
        case 7:
          sys.Tiger_Dragon();
          break;
        }
      } else
        cout << "\t\t\tDon't have enough money to play ! \n";
      sleep(2);
      cout << "\033[2J\033[1;1H";
      break;
    case 3: 
	    clr.endpro();
		  sleep(2);
      myProfile.view("My ", 0);
      myProfile.view("Username : ");
      myProfile.view(0);
      break;
    case 0:
      control = 0;
      break;
    }
  }
}
