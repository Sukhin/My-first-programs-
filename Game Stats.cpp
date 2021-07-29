// Программа Game Stats
// Демонстрирует обьявление и иницилизацию переменных

#include <iostream>
using namespace std;

  int main()
 {
      int score;
      double distance;
      char playAgain;
      bool shieldsUp;
      short lives, aliensKilled;
      score = 0;
      distance = 1200.76;
      playAgain = 'y';
      shieldsUp = true;
      lives = 3;
      aliensKilled = 10;
      double engineTemp = 6572.89;
      cout << "score" << '\t' << score << endl;
      cout << "distance \t" << distance << endl;
      cout << "playAgain \t" << playAgain << endl;
      // пропускаем shieldsUp, поскольку булевые значения
      // как правило на экран не выводятся
      cout << "lives \t" << lives << endl;
      cout << "aliensKilled \t" << aliensKilled << endl;
      cout << "engineTemp \t" << engineTemp << endl;
      cout << "score \t" << score << endl;
      int fuel;
      cout << "How much fuel ?";
      cin >> fuel;
      cout << "fuel \t" << fuel << endl;
      typedef unsigned short int ushort;
      ushort bonus = 10;
      cout << "bonus \t" << bonus << endl;
      return 0;
  }