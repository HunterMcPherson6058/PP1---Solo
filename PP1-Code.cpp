#include <fstream>
#include <iostream>
#include <cstdlib>
#include <string>
#include <stdlib.h> 
#include <time.h>   
using namespace std;
//Maze Class
class Maze {
    //Initialize variables
private:
    int wallType;
    int roomState;
    int playerPresent;
    //Set and Get functions to change variables
public:
    void setType(int num) {
        wallType = num;
    }
    void setState(int num) {
        roomState = num;
    }
    void setplayerPresent(int num) {
        playerPresent = num;
    }
    int getType(){
        return wallType;
    }
    int getState() {
        return roomState;
    }
    int getplayerPresent() {
        return playerPresent;
    }
    //Function to print each cell of the maze array in 3 chunks
    void printMaze(int cycle) {
        //wallType = 1 --------------------------------
        if (wallType == 1 && cycle == 0) {
            cout << "+---+";
        }
        if (wallType == 1 && cycle == 1 && playerPresent != 1) {
            cout << "|    ";
        }
        if (wallType == 1 && cycle == 1 && playerPresent == 1) {
            cout << "| 0  ";
        }
        if (wallType == 1 && cycle == 2) {
            cout << "+   +";
        }
        //wallType = 2 --------------------------------
        if (wallType == 2 && cycle == 0) {
            cout << "+---+";
        }
        if (wallType == 2 && cycle == 1 && playerPresent != 1) {
            cout << "    |";
        }
        if (wallType == 2 && cycle == 1 && playerPresent == 1) {
            cout << "  0 |";
        }
        if (wallType == 2 && cycle == 2) {
            cout << "+   +";
        }
        //wallType = 3 --------------------------------
        if (wallType == 3 && cycle == 0) {
            cout << "+   +";
        }
        if (wallType == 3 && cycle == 1 && playerPresent != 1) {
            cout << "|    ";
        }
        if (wallType == 3 && cycle == 1 && playerPresent == 1) {
            cout << "| 0  ";
        }
        if (wallType == 3 && cycle == 2) {
            cout << "+---+";
        }
        //wallType = 4 --------------------------------
        if (wallType == 4 && cycle == 0) {
            cout << "+   +";
        }
        if (wallType == 4 && cycle == 1 && playerPresent != 1) {
            cout << "    |";
        }
        if (wallType == 4 && cycle == 1 && playerPresent == 1) {
            cout << "  0 |";
        }
        if (wallType == 4 && cycle == 2) {
            cout << "+---+";
        }
        //wallType = 5 --------------------------------
        if (wallType == 5 && cycle == 0) {
            cout << "+---+";
        }
        if (wallType == 5 && cycle == 1 && playerPresent != 1) {
            cout << "     ";
        }
        if (wallType == 5 && cycle == 1 && playerPresent == 1) {
            cout << "  0  ";
        }
        if (wallType == 5 && cycle == 2) {
            cout << "+   +";
        }
        //wallType = 6 --------------------------------
        if (wallType == 6 && cycle == 0) {
            cout << "+   +";
        }
        if (wallType == 6 && cycle == 1 && playerPresent != 1) {
            cout << "|    ";
        }
        if (wallType == 6 && cycle == 1 && playerPresent == 1) {
            cout << "| 0  ";
        }
        if (wallType == 6 && cycle == 2) {
            cout << "+   +";
        }
        //wallType = 7 --------------------------------
        if (wallType == 7 && cycle == 0) {
            cout << "+   +";
        }
        if (wallType == 7 && cycle == 1 && playerPresent != 1) {
            cout << "    |";
        }
        if (wallType == 7 && cycle == 1 && playerPresent == 1) {
            cout << "  0 |";
        }
        if (wallType == 7 && cycle == 2) {
            cout << "+   +";
        }
        //wallType = 8 --------------------------------
        if (wallType == 8 && cycle == 0) {
            cout << "+   +";
        }
        if (wallType == 8 && cycle == 1 && playerPresent != 1) {
            cout << "     ";
        }
        if (wallType == 8 && cycle == 1 && playerPresent == 1) {
            cout << "  0  ";
        }
        if (wallType == 8 && cycle == 2) {
            cout << "+---+";
        }
        //wallType = 9 --------------------------------
        if (wallType == 9 && cycle == 0) {
            cout << "+   +";
        }
        if (wallType == 9 && cycle == 1 && playerPresent != 1) {
            cout << "|   |";
        }
        if (wallType == 9 && cycle == 1 && playerPresent == 1) {
            cout << "| 0 |";
        }
        if (wallType == 9 && cycle == 2) {
            cout << "+   +";
        }
        //wallType = 10 --------------------------------
        if (wallType == 10 && cycle == 0) {
            cout << "+---+";
        }
        if (wallType == 10 && cycle == 1 && playerPresent != 1) {
            cout << "     ";
        }
        if (wallType == 10 && cycle == 1 && playerPresent == 1) {
            cout << "  0  ";
        }
        if (wallType == 10 && cycle == 2) {
            cout << "+---+";
        }
        //wallType = 11 --------------------------------
        if (wallType == 11 && cycle == 0) {
            cout << "+---+";
        }
        if (wallType == 11 && cycle == 1 && playerPresent != 1) {
            cout << "|   |";
        }
        if (wallType == 11 && cycle == 1 && playerPresent == 1) {
            cout << "| 0 |";
        }
        if (wallType == 11 && cycle == 2) {
            cout << "+   +";
        }
        //wallType = 12 --------------------------------
        if (wallType == 12 && cycle == 0) {
            cout << "+---+";
        }
        if (wallType == 12 && cycle == 1 && playerPresent != 1) {
            cout << "|    ";
        }
        if (wallType == 12 && cycle == 1 && playerPresent == 1) {
            cout << "| 0  ";
        }
        if (wallType == 12 && cycle == 2) {
            cout << "+---+";
        }
        //wallType = 13 --------------------------------
        if (wallType == 13 && cycle == 0) {
            cout << "+---+";
        }
        if (wallType == 13 && cycle == 1 && playerPresent != 1) {
            cout << "    |";
        }
        if (wallType == 13 && cycle == 1 && playerPresent == 1) {
            cout << "  0 |";
        }
        if (wallType == 13 && cycle == 2) {
            cout << "+---+";
        }
        //wallType = 14 --------------------------------
        if (wallType == 14 && cycle == 0) {
            cout << "+   +";
        }
        if (wallType == 14 && cycle == 1 && playerPresent != 1) {
            cout << "|   |";
        }
        if (wallType == 14 && cycle == 1 && playerPresent == 1) {
            cout << "| 0 |";
        }
        if (wallType == 14 && cycle == 2) {
            cout << "+---+";
        }
        //wallType = 15 --------------------------------
        if (wallType == 15 && cycle == 0) {
            cout << "+   +";
        }
        if (wallType == 15 && cycle == 1 && playerPresent != 1) {
            cout << "     ";
        }
        if (wallType == 15 && cycle == 1 && playerPresent == 1) {
            cout << "  0  ";
        }
        if (wallType == 15 && cycle == 2) {
            cout << "+   +";
        }
    }
};
//Player Class
class Player {
    //Initialize variables
private:
    int HP;
    int x;
    int y;
    int damage;
    int defence;
    int dext;
    //Set and Get functions to change variables
public:
    void setHP(int num) {
        HP = num;
    }
    void setX(int num) {
        x = num;
    }
    void setY(int num) {
        y = num;
    }
    void setDamage(int num) {
        damage = num;
    }
    void setDefence(int num) {
        defence = num;
    }
    void setDext(int num) {
        dext = num;
    }
    int getHP() {
        return HP;
    }
    int getX() {
        return x;
    }
    int getY() {
        return y;
    }
    int getDamage() {
        return damage;
    }
    int getDefence() {
        return defence;
    }
    int getDext() {
        return dext;
    }
    //add and remove functions for items
    void addHP(int num) {
        HP += num;
    }
    void addDamage(int num) {
        damage += num;
    }
    void addDefence(int num) {
        defence += num;
    }
    void addDext(int num) {
        dext += num;
    }
    void subHP(int num) {
        HP -= num;
    }
    void subDamage(int num) {
        damage -= num;
    }
    void subDefence(int num) {
        defence -= num;
    }
    void subDext(int num) {
        dext -= num;
    }
    //Check stats function
    void checkStats() {
        cout << "Stats: " << endl;
        cout << "     HP:        " << HP << endl;
        cout << "     Attack:    " << damage << endl;
        cout << "     Defence:   " << defence << endl;
        cout << "     Dexterity: " << dext << endl << endl;
        cout <<  "Enter: ";
    }
};
//Item Class
class Item {
private:
    string name = " ";
    string bio = " ";
    int locNum;
    int damageBuff = 0;
    int defenceBuff = 0;
    int dextBuff = 0;
    int hpBuff = 0;
    int x = -1;
    int y = -1;
public:
    //reset function
    void reset() {
        name = " ";
        bio = " ";
        damageBuff = 0;
        defenceBuff = 0;
        dextBuff = 0;
        hpBuff = 0;
        x = -1;
        y = -1;
    }
    void setName(string text) {
        name = text;
    }
    void setBio(string text) {
        bio = text;
    }
    void setDamage(int num) {
        damageBuff = num;
    }
    void setDefence(int num) {
        defenceBuff = num;
    }
    void setDext(int num) {
        dextBuff = num;
    }
    void setHP(int num) {
        hpBuff = num;
    }
    void setX(int num) {
        x = num;
    }
    void setY(int num) {
        y = num;
    }
    void setLocation(int num){
        locNum = num;
        }
    int getY() {
        return y;
    }
    int getX() {
        return x;
    }
    string getName() {
        return name;
    }
    int getLocation() {
        return locNum;
    }
    string getBio() {
        return bio;
    }
    int getDamage() {
        return damageBuff;
    }
    int getDefence() {
        return defenceBuff;
    }
    int getDext() {
        return dextBuff;
    }
    int getHP() {
        return hpBuff;
    }
};
//Monster Class
class Monster {
private:
    string name;
    int hp;
    int damage;
    int defence;
    int x;
    int y;
public:
    void setName(string text) {
        name = text;
    }
    void setHP(int num) {
        hp = num;
    }
    void setDamage(int num) {
        damage = num;
    }
    void setDefence(int num) {
        defence = num;
    }
    string getName() {
        return name;
    }
    int getHP() {
        return hp;
    }
    int getDamage() {
        return damage;
    }
    int getDefence() {
        return defence;
    }
    void setX(int num) {
        x = num;
    }
    void setY(int num) {
        y = num;
    }
    int getY() {
        return y;
    }
    int getX() {
        return x;
    }
};
//Function to print the whole maze based on size
void printMap5x5(Maze cell[5][5]) {
    int row;
        for (int j = 0; j< 5; j++) { 
            row = j;
                for (int i = 0; i < 5; i++) {
                    cell[row][i].printMaze(0);
                }
                cout << endl;
                for (int i = 0; i < 5; i++) {
                    cell[row][i].printMaze(1);
                }
                cout << endl;
                for (int i = 0; i < 5; i++) {
                    cell[row][i].printMaze(2);
                }
                cout << endl;
        }
    return;
}
void printMap10x10(Maze cell[10][10]) {
    int row;
    for (int j = 0; j < 10; j++) {
        row = j;
        for (int i = 0; i < 10; i++) {
            cell[row][i].printMaze(0);
        }
        cout << endl;
        for (int i = 0; i < 10; i++) {
            cell[row][i].printMaze(1);
        }
        cout << endl;
        for (int i = 0; i < 10; i++) {
            cell[row][i].printMaze(2);
        }
        cout << endl;
    }
    return;
}
void printMap15x15(Maze cell[15][15]) {
    int row;
    for (int j = 0; j < 15; j++) {
        row = j;
        for (int i = 0; i < 15; i++) {
            cell[row][i].printMaze(0);
        }
        cout << endl;
        for (int i = 0; i < 15; i++) {
            cell[row][i].printMaze(1);
        }
        cout << endl;
        for (int i = 0; i < 15; i++) {
            cell[row][i].printMaze(2);
        }
        cout << endl;
    }
    return;
}
void printMap20x20(Maze cell[20][20]) {
    int row;
    for (int j = 0; j < 20; j++) {
        row = j;
        for (int i = 0; i < 20; i++) {
            cell[row][i].printMaze(0);
        }
        cout << endl;
        for (int i = 0; i < 20; i++) {
            cell[row][i].printMaze(1);
        }
        cout << endl;
        for (int i = 0; i < 20; i++) {
            cell[row][i].printMaze(2);
        }
        cout << endl;
    }
    return;
}
//Interface and Text functions
void displayConfirm() {
    cout << "Enter C to continue" << endl << "Enter: ";
}
void displayConfirm2() {
    cout << "Enter C to continue or N to exit" << endl << "Enter: ";
}
void displayConfirm3() {
    cout << "1 - Revive at previous checkpoint" << endl;
    cout << "2 - Quit" << endl << endl << "Enter: ";
}
void displayStart() {
    cout << "PP1-Maze Project-Hunter McPherson" << endl << endl;
    cout << "Enter one of the following numbers to determine the maze size and begin your adventure:" << endl;
    cout << "1 - 5x5 Maze" << endl;
    cout << "2 - 10x10 Maze" << endl;
    cout << "3 - 15x15 Maze" << endl;
    cout << "4 - 20x20 Maze" << endl;
    cout << "Enter: ";
}
void displayIntro() {
    cout << "You are a adventurer of the local guild who was on their way to explore a forgotten ruin in hopes of bountiful treasure when you were suddenly ambushed." << endl;
    cout << "With no recollection of what happened you wake up in a cold and dark cell with nothing but your trusty weapon." << endl;
    cout << "You notice that the locks on the door have rusted completely. Perhaps there is way out." << endl << endl;
    cout << "Who are you?" << endl << endl << "Enter Class Number: " << endl;
    cout << "1 - Knight (High Health and Defence)" << endl;
    cout << "2 - Archer (Moderate in Every Skill)" << endl;
    cout << "3 - Mage (High Offence and Evasion)" << endl;
    cout << "4 - Berserker (Glass Cannon)" << endl << endl;
    cout << "Enter: ";
}
void displayOutro() {
    cout << "With the mighty Dragon defeated, you notice a large gateway behind where the beast once stood." << endl;
    cout << "As you open the large gateway you are flashed with blindly bright light." << endl;
    cout << "Freedom at last as you have finally managed your way out of this grueling confinement." << endl;
    cout << "With your new treasures, you travel triumphantly back to the guild with new tales to tell of your mighty adventure and the monsters you slain along the way." << endl;
    cout << "Thank you for playing!" << endl;
}
void displayInterfaceGeneral() {
    cout << endl;
    cout << "GENERAL CONTROLS" << endl;
    cout << "M - open general controls" << endl;
    cout << "W - to move up" << endl;
    cout << "A - to move left" << endl;
    cout << "S - to move down" << endl;
    cout << "D - to move right" << endl;
    cout << "E - to inspect room" << endl;
    cout << "G - to retrieve item" << endl;
    cout << "MP - to display current map" << endl;
    cout << "ST - check your stats" << endl;
    cout << "I - to open inventory" << endl;
    cout << "P - to open combat controls" << endl;
    cout << "H - for hints" << endl;
    cout << "Q - to quit" << endl << endl;
    cout << "Enter: ";
}
void displayInterfaceHelp() {
    cout << "M - open general controls" << endl;
    cout << "P - to open combat controls" << endl;
    cout << "H - for hints" << endl;
    cout << "Q - to quit" << endl << endl;
    cout << "Enter: ";
}
void displayInterfaceCombat() {
    cout << endl;
    cout << "1 - to attack" << endl;
    cout << "2 - to run away" << endl << endl;
    cout << "Enter: ";
}
void displayInterfaceInventory() {
    cout << endl << "Select a item ID (1-9) to interact with it" << endl;
    cout << "0 - to exit" << endl;
    cout << "Enter: ";
}
void displayInterfaceItem() {
    cout << endl <<"1 - examine item" << endl;
    cout << "2 - drop item" << endl;
    cout << "N - exit" << endl;
    cout << "Enter: ";
}
void displayInterfaceHints() {
    cout << endl << "To protect yourself from the Dragons fire you must find the DragonFire Shield" << endl;
    cout << "A skeleton key must be aquired to open the door at the end of the maze" << endl << endl << "Enter: ";
}
//Player Movement Function
bool playerMoveCheck(string direction, Maze cell) {
    if (cell.getType() == 1) {
        if (direction == "W" || direction == "A") {
            return true;
        }
        else {
            return false;
        }

    }
    if (cell.getType() == 2) {
        if (direction == "W" || direction == "D") {
            return true;
        }
        else {
            return false;
        }

    }
    if (cell.getType() == 3) {
        if (direction == "S" || direction == "A") {
            return true;
        }
        else {
            return false;
        }

    }
    if (cell.getType() == 4) {
        if (direction == "S" || direction == "D") {
            return true;
        }
        else {
            return false;
        }

    }
    if (cell.getType() == 5) {
        if (direction == "A" || direction == "D" || direction == "W") {
            return true;
        }
        else {
            return false;
        }

    }
    if (cell.getType() == 6) {
        if (direction == "A" || direction == "S" || direction == "W") {
            return true;
        }
        else {
            return false;
        }

    }
    if (cell.getType() == 7) {
        if (direction == "D" || direction == "W" || direction == "S") {
            return true;
        }
        else {
            return false;
        }

    }
    if (cell.getType() == 8) {
        if (direction == "D" || direction == "A" || direction == "S") {
            return true;
        }
        else {
            return false;
        }

    }
    if (cell.getType() == 9) {
        if (direction == "S" || direction == "W") {
            return true;
        }
        else {
            return false;
        }

    }
    if (cell.getType() == 10) {
        if (direction == "A" || direction == "D") {
            return true;
        }
        else {
            return false;
        }

    }
    if (cell.getType() == 11) {
        if (direction == "W") {
            return true;
        }
        else {
            return false;
        }

    }
    if (cell.getType() == 12) {
        if (direction == "A") {
            return true;
        }
        else {
            return false;
        }

    }
    if (cell.getType() == 13) {
        if (direction == "D") {
            return true;
        }
        else {
            return false;
        }

    }
    if (cell.getType() == 14) {
        if (direction == "S") {
            return true;
        }
        else {
            return false;
        }

    }
    if (cell.getType() == 15) {
        if (direction == "W" || direction == "A" || direction == "S" || direction == "D") {
            return true;
        }
        else {
            return false;
        }

    }
}
//Item description function when searching
string itemLocationInfo(int num) {
    if (num == 0) {
        return "You find a chest while searching the room.";
    }
    if (num == 1) {
        return "You find a body while searching the room.";
    }
    if (num == 2) {
        return "You find something lying on the floor.";
    }
}
string itemLocationOpen(int num) {
    if (num == 0) {
        return "inside the chest.";
    }
    if (num == 1) {
        return "while searching the body.";
    }
    if (num == 2) {
        return "on the floor.";
    }
}
//Player Stat adder function
Player addItemStats(Player player, Item item) {
    player.addDamage(item.getDamage());
    player.addDext(item.getDext());
    player.addDefence(item.getDefence());
    player.addHP(item.getHP());
    return player;

}
//Main
int main()
{
    //Intro and Maze Size/Class Confirmation
    string mapSize;
    string answer;
    int answerNum;
    Player player;
    //Create Items, not the ideal way
    Item items[13];
    Item i1;
    i1.setName("Dragonfire Shield");
    i1.setBio("Legendary shield forged from an ancient draconic visage that protects its user from dragon fire. +10 Defence");
    i1.setDefence(10);
    items[0] = i1;
    Item i2;
    i2.setName("Skull Key");
    i2.setBio("This key has a picture of a skull on it, perhaps it opens something.");
    items[1] = i2;
    Item i3;
    i3.setName("Health Elixir");
    i3.setBio("Red elixir that can rejuvenate life. + 40 Health Points");
    i3.setHP(40);

    items[2] = i3;
    Item i4;
    i4.setName("Rage Elixir");
    i4.setBio("Dangerous elixir that turns any into a madman in battle. + 20 Damage");
    i4.setDamage(20);
    items[3] = i4;
    Item i5;
    i5.setName("Stone Elixir");
    i5.setBio("This elixir makes its user body as hard as stone. + 20 Defence");
    i5.setDefence(20);
    items[4] = i5;
    Item i6;
    i6.setName("Slayer Helmet");
    i6.setBio("Helmet worn by the mightiest of warriors. + 5 Damage + 2 Defence");
    i6.setDamage(5);
    i6.setDefence(2);
    items[5] = i6;
    Item i7;
    i7.setName("Mystic Boots");
    i7.setBio("Magical boots. +5 Dexterity");
    i7.setDext(5);
    items[6] = i7;
    Item i8;
    i8.setName("Torags Hammers");
    i8.setBio("Torag the Corrupted’s twin hammers. + 10 Damage");
    i8.setDamage(10);
    items[7] = i8;
    Item i9;
    i9.setName("Master Wand");
    i9.setBio("A master level wand. + 5 Damage");
    i9.setDamage(5);
    items[8] = i9;
    Item i10;
    i10.setName("Twisted Bow");
    i10.setBio("A mystical bow carved from the remains of a legendary beast. + 10 Dexterity");
    i10.setDext(10);
    items[9] = i10;
    Item i11;
    i11.setName("Cooked Mystery Meat");
    i11.setBio("You dont want to think about what kind of meat it is. + 5 To All Stats");
    i11.setDamage(5);
    i11.setDefence(5);
    i11.setDext(5);
    i11.setHP(5);
    items[10] = i11;
    Item i12;
    i12.setName("Bandos Chestplate");
    i12.setBio("A sturdy chestplate. + 10 Defence");
    i12.setDefence(10);
    items[11] = i12;
    Item i13;
    i13.setName("Elysian Spirit Shield");
    i13.setBio("An ethereal shield. + 5 Defence + 5 Dexterity");
    i13.setDefence(5);
    i13.setDext(5);
    items[12] = i13;
    //Create Monsters, not ideal way
    Monster monsters[7];
    Monster m1;
    m1.setName("Dragon");
    m1.setHP(500);
    m1.setDamage(30);
    m1.setDefence(20);
    monsters[0] = m1;
    Monster m2;
    m2.setName("Goblin");
    m2.setHP(30);
    m2.setDamage(10);
    m2.setDefence(5);
    monsters[1] = m2;
    Monster m3;
    m3.setName("Demon");
    m3.setHP(120);
    m3.setDamage(25);
    m3.setDefence(5);
    monsters[2] = m3;
    Monster m4;
    m4.setName("Skeleton");
    m4.setHP(50);
    m4.setDamage(15);
    m4.setDefence(10);
    monsters[3] = m4;
    Monster m5;
    m5.setName("Giant Rat");
    m5.setHP(40);
    m5.setDamage(10);
    m5.setDefence(0);
    monsters[4] = m5;
    Monster m6;
    m6.setName("Cyclops");
    m6.setHP(200);
    m6.setDamage(20);
    m6.setDefence(20);
    monsters[5] = m6;
    Monster m7;
    m7.setName("Zombie");
    m7.setHP(60);
    m7.setDamage(10);
    m7.setDefence(0);
    monsters[6] = m7;
    //displayStart
    displayStart();
    //determine map size
    while (true) {
        cin >> mapSize;
        if (mapSize == "1" || mapSize == "2" || mapSize == "3" || mapSize == "4") {
            break;
        }
        cout << "Not a valid size" << endl << "Enter: ";
    }
    cout << endl << endl;
    displayIntro();
    //Create player backpack
    Item backpack[9];
    while (true) {
        cin >> answer;
        if (answer == "1" ) {
            backpack[0].setName("Leaf-Bladed Sword");
            backpack[0].setBio("A razor-sharp sword. + 5 Damage + 10 Defence");
            backpack[0].setDamage(5);
            backpack[0].setDefence(10);
            player.setHP(85);
            player.setDefence(15);
            player.setDext(0);
            player.setDamage(10);
            player = addItemStats(player, backpack[0]);
            break;
        }
        else if (answer == "2") {
            backpack[0].setName("Dragon Hunter CrossBow");
            backpack[0].setBio("A crossbow used for dragon hunting. + 10 Damage + 5 Defence");
            backpack[0].setDamage(10);
            backpack[0].setDefence(5);
            player.setHP(70);
            player.setDefence(10);
            player.setDext(20);
            player.setDamage(10);
            player = addItemStats(player, backpack[0]);
            break;
        }
        else if (answer == "3") {
            backpack[0].setName("Staff of Light");
            backpack[0].setBio("A ghastly weapon with evil origins. + 12 Damage + 3 Defence");
            backpack[0].setDamage(12);
            backpack[0].setDefence(3);
            player.setHP(60);
            player.setDefence(5);
            player.setDext(20);
            player.setDamage(25);
            player = addItemStats(player, backpack[0]);
            break;
        }
        else if (answer == "4") {
            backpack[0].setName("Godsword");
            backpack[0].setBio("A brutally heavy sword. + 15 Damage");
            backpack[0].setDamage(15);
            backpack[0].setDefence(0);
            player.setHP(60);
            player.setDefence(5);
            player.setDext(5);
            player.setDamage(40);
            player = addItemStats(player, backpack[0]);
            break;
        }
        cout << "Not a valid statement" << endl << "Enter: ";
    }
    cout << endl << endl;
    //win state
    bool win = false;
    //Creating the map
    if (mapSize == "1") {
        char output[25];
        int layout[25];
        Maze map[5][5];
        ifstream File;
        File.open("5x5.txt");
        //Convert text file to ints for reading
        int count = 0;
        while (File >> output) {
            layout[count] = atoi(output);
            count++;
        }
        File.close();
        //Set wallType for array
        count = 0;
        for (int row = 0; row < 5; row++) {
            for (int col = 0; col < 5; col++) {
                map[row][col].setType(layout[count]);
                count++;
            }
        }
        //Randomize Items Collection
        srand(time(NULL));
        Item mapItems[4];
        Monster mapMonsters[2];
        int locRand;
        //Quest Item
        mapItems[0] = items[0];
        locRand = rand() % 2;
        mapItems[0].setLocation(locRand);
        while (true) {
            mapItems[0].setX(rand() % 4);
            mapItems[0].setY(rand() % 4);
            //Prevent spawns in area not accessible yet
                if (mapItems[0].getX() != 2 || mapItems[0].getY() != 4) {
                    if (mapItems[0].getX() != 3 || mapItems[0].getY() != 4) {
                        break;
                    }
                }
        }
        //Quest Item
        mapItems[1] = items[1];
        locRand = rand() % 2;
        mapItems[1].setLocation(locRand);
        while (true) {
            mapItems[1].setX(rand() % 4);
            mapItems[1].setY(rand() % 4);
            //Prevent spawns in area not accessible yet
            if (mapItems[1].getX() != mapItems[0].getX() || mapItems[1].getY() != mapItems[0].getY()) {
                if (mapItems[1].getX() != 2 || mapItems[1].getY() != 4) {
                    if (mapItems[1].getX() != 3 || mapItems[1].getY() != 4) {
                        break;
                    }
                }
            }
        }
        //Quest Dragon
        mapMonsters[0] = monsters[0];
        mapMonsters[0].setX(2);
        mapMonsters[0].setY(4);
        int checkCount;
        //Random Monster
        for (int i = 0; i < 1; i++) {
            mapMonsters[i + 1] = monsters[rand() % 6 + 1];
            while (true) {
                mapMonsters[i + 1].setX(rand() % 4);
                mapMonsters[i + 1].setY(rand() % 4);
                checkCount = 0;
                for (int j = 0; j < 2; j++) {
                    if (j != i + 1) {
                        if (mapMonsters[i + 1].getX() != mapMonsters[j].getX() || mapMonsters[i + 1].getY() != mapMonsters[j].getY()) {
                            if (mapMonsters[i + 1].getX() != 2 || mapMonsters[i + 1].getY() != 4) {
                                if (mapMonsters[i + 1].getX() != 3 || mapMonsters[i + 1].getY() != 4) {
                                    if(mapMonsters[i + 1].getX() != 2 || mapMonsters[i + 1].getY() != 0)
                                        checkCount++;
                                }
                            }
                        }
                    }
                }
                if (checkCount == 1) {
                    break;
            }

            }
        }
        //Random items
        int set = 0;
        for (int i = 0; i < 2; i++) {
            while (true) { // Manually not include 0 or 1 spaces, random + num would causes unconsistant crashes
                set = rand() % 12;
                if (set != 0 && set != 1) {
                    break;
                }
            }
            mapItems[i + 2] = items[set];
            locRand = rand() % 2;
            mapItems[i + 2].setLocation(locRand);
            while (true) { 
                mapItems[i + 2].setX(rand() % 4);
                mapItems[i + 2].setY(rand() % 4);
                checkCount = 0;
                for (int j = 0; j < 4; j++) {
                    if (j != i + 2) {
                        if (mapItems[i + 2].getX() != mapItems[j].getX() || mapItems[i + 2].getX() != mapItems[j].getX()) {
                            if (mapItems[i + 2].getX() != 3 || mapItems[i + 2].getY() != 4) {
                                if (mapItems[i + 2].getX() != 3 || mapItems[i + 2].getY() != 5) {
                                    checkCount++;
                                }
                            }
                        }
                    }
                }
                if (checkCount == 3) {
                    break;
                }
            }
        }
        //Place player at starting position
        player.setX(0);
        player.setY(2);
        int mapY = 0;
        int mapX = 2;
        map[0][2].setplayerPresent(1);
        //Balance
        player.addHP(120);
        //Game loop
        int general = 0;
        bool gameState = true;
        int keyCheck = 0;
        int keyText = 0;
        int combat = -1;
        int prevX = 0;
        int prevY = 2;
        int prevPlayerHP = 0;
        int prevMonsterHP = 0;
        int dextNum;
        int dextCount;
        int dragonCount = 0;
        while (gameState == true) {
            cout << endl << endl << endl;
            printMap5x5(map);
            cout << endl << endl;
            //Check if the player cell contains a monsters
            for (int i = 0; i < 2; i++) {
                if (mapX == mapMonsters[i].getX() && mapY == mapMonsters[i].getY()) {
                    if (mapMonsters[i].getHP() > 0) {
                        cout << "There appears to be a " << mapMonsters[i].getName() << " blocking your path!" << endl;
                        combat = i;
                        break;
                    }
                }
            }
            //Combat
            int crit = 0;
            int hpGain;
            prevPlayerHP = player.getHP();
            prevMonsterHP = mapMonsters[combat].getHP();
            while (combat != -1) {
                cout << endl << endl << endl << "Player Health: " << player.getHP() << "               " << mapMonsters[combat].getName() << " Health: " << mapMonsters[combat].getHP() << endl;
                displayInterfaceCombat();
                cin >> answer;
                if (answer == "1") {
                    crit = rand() % 10;
                    if (crit == 1) {
                        cout << endl << "You critically hit for " << (player.getDamage() * 2) - (mapMonsters[combat].getDefence() / 2) << " damage!" << endl;
                        mapMonsters[combat].setHP((mapMonsters[combat].getHP() - ( ( player.getDamage() * 2 ) - (mapMonsters[combat].getDefence() / 2) ) ) );
                    }
                    else if (crit != 1) {
                        cout << endl << "You hit for " << player.getDamage() - (mapMonsters[combat].getDefence() / 2)  << " damage!" << endl;
                        mapMonsters[combat].setHP((mapMonsters[combat].getHP() - (player.getDamage() - (mapMonsters[combat].getDefence() / 2) ) ) );
                    }
                    if (mapMonsters[combat].getHP() > 0) {
                        if (mapMonsters[combat].getName() == "Dragon" && dragonCount == 2) {
                                for (int i = 0; i < 9; i++) {
                                    if (backpack[i].getName() == "Dragonfire Shield") {
                                        cout << endl << "The dragon breathes down scourching fire. Your Dragonfire Shield absorbs the attack!" << endl;
                                        cout << endl << mapMonsters[combat].getName() << " hit for 0 damage!" << endl;
                                        dragonCount = 0;
                                        break;
                                    }
                                }
                                if (dragonCount == 2) {
                                    cout << endl << "The dragon breathes down scourching fire." << endl;
                                    cout << endl << mapMonsters[combat].getName() << " hit for " << (mapMonsters[combat].getDamage() * 4) - (player.getDefence() / 2) << " damage!" << endl;
                                    player.setHP(player.getHP() - ((mapMonsters[combat].getDamage() * 4) - (player.getDefence() / 2)));
                                    dragonCount = 0;
                                }
                        }
                        else if (mapMonsters[combat].getDamage() - (player.getDefence() / 2) < 0) {
                            cout << endl << mapMonsters[combat].getName() << " hit for 0 damage!" << endl;
                            if (mapMonsters[combat].getName() == "Dragon") {
                                dragonCount++;
                            }
                        }
                        else {
                            cout << endl << mapMonsters[combat].getName() << " hit for " << mapMonsters[combat].getDamage() - (player.getDefence() / 2) << " damage!" << endl;
                            player.setHP(player.getHP() - (mapMonsters[combat].getDamage() - (player.getDefence() / 2)));
                            if (mapMonsters[combat].getName() == "Dragon") {
                                dragonCount++;
                            }
                        }
                        if (player.getHP() < 1) {
                            cout << endl << "You have died" << endl;
                            displayConfirm3();
                            while (true) {
                                cin >> answer;
                                if (answer == "1") {
                                    player.setHP(prevPlayerHP);
                                    mapMonsters[combat].setHP(prevMonsterHP);
                                    map[mapY][mapX].setplayerPresent(0);
                                    mapX = prevX;
                                    mapY = prevY;
                                    map[mapY][mapX].setplayerPresent(1);
                                    combat = -1;
                                    printMap5x5(map);
                                    break;
                                }
                                if (answer == "2") {
                                    gameState = false;
                                    combat = -1;
                                    break;
                                }
                                cout << "Not a valid statement" << endl << "Enter: ";
                            }
                        }
                    }
                    else if (mapMonsters[combat].getHP() < 1) {
                        cout << endl << mapMonsters[combat].getName() << " has been slain!" << endl;
                        if (mapMonsters[combat].getName() == "Dragon") {
                            gameState = false;
                            combat = -1;
                            win = true;
                            cout << endl << endl << endl << endl;
                            displayOutro();
                            break;
                        }
                        hpGain = (mapMonsters[combat].getDamage() * 2) + 10;
                        cout << "You feel rejuvenated + " << hpGain << " HP" << endl << endl;
                        player.addHP(hpGain);
                        combat = -1;
                        break;
                    }
                }
                else if (answer == "2") {
                    dextCount = 0;
                    dextNum = rand() % 90;
                    for (int i = 0; i < player.getDext() + 8; i++) {
                        if (i == dextNum) {
                            cout << endl << "You succesfully run away" << endl << endl;
                            map[mapY][mapX].setplayerPresent(0);
                            mapX = prevX;
                            mapY = prevY;
                            map[mapY][mapX].setplayerPresent(1);
                            combat = -1;
                            printMap5x5(map);
                            dextCount = 1;
                            break;
                        }
                    }
                    if (dextCount == 0) {
                        cout << endl << "You failed to run away" << endl;
                        if (mapMonsters[combat].getName() == "Dragon" && dragonCount == 2) {
                            for (int i = 0; i < 9; i++) {
                                if (backpack[i].getName() == "Dragonfire Shield") {
                                    cout << endl << "The dragon breathes down scourching fire. Your Dragonfire Shield absorbs the attack!" << endl;
                                    cout << endl << mapMonsters[combat].getName() << " hit for 0 damage!" << endl;
                                    dragonCount = 0;
                                    break;
                                }
                            }
                            if (dragonCount == 2) {
                                cout << endl << "The dragon breathes down scourching fire." << endl;
                                cout << endl << mapMonsters[combat].getName() << " hit for " << (mapMonsters[combat].getDamage() * 4) - (player.getDefence() / 2) << " damage!" << endl;
                                player.setHP(player.getHP() - ((mapMonsters[combat].getDamage() * 4) - (player.getDefence() / 2)));
                                dragonCount = 0;
                            }
                        }
                        else if (mapMonsters[combat].getDamage() - (player.getDefence() / 2) < 0) {
                            cout << endl << mapMonsters[combat].getName() << " hit for 0 damage!" << endl;
                            if (mapMonsters[combat].getName() == "Dragon") {
                                dragonCount++;
                            }
                        }
                        else {
                            cout << endl << mapMonsters[combat].getName() << " hit for " << mapMonsters[combat].getDamage() - (player.getDefence() / 2) << " damage!" << endl;
                            player.setHP(player.getHP() - (mapMonsters[combat].getDamage() - (player.getDefence() / 2)));
                            if (mapMonsters[combat].getName() == "Dragon") {
                                dragonCount++;
                            }
                        }
                        if (player.getHP() < 1) {
                            cout << endl << "You have died" << endl;
                            displayConfirm3();
                            while (true) {
                                cin >> answer;
                                if (answer == "1") {
                                    player.setHP(prevPlayerHP);
                                    mapMonsters[combat].setHP(prevMonsterHP);
                                    map[mapY][mapX].setplayerPresent(0);
                                    mapX = prevX;
                                    mapY = prevY;
                                    map[mapY][mapX].setplayerPresent(1);
                                    combat = -1;
                                    printMap5x5(map);
                                    break;
                                }
                                if (answer == "2") {
                                    gameState = false;
                                    combat = -1;
                                    break;
                                }
                                cout << "Not a valid statement" << endl << "Enter: ";
                            }
                        }
                    }
                }
                else {
                    cout << "Invalid Command" << endl;
                }

            }
            if (gameState == false) {
                break;
            }
            if (general == 0) {
                displayInterfaceGeneral();
            }
            else {
                displayInterfaceHelp();
            }
            general = 1;
            //Input Checks
            prevX = mapX;
            prevY = mapY;
            while (true) {
                string itemCheck;
                int itemNum;
                cin >> answer;
                //Map Display
                if (answer == "mp" || answer == "Mp" || answer == "mP" || answer == "MP") {
                    cout << endl << endl;
                    printMap5x5(map);
                    cout << endl << endl;
                    cout << "Enter: ";
                }
                //Player Movement
                else if (answer == "w" || answer == "W") {
                    if (mapY - 1 > -1) {
                        if (playerMoveCheck("W", map[mapY - 1][mapX]) == true) {
                            map[mapY][mapX].setplayerPresent(0);
                            mapY -= 1;
                            player.setY(mapY);
                            map[mapY][mapX].setplayerPresent(1);
                            break;
                        }
                        else {
                            cout << "Error: Not a valid movement option" << endl << "Enter: ";
                        }
                    }
                    else {
                        cout << "Error: Not a valid movement option" << endl << "Enter: ";
                    }
                }
                else if (answer == "a" || answer == "A") {
                    if (mapX - 1 > -1) {
                        if (playerMoveCheck("A", map[mapY][mapX - 1]) == true) {
                            if (mapX == 4 && mapY == 4 && keyCheck == 0) {
                                for (int i = 0; i < 9; i++) {
                                    if (backpack[i].getName() == "Skull Key") {
                                        if (keyText == 0) {
                                            cout << endl << "There appears to be a large doorway blocking the path. You use the skeleton key to open the door" << endl;
                                        }
                                        if (keyText == 1) {
                                            cout << endl << "You use the skeleton key to open the door" << endl;
                                        }
                                        map[mapY][mapX].setplayerPresent(0);
                                        mapX -= 1;
                                        player.setX(mapX);
                                        map[mapY][mapX].setplayerPresent(1);
                                        keyCheck = 1;
                                        printMap5x5(map);
                                        break;
                                    }
                                }
                                if (keyCheck == 0) {
                                    cout << endl << "There appears to be a large doorway blocking the path. Perhaps there is a key lying around somewhere" << endl;
                                    keyText = 1;
                                    break;
                                }
                            }
                            else {
                                map[mapY][mapX].setplayerPresent(0);
                                mapX -= 1;
                                player.setX(mapX);
                                map[mapY][mapX].setplayerPresent(1);
                                break;
                            }
                        }
                        else {
                            cout << "Error: Not a valid movement option" << endl << "Enter: ";
                        }
                    }
                    else {
                        cout << "Error: Not a valid movement option" << endl << "Enter: ";
                    }
                }
                else if (answer == "d" || answer == "D") {
                    if (mapX + 1 < 5) {
                        if (playerMoveCheck("D", map[mapY][mapX + 1]) == true) {
                            map[mapY][mapX].setplayerPresent(0);
                            mapX += 1;
                            player.setX(mapX);
                            map[mapY][mapX].setplayerPresent(1);
                            break;
                        }
                        else {
                            cout << "Error: Not a valid movement option" << endl << "Enter: ";
                        }
                    }
                    else {
                        cout << "Error: Not a valid movement option" << endl << "Enter: ";
                    }
                }
                else if (answer == "s" || answer == "S") {
                    if (mapY + 1 < 5) {
                        if (playerMoveCheck("S", map[mapY + 1][mapX]) == true) {
                            map[mapY][mapX].setplayerPresent(0);
                            mapY += 1;
                            player.setY(mapY);
                            map[mapY][mapX].setplayerPresent(1);
                            break;
                        }
                        else {
                            cout << "Error: Not a valid movement option" << endl << "Enter: ";
                        }
                    }
                    else {
                        cout << "Error: Not a valid movement option" << endl << "Enter: ";
                    }
                }
                //Room Options
                else if (answer == "e" || answer == "E") {
                    for (int i = 0; i < 4; i++) {
                        if (mapX == mapItems[i].getX() && mapY == mapItems[i].getY()) {
                            itemCheck = "yes";
                            itemNum = i;
                            break;
                        }
                    }
                    if (itemCheck == "yes") {
                        cout << endl << itemLocationInfo(mapItems[itemNum].getLocation()) << endl << "Enter: ";
                    }
                    else {
                        cout << endl << "The room appears to be empty" << endl << "Enter: ";
                    }
                }
                else if (answer == "g" || answer == "G") {
                    for (int i = 0; i < 4; i++) {
                        if (mapX == mapItems[i].getX() && mapY == mapItems[i].getY()) {
                            itemCheck = "yes";
                            itemNum = i;
                            break;
                        }
                    }
                    if (itemCheck == "yes") {
                        cout << endl << "You found a " << mapItems[itemNum].getName() << " " << itemLocationOpen(mapItems[itemNum].getLocation());
                        int counter = 0;
                        for (int i = 0; i < 9; i++) {
                            if (backpack[i].getName() == " ") {
                                backpack[i] = mapItems[itemNum];
                                player = addItemStats(player, backpack[i]);
                                cout << endl << "Item added to your backpack" << endl << "Enter: ";
                                mapItems[itemNum].reset();
                                break;
                            }
                            else {
                                counter++;
                            }
                        }
                        if (counter == 9) {
                            cout << endl << "You can not take this item as your backpack is full" << endl << "Enter: ";
                        }
                    }
                    else {
                        cout << "You found nothing while searching" << endl << "Enter: ";
                    }
                }
                //Interface Options
                else if (answer == "m" || answer == "M") {
                    displayInterfaceGeneral();
                }
                else if (answer == "q" || answer == "Q"){
                    gameState = false;
                    break;
}
                else if (answer == "p" || answer == "P") {
                    displayInterfaceCombat();
                }
                else if (answer == "h" || answer == "H") {
                    displayInterfaceHints();
                }
                //Inventory and Stats Options
                else if (answer == "i" || answer == "I") {
                    int itemChoice = 0;
                    while (true) {
                        cout << endl << "Inventory:" << endl;
                        for (int i = 0; i < 9; i++) {
                            cout << i + 1 << ": " << backpack[i].getName() << endl;
                        }
                        displayInterfaceInventory();
                        cin >> itemChoice;
                        if (itemChoice == 0) {
                            break;
                        }
                        else if (itemChoice < 1 || itemChoice > 9) {
                            cout << "Invalid Item ID" << endl;
                            cout << "Enter: ";
                        }
                        else if (backpack[itemChoice - 1].getName() == " ") {
                            cout << endl << "No Item located in that ID" << endl;
                        }
                        else {
                            cout << endl << "Item: " << backpack[itemChoice - 1].getName() << endl;
                            displayInterfaceItem();
                            while (true) {
                                cin >> answer;
                                if (answer == "1") {
                                    cout << endl << backpack[itemChoice - 1].getBio() << endl;
                                    displayInterfaceItem();
                                }
                                else if (answer == "2") {
                                    cout << endl << "Warning: this will destroy the item!" << endl;
                                    displayConfirm2();
                                    while (true) {
                                        cin >> answer;
                                        if (answer == "c" || answer == "C") {
                                            backpack[itemChoice - 1].reset();
                                            answer = "n";
                                            break;
                                        }
                                        else if (answer == "n" || answer == "N") {
                                            break;
                                        }
                                        else {
                                            cout << "Not a valid statement" << endl << "Enter: ";
                                        }
                                    }
                                    if (answer == "n" || answer == "N") {
                                        break;
                                    }
                                }
                                else if (answer == "n" || answer == "N") {
                                    break;
                                }
                                else {
                                    cout << "Not a valid statement" << endl << "Enter: ";
                                }
                            }
                        }

                    }
                    displayInterfaceGeneral();
                }
                else if (answer == "st" || answer == "St" || answer == "sT" || answer == "ST") {
                    player.checkStats();
                }
                else {
                    cout << "Invalid Command" << endl << "Enter: ";
                }
            }
        }
    }
    if (mapSize == "2") {
        char output[100];
        int layout[100];
        Maze map[10][10];
        ifstream File;
        File.open("10x10.txt");
        //Convert text file to ints for reading
        int count = 0;
        while (File >> output) {
            layout[count] = atoi(output);
            count++;
        }
        File.close();
        //Set wallType for array
        count = 0;
        for (int row = 0; row < 10; row++) {
            for (int col = 0; col < 10; col++) {
                map[row][col].setType(layout[count]);
                count++;
            }
        }
        //Randomize Items Collection
        srand(time(NULL));
        Item mapItems[10];
        Monster mapMonsters[10];
        //locRand used for how items are found (chest,body,etc) random
        int locRand;
        //Quest Item
        mapItems[0] = items[0];
        locRand = rand() % 2;
        mapItems[0].setLocation(locRand);
        while (true) {
            mapItems[0].setX(rand() % 9);
            mapItems[0].setY(rand() % 9);
            //Prevent spawns in area not accessible yet
            if (mapItems[0].getX() != 6 || mapItems[0].getY() != 9) {
                if (mapItems[0].getX() != 5 || mapItems[0].getY() != 9) {
                    break;
                }
            }
        }
        //Quest Item
        mapItems[1] = items[1];
        locRand = rand() % 2;
        mapItems[1].setLocation(locRand);
        while (true) {
            mapItems[1].setX(rand() % 9);
            mapItems[1].setY(rand() % 9);
            //Prevent spawns in area not accessible yet
            if (mapItems[1].getX() != mapItems[0].getX() || mapItems[1].getY() != mapItems[0].getY()) {
                if (mapItems[1].getX() != 6 || mapItems[1].getY() != 9) {
                    if (mapItems[1].getX() != 5 || mapItems[1].getY() != 9) {
                        break;
                    }
                }
            }
        }
        //Quest Dragon
        mapMonsters[0] = monsters[0];
        mapMonsters[0].setX(5);
        mapMonsters[0].setY(9);
        int checkCount;
        //Random Monster
        for (int i = 0; i < 9; i++) {
            mapMonsters[i + 1] = monsters[rand() % 6 + 1];
            while (true) {
                mapMonsters[i + 1].setX(rand() % 9);
                mapMonsters[i + 1].setY(rand() % 9);
                checkCount = 0;
                for (int j = 0; j < 10; j++) {
                    if (j != i + 1) {
                        if (mapMonsters[i + 1].getX() != mapMonsters[j].getX() || mapMonsters[i + 1].getY() != mapMonsters[j].getY()) {
                            if (mapMonsters[i + 1].getX() != 4 || mapMonsters[i + 1].getY() != 0) {
                                if (mapMonsters[i + 1].getX() != 6 || mapMonsters[i + 1].getY() != 9) {
                                    if (mapMonsters[i + 1].getX() != 5 || mapMonsters[i + 1].getY() != 9)
                                        checkCount++;
                                }
                            }
                        }
                    }
                }
                if (checkCount == 9) {
                    break;
                }

            }
        }
        //Random items
        int set = 0;
        for (int i = 0; i < 8; i++) {
            while (true) { // Manually not include 0 or 1 spaces, random + num would causes inconsistant crashes
                set = rand() % 12;
                if (set != 0 && set != 1) {
                    break;
                }
            }
            mapItems[i + 2] = items[set];
            locRand = rand() % 2;
            mapItems[i + 2].setLocation(locRand);
            while (true) {
                mapItems[i + 2].setX(rand() % 9);
                mapItems[i + 2].setY(rand() % 9);
                checkCount = 0;
                for (int j = 0; j < 9; j++) {
                    if (j != i + 2) {
                        if (mapItems[i + 2].getX() != mapItems[j].getX() || mapItems[i + 2].getX() != mapItems[j].getX()) {
                            if (mapItems[i + 2].getX() != 6 || mapItems[i + 2].getY() != 9) {
                                if (mapItems[i + 2].getX() != 5 || mapItems[i + 2].getY() != 9) {
                                    checkCount++;
                                }
                            }
                        }
                    }
                }
                if (checkCount == 8) {
                    break;
                }
            }
        }
        //Place player at starting position
        player.setX(4);
        player.setY(0);
        int mapY = 0;
        int mapX = 4;
        map[0][4].setplayerPresent(1);
        //Balance
        player.addHP(120);
        //Game loop
        int general = 0;
        bool gameState = true;
        int keyCheck = 0;
        int keyText = 0;
        int combat = -1;
        int prevX = 0;
        int prevY = 4;
        int prevPlayerHP = 0;
        int prevMonsterHP = 0;
        int dextNum;
        int dextCount;
        int dragonCount = 0;
        while (gameState == true) {
            cout << endl << endl << endl;
            printMap10x10(map);
            cout << endl << endl;
            //Check if the player cell contains a monsters
            for (int i = 0; i < 9; i++) {
                if (mapX == mapMonsters[i].getX() && mapY == mapMonsters[i].getY()) {
                    if (mapMonsters[i].getHP() > 0) {
                        cout << "There appears to be a " << mapMonsters[i].getName() << " blocking your path!" << endl;
                        combat = i;
                        break;
                    }
                }
            }
            //Combat
            int crit = 0;
            int hpGain;
            prevPlayerHP = player.getHP();
            prevMonsterHP = mapMonsters[combat].getHP();
            while (combat != -1) {
                cout << endl << endl << endl << "Player Health: " << player.getHP() << "               " << mapMonsters[combat].getName() << " Health: " << mapMonsters[combat].getHP() << endl;
                displayInterfaceCombat();
                cin >> answer;
                if (answer == "1") {
                    crit = rand() % 10;
                    if (crit == 1) {
                        cout << endl << "You critically hit for " << (player.getDamage() * 2) - (mapMonsters[combat].getDefence() / 2) << " damage!" << endl;
                        mapMonsters[combat].setHP((mapMonsters[combat].getHP() - ((player.getDamage() * 2) - (mapMonsters[combat].getDefence() / 2))));
                    }
                    else if (crit != 1) {
                        cout << endl << "You hit for " << player.getDamage() - (mapMonsters[combat].getDefence() / 2) << " damage!" << endl;
                        mapMonsters[combat].setHP((mapMonsters[combat].getHP() - (player.getDamage() - (mapMonsters[combat].getDefence() / 2))));
                    }
                    if (mapMonsters[combat].getHP() > 0) {
                        if (mapMonsters[combat].getName() == "Dragon" && dragonCount == 2) {
                            for (int i = 0; i < 9; i++) {
                                if (backpack[i].getName() == "Dragonfire Shield") {
                                    cout << endl << "The dragon breathes down scourching fire. Your Dragonfire Shield absorbs the attack!" << endl;
                                    cout << endl << mapMonsters[combat].getName() << " hit for 0 damage!" << endl;
                                    dragonCount = 0;
                                    break;
                                }
                            }
                            if (dragonCount == 2) {
                                cout << endl << "The dragon breathes down scourching fire." << endl;
                                cout << endl << mapMonsters[combat].getName() << " hit for " << (mapMonsters[combat].getDamage() * 7) - (player.getDefence() / 2) << " damage!" << endl;
                                player.setHP(player.getHP() - ((mapMonsters[combat].getDamage() * 4) - (player.getDefence() / 2)));
                                dragonCount = 0;
                            }
                        }
                        else if (mapMonsters[combat].getDamage() - (player.getDefence() / 2) < 0) {
                            cout << endl << mapMonsters[combat].getName() << " hit for 0 damage!" << endl;
                            if (mapMonsters[combat].getName() == "Dragon") {
                                dragonCount++;
                            }
                        }
                        else {
                            cout << endl << mapMonsters[combat].getName() << " hit for " << mapMonsters[combat].getDamage() - (player.getDefence() / 2) << " damage!" << endl;
                            player.setHP(player.getHP() - (mapMonsters[combat].getDamage() - (player.getDefence() / 2)));
                            if (mapMonsters[combat].getName() == "Dragon") {
                                dragonCount++;
                            }
                        }
                        if (player.getHP() < 1) {
                            cout << endl << "You have died" << endl;
                            displayConfirm3();
                            while (true) {
                                cin >> answer;
                                if (answer == "1") {
                                    player.setHP(prevPlayerHP);
                                    mapMonsters[combat].setHP(prevMonsterHP);
                                    map[mapY][mapX].setplayerPresent(0);
                                    mapX = prevX;
                                    mapY = prevY;
                                    map[mapY][mapX].setplayerPresent(1);
                                    combat = -1;
                                    printMap10x10(map);
                                    break;
                                }
                                if (answer == "2") {
                                    gameState = false;
                                    combat = -1;
                                    break;
                                }
                                cout << "Not a valid statement" << endl << "Enter: ";
                            }
                        }
                    }
                    else if (mapMonsters[combat].getHP() < 1) {
                        cout << endl << mapMonsters[combat].getName() << " has been slain!" << endl;
                        if (mapMonsters[combat].getName() == "Dragon") {
                            gameState = false;
                            combat = -1;
                            win = true;
                            cout << endl << endl << endl << endl;
                            displayOutro();
                            break;
                        }
                        hpGain = (mapMonsters[combat].getDamage() * 2) + 10;
                        cout << "You feel rejuvenated + " << hpGain << " HP" << endl << endl;
                        player.addHP(hpGain);
                        combat = -1;
                        break;
                    }
                }
                else if (answer == "2") {
                    dextCount = 0;
                    dextNum = rand() % 90;
                    for (int i = 0; i < player.getDext() + 8; i++) {
                        if (i == dextNum) {
                            cout << endl << "You succesfully run away" << endl << endl;
                            map[mapY][mapX].setplayerPresent(0);
                            mapX = prevX;
                            mapY = prevY;
                            map[mapY][mapX].setplayerPresent(1);
                            combat = -1;
                            printMap10x10(map);
                            dextCount = 1;
                            break;
                        }
                    }
                    if (dextCount == 0) {
                        cout << endl << "You failed to run away" << endl;
                        if (mapMonsters[combat].getName() == "Dragon" && dragonCount == 2) {
                            for (int i = 0; i < 9; i++) {
                                if (backpack[i].getName() == "Dragonfire Shield") {
                                    cout << endl << "The dragon breathes down scourching fire. Your Dragonfire Shield absorbs the attack!" << endl;
                                    cout << endl << mapMonsters[combat].getName() << " hit for 0 damage!" << endl;
                                    dragonCount = 0;
                                    break;
                                }
                            }
                            if (dragonCount == 2) {
                                cout << endl << "The dragon breathes down scourching fire." << endl;
                                cout << endl << mapMonsters[combat].getName() << " hit for " << (mapMonsters[combat].getDamage() * 7) - (player.getDefence() / 2) << " damage!" << endl;
                                player.setHP(player.getHP() - ((mapMonsters[combat].getDamage() * 4) - (player.getDefence() / 2)));
                                dragonCount = 0;
                            }
                        }
                        else if (mapMonsters[combat].getDamage() - (player.getDefence() / 2) < 0) {
                            cout << endl << mapMonsters[combat].getName() << " hit for 0 damage!" << endl;
                            if (mapMonsters[combat].getName() == "Dragon") {
                                dragonCount++;
                            }
                        }
                        else {
                            cout << endl << mapMonsters[combat].getName() << " hit for " << mapMonsters[combat].getDamage() - (player.getDefence() / 2) << " damage!" << endl;
                            player.setHP(player.getHP() - (mapMonsters[combat].getDamage() - (player.getDefence() / 2)));
                            if (mapMonsters[combat].getName() == "Dragon") {
                                dragonCount++;
                            }
                        }
                        if (player.getHP() < 1) {
                            cout << endl << "You have died" << endl;
                            displayConfirm3();
                            while (true) {
                                cin >> answer;
                                if (answer == "1") {
                                    player.setHP(prevPlayerHP);
                                    mapMonsters[combat].setHP(prevMonsterHP);
                                    map[mapY][mapX].setplayerPresent(0);
                                    mapX = prevX;
                                    mapY = prevY;
                                    map[mapY][mapX].setplayerPresent(1);
                                    combat = -1;
                                    printMap10x10(map);
                                    break;
                                }
                                if (answer == "2") {
                                    gameState = false;
                                    combat = -1;
                                    break;
                                }
                                cout << "Not a valid statement" << endl << "Enter: ";
                            }
                        }
                    }
                }
                else {
                    cout << "Invalid Command" << endl;
                }

            }
            if (gameState == false) {
                break;
            }
            if (general == 0) {
                displayInterfaceGeneral();
            }
            else {
                displayInterfaceHelp();
            }
            general = 1;
            //Input Checks
            prevX = mapX;
            prevY = mapY;
            while (true) {
                string itemCheck;
                int itemNum;
                cin >> answer;
                //Map Display
                if (answer == "mp" || answer == "Mp" || answer == "mP" || answer == "MP") {
                    cout << endl << endl;
                    printMap10x10(map);
                    cout << endl << endl;
                    cout << "Enter: ";
                }
                //Player Movement
                else if (answer == "w" || answer == "W") {
                    if (mapY - 1 > -1) {
                        if (playerMoveCheck("W", map[mapY - 1][mapX]) == true) {
                            map[mapY][mapX].setplayerPresent(0);
                            mapY -= 1;
                            player.setY(mapY);
                            map[mapY][mapX].setplayerPresent(1);
                            break;
                        }
                        else {
                            cout << "Error: Not a valid movement option" << endl << "Enter: ";
                        }
                    }
                    else {
                        cout << "Error: Not a valid movement option" << endl << "Enter: ";
                    }
                }
                else if (answer == "a" || answer == "A") {
                    if (mapX - 1 > -1) {
                        if (playerMoveCheck("A", map[mapY][mapX - 1]) == true) {
                                map[mapY][mapX].setplayerPresent(0);
                                mapX -= 1;
                                player.setX(mapX);
                                map[mapY][mapX].setplayerPresent(1);
                                break;
                        }
                        else {
                            cout << "Error: Not a valid movement option" << endl << "Enter: ";
                        }
                    }
                    else {
                        cout << "Error: Not a valid movement option" << endl << "Enter: ";
                    }
                }
                else if (answer == "d" || answer == "D") {
                    if (mapX + 1 < 10) {
                        if (playerMoveCheck("D", map[mapY][mapX + 1]) == true) {
                            map[mapY][mapX].setplayerPresent(0);
                            mapX += 1;
                            player.setX(mapX);
                            map[mapY][mapX].setplayerPresent(1);
                            break;
                        }
                        else {
                            cout << "Error: Not a valid movement option" << endl << "Enter: ";
                        }
                    }
                    else {
                        cout << "Error: Not a valid movement option" << endl << "Enter: ";
                    }
                }
                else if (answer == "s" || answer == "S") {
                    if (mapY + 1 < 10) {
                        if (playerMoveCheck("S", map[mapY + 1][mapX]) == true) {
                            if (mapX == 6 && mapY == 8 && keyCheck == 0) {
                                for (int i = 0; i < 9; i++) {
                                    if (backpack[i].getName() == "Skull Key") {
                                        if (keyText == 0) {
                                            cout << endl << "There appears to be a large doorway blocking the path. You use the skeleton key to open the door" << endl;
                                        }
                                        if (keyText == 1) {
                                            cout << endl << "You use the skeleton key to open the door" << endl;
                                        }
                                        map[mapY][mapX].setplayerPresent(0);
                                        mapY += 1;
                                        player.setY(mapY);
                                        map[mapY][mapX].setplayerPresent(1);
                                        keyCheck = 1;
                                        printMap10x10(map);
                                        break;
                                    }
                                }
                                if (keyCheck == 0) {
                                    cout << endl << "There appears to be a large doorway blocking the path. Perhaps there is a key lying around somewhere" << endl;
                                    keyText = 1;
                                    break;
                                }
                            }
                            else {
                                map[mapY][mapX].setplayerPresent(0);
                                mapY += 1;
                                player.setY(mapY);
                                map[mapY][mapX].setplayerPresent(1);
                                break;
                            }
                        }
                        else {
                            cout << "Error: Not a valid movement option" << endl << "Enter: ";
                        }
                    }
                    else {
                        cout << "Error: Not a valid movement option" << endl << "Enter: ";
                    }
                }
                //Room Options
                else if (answer == "e" || answer == "E") {
                    for (int i = 0; i < 9; i++) {
                        if (mapX == mapItems[i].getX() && mapY == mapItems[i].getY()) {
                            itemCheck = "yes";
                            itemNum = i;
                            break;
                        }
                    }
                    if (itemCheck == "yes") {
                        cout << endl << itemLocationInfo(mapItems[itemNum].getLocation()) << endl << "Enter: ";
                    }
                    else {
                        cout << endl << "The room appears to be empty" << endl << "Enter: ";
                    }
                }
                else if (answer == "g" || answer == "G") {
                    for (int i = 0; i < 9; i++) {
                        if (mapX == mapItems[i].getX() && mapY == mapItems[i].getY()) {
                            itemCheck = "yes";
                            itemNum = i;
                            break;
                        }
                    }
                    if (itemCheck == "yes") {
                        cout << endl << "You found a " << mapItems[itemNum].getName() << " " << itemLocationOpen(mapItems[itemNum].getLocation());
                        int counter = 0;
                        for (int i = 0; i < 9; i++) {
                            if (backpack[i].getName() == " ") {
                                backpack[i] = mapItems[itemNum];
                                player = addItemStats(player, backpack[i]);
                                cout << endl << "Item added to your backpack" << endl << "Enter: ";
                                mapItems[itemNum].reset();
                                break;
                            }
                            else {
                                counter++;
                            }
                        }
                        if (counter == 9) {
                            cout << endl << "You can not take this item as your backpack is full" << endl << "Enter: ";
                        }
                    }
                    else {
                        cout << "You found nothing while searching" << endl << "Enter: ";
                    }
                }
                //Interface Options
                else if (answer == "m" || answer == "M") {
                    displayInterfaceGeneral();
                }
                else if (answer == "q" || answer == "Q") {
                    gameState = false;
                    break;
                }
                else if (answer == "p" || answer == "P") {
                    displayInterfaceCombat();
                }
                else if (answer == "h" || answer == "H") {
                    displayInterfaceHints();
                }
                //Inventory and Stats Options
                else if (answer == "i" || answer == "I") {
                    int itemChoice = 0;
                    while (true) {
                        cout << endl << "Inventory:" << endl;
                        for (int i = 0; i < 9; i++) {
                            cout << i + 1 << ": " << backpack[i].getName() << endl;
                        }
                        displayInterfaceInventory();
                        cin >> itemChoice;
                        if (itemChoice == 0) {
                            break;
                        }
                        else if (itemChoice < 1 || itemChoice > 9) {
                            cout << "Invalid Item ID" << endl;
                            cout << "Enter: ";
                        }
                        else if (backpack[itemChoice - 1].getName() == " ") {
                            cout << endl << "No Item located in that ID" << endl;
                        }
                        else {
                            cout << endl << "Item: " << backpack[itemChoice - 1].getName() << endl;
                            displayInterfaceItem();
                            while (true) {
                                cin >> answer;
                                if (answer == "1") {
                                    cout << endl << backpack[itemChoice - 1].getBio() << endl;
                                    displayInterfaceItem();
                                }
                                else if (answer == "2") {
                                    cout << endl << "Warning: this will destroy the item!" << endl;
                                    displayConfirm2();
                                    while (true) {
                                        cin >> answer;
                                        if (answer == "c" || answer == "C") {
                                            backpack[itemChoice - 1].reset();
                                            answer = "n";
                                            break;
                                        }
                                        else if (answer == "n" || answer == "N") {
                                            break;
                                        }
                                        else {
                                            cout << "Not a valid statement" << endl << "Enter: ";
                                        }
                                    }
                                    if (answer == "n" || answer == "N") {
                                        break;
                                    }
                                }
                                else if (answer == "n" || answer == "N") {
                                    break;
                                }
                                else {
                                    cout << "Not a valid statement" << endl << "Enter: ";
                                }
                            }
                        }

                    }
                    displayInterfaceGeneral();
                }
                else if (answer == "st" || answer == "St" || answer == "sT" || answer == "ST") {
                    player.checkStats();
                }
                else {
                    cout << "Invalid Command" << endl << "Enter: ";
                }
            }
        }
    }
    if (mapSize == "3") {
        char output[225];
        int layout[225];
        Maze map[15][15];
        ifstream File;
        File.open("15x15.txt");
        //Convert text file to ints for reading
        int count = 0;
        while (File >> output) {
            layout[count] = atoi(output);
            count++;
        }
        File.close();
        //Set wallType for array
        count = 0;
        for (int row = 0; row < 15; row++) {
            for (int col = 0; col < 15; col++) {
                map[row][col].setType(layout[count]);
                count++;
            }
        }
        //Randomize Items Collection
        srand(time(NULL));
        Item mapItems[22];
        Monster mapMonsters[22];
        //locRand used for how items are found (chest,body,etc) random
        int locRand = 0;
        //Quest Item
        mapItems[0] = items[0];
        locRand = rand() % 2;
        mapItems[0].setLocation(locRand);
        while (true) {
            mapItems[0].setX(rand() % 14);
            mapItems[0].setY(rand() % 14);
            //Prevent spawns in area not accessible yet
            if (mapItems[0].getX() != 6 || mapItems[0].getY() != 14) {
                if (mapItems[0].getX() != 7 || mapItems[0].getY() != 14) {
                    break;
                }
            }
        }
        //Quest Item
        mapItems[1] = items[1];
        locRand = rand() % 2;
        mapItems[1].setLocation(locRand);
        while (true) {
            mapItems[1].setX(rand() % 14);
            mapItems[1].setY(rand() % 14);
            //Prevent spawns in area not accessible yet
            if (mapItems[1].getX() != mapItems[0].getX() || mapItems[1].getY() != mapItems[0].getY()) {
                if (mapItems[1].getX() != 6 || mapItems[1].getY() != 14) {
                    if (mapItems[1].getX() != 7 || mapItems[1].getY() != 14) {
                        break;
                    }
                }
            }
        }
        //Quest Dragon
        mapMonsters[0] = monsters[0];
        mapMonsters[0].setX(7);
        mapMonsters[0].setY(14);
        int checkCount;
        //Random Monster
        for (int i = 0; i < 19; i++) {
            mapMonsters[i + 1] = monsters[rand() % 6 + 1];
            while (true) {
                mapMonsters[i + 1].setX(rand() % 14);
                mapMonsters[i + 1].setY(rand() % 14);
                checkCount = 0;
                for (int j = 0; j < 22; j++) {
                    if (j != i + 1) {
                        if (mapMonsters[i + 1].getX() != mapMonsters[j].getX() || mapMonsters[i + 1].getY() != mapMonsters[j].getY()) {
                            if (mapMonsters[i + 1].getX() != 7 || mapMonsters[i + 1].getY() != 0) {
                                if (mapMonsters[i + 1].getX() != 6 || mapMonsters[i + 1].getY() != 14) {
                                    if (mapMonsters[i + 1].getX() != 7 || mapMonsters[i + 1].getY() != 14)
                                        checkCount++;
                                }
                            }
                        }
                    }
                }
                if (checkCount == 21) {
                    break;
                }

            }
        }
        //Random items
        int set = 0;
        for (int i = 0; i < 20; i++) {
            while (true) { // Manually not include 0 or 1 spaces, random + num would causes inconsistant crashes
                set = rand() % 12;
                if (set != 0 && set != 1) {
                    break;
                }
            }
            mapItems[i + 2] = items[set];
            locRand = rand() % 2;
            mapItems[i + 2].setLocation(locRand);
            while (true) {
                mapItems[i + 2].setX(rand() % 14);
                mapItems[i + 2].setY(rand() % 14);
                checkCount = 0;
                for (int j = 0; j < 22; j++) {
                    if (j != i + 2) {
                        if (mapItems[i + 2].getX() != mapItems[j].getX() || mapItems[i + 2].getX() != mapItems[j].getX()) {
                            if (mapItems[i + 2].getX() != 6 || mapItems[i + 2].getY() != 14) {
                                if (mapItems[i + 2].getX() != 7 || mapItems[i + 2].getY() != 14) {
                                    checkCount++;
                                }
                            }
                        }
                    }
                }
                if (i < 12 && checkCount == 21) {
                    break;
                }
                if (i > 11 && checkCount == 20) {
                    break;
                }
            }
        }
        //Place player at starting position
        player.setX(7);
        player.setY(0);
        int mapY = 0;
        int mapX = 7;
        map[0][7].setplayerPresent(1);
        //Balance
        player.addHP(120);
        //Game loop
        int general = 0;
        bool gameState = true;
        int keyCheck = 0;
        int keyText = 0;
        int combat = -1;
        int prevX = 0;
        int prevY = 4;
        int prevPlayerHP = 0;
        int prevMonsterHP = 0;
        int dextNum;
        int dextCount;
        int dragonCount = 0;
        while (gameState == true) {
            cout << endl << endl << endl;
            printMap15x15(map);
            cout << endl << endl;
            //Check if the player cell contains a monsters
            for (int i = 0; i < 21; i++) {
                if (mapX == mapMonsters[i].getX() && mapY == mapMonsters[i].getY()) {
                    if (mapMonsters[i].getHP() > 0) {
                        cout << "There appears to be a " << mapMonsters[i].getName() << " blocking your path!" << endl;
                        combat = i;
                        break;
                    }
                }
            }
            //Combat
            int crit = 0;
            int hpGain;
            prevPlayerHP = player.getHP();
            prevMonsterHP = mapMonsters[combat].getHP();
            while (combat != -1) {
                cout << endl << endl << endl << "Player Health: " << player.getHP() << "               " << mapMonsters[combat].getName() << " Health: " << mapMonsters[combat].getHP() << endl;
                displayInterfaceCombat();
                cin >> answer;
                if (answer == "1") {
                    crit = rand() % 10;
                    if (crit == 1) {
                        cout << endl << "You critically hit for " << (player.getDamage() * 2) - (mapMonsters[combat].getDefence() / 2) << " damage!" << endl;
                        mapMonsters[combat].setHP((mapMonsters[combat].getHP() - ((player.getDamage() * 2) - (mapMonsters[combat].getDefence() / 2))));
                    }
                    else if (crit != 1) {
                        cout << endl << "You hit for " << player.getDamage() - (mapMonsters[combat].getDefence() / 2) << " damage!" << endl;
                        mapMonsters[combat].setHP((mapMonsters[combat].getHP() - (player.getDamage() - (mapMonsters[combat].getDefence() / 2))));
                    }
                    if (mapMonsters[combat].getHP() > 0) {
                        if (mapMonsters[combat].getName() == "Dragon" && dragonCount == 2) {
                            for (int i = 0; i < 9; i++) {
                                if (backpack[i].getName() == "Dragonfire Shield") {
                                    cout << endl << "The dragon breathes down scourching fire. Your Dragonfire Shield absorbs the attack!" << endl;
                                    cout << endl << mapMonsters[combat].getName() << " hit for 0 damage!" << endl;
                                    dragonCount = 0;
                                    break;
                                }
                            }
                            if (dragonCount == 2) {
                                cout << endl << "The dragon breathes down scourching fire." << endl;
                                cout << endl << mapMonsters[combat].getName() << " hit for " << (mapMonsters[combat].getDamage() * 7) - (player.getDefence() / 2) << " damage!" << endl;
                                player.setHP(player.getHP() - ((mapMonsters[combat].getDamage() * 4) - (player.getDefence() / 2)));
                                dragonCount = 0;
                            }
                        }
                        else if (mapMonsters[combat].getDamage() - (player.getDefence() / 2) < 0) {
                            cout << endl << mapMonsters[combat].getName() << " hit for 0 damage!" << endl;
                            if (mapMonsters[combat].getName() == "Dragon") {
                                dragonCount++;
                            }
                        }
                        else {
                            cout << endl << mapMonsters[combat].getName() << " hit for " << mapMonsters[combat].getDamage() - (player.getDefence() / 2) << " damage!" << endl;
                            player.setHP(player.getHP() - (mapMonsters[combat].getDamage() - (player.getDefence() / 2)));
                            if (mapMonsters[combat].getName() == "Dragon") {
                                dragonCount++;
                            }
                        }
                        if (player.getHP() < 1) {
                            cout << endl << "You have died" << endl;
                            displayConfirm3();
                            while (true) {
                                cin >> answer;
                                if (answer == "1") {
                                    player.setHP(prevPlayerHP);
                                    mapMonsters[combat].setHP(prevMonsterHP);
                                    map[mapY][mapX].setplayerPresent(0);
                                    mapX = prevX;
                                    mapY = prevY;
                                    map[mapY][mapX].setplayerPresent(1);
                                    combat = -1;
                                    printMap15x15(map);
                                    break;
                                }
                                if (answer == "2") {
                                    gameState = false;
                                    combat = -1;
                                    break;
                                }
                                cout << "Not a valid statement" << endl << "Enter: ";
                            }
                        }
                    }
                    else if (mapMonsters[combat].getHP() < 1) {
                        cout << endl << mapMonsters[combat].getName() << " has been slain!" << endl;
                        if (mapMonsters[combat].getName() == "Dragon") {
                            gameState = false;
                            combat = -1;
                            win = true;
                            cout << endl << endl << endl << endl;
                            displayOutro();
                            break;
                        }
                        hpGain = (mapMonsters[combat].getDamage() * 2) + 10;
                        cout << "You feel rejuvenated + " << hpGain << " HP" << endl << endl;
                        player.addHP(hpGain);
                        combat = -1;
                        break;
                    }
                }
                else if (answer == "2") {
                    dextCount = 0;
                    dextNum = rand() % 90;
                    for (int i = 0; i < player.getDext() + 8; i++) {
                        if (i == dextNum) {
                            cout << endl << "You succesfully run away" << endl << endl;
                            map[mapY][mapX].setplayerPresent(0);
                            mapX = prevX;
                            mapY = prevY;
                            map[mapY][mapX].setplayerPresent(1);
                            combat = -1;
                            printMap15x15(map);
                            dextCount = 1;
                            break;
                        }
                    }
                    if (dextCount == 0) {
                        cout << endl << "You failed to run away" << endl;
                        if (mapMonsters[combat].getName() == "Dragon" && dragonCount == 2) {
                            for (int i = 0; i < 9; i++) {
                                if (backpack[i].getName() == "Dragonfire Shield") {
                                    cout << endl << "The dragon breathes down scourching fire. Your Dragonfire Shield absorbs the attack!" << endl;
                                    cout << endl << mapMonsters[combat].getName() << " hit for 0 damage!" << endl;
                                    dragonCount = 0;
                                    break;
                                }
                            }
                            if (dragonCount == 2) {
                                cout << endl << "The dragon breathes down scourching fire." << endl;
                                cout << endl << mapMonsters[combat].getName() << " hit for " << (mapMonsters[combat].getDamage() * 7) - (player.getDefence() / 2) << " damage!" << endl;
                                player.setHP(player.getHP() - ((mapMonsters[combat].getDamage() * 4) - (player.getDefence() / 2)));
                                dragonCount = 0;
                            }
                        }
                        else if (mapMonsters[combat].getDamage() - (player.getDefence() / 2) < 0) {
                            cout << endl << mapMonsters[combat].getName() << " hit for 0 damage!" << endl;
                            if (mapMonsters[combat].getName() == "Dragon") {
                                dragonCount++;
                            }
                        }
                        else {
                            cout << endl << mapMonsters[combat].getName() << " hit for " << mapMonsters[combat].getDamage() - (player.getDefence() / 2) << " damage!" << endl;
                            player.setHP(player.getHP() - (mapMonsters[combat].getDamage() - (player.getDefence() / 2)));
                            if (mapMonsters[combat].getName() == "Dragon") {
                                dragonCount++;
                            }
                        }
                        if (player.getHP() < 1) {
                            cout << endl << "You have died" << endl;
                            displayConfirm3();
                            while (true) {
                                cin >> answer;
                                if (answer == "1") {
                                    player.setHP(prevPlayerHP);
                                    mapMonsters[combat].setHP(prevMonsterHP);
                                    map[mapY][mapX].setplayerPresent(0);
                                    mapX = prevX;
                                    mapY = prevY;
                                    map[mapY][mapX].setplayerPresent(1);
                                    combat = -1;
                                    printMap15x15(map);
                                    break;
                                }
                                if (answer == "2") {
                                    gameState = false;
                                    combat = -1;
                                    break;
                                }
                                cout << "Not a valid statement" << endl << "Enter: ";
                            }
                        }
                    }
                }
                else {
                    cout << "Invalid Command" << endl;
                }

            }
            if (gameState == false) {
                break;
            }
            if (general == 0) {
                displayInterfaceGeneral();
            }
            else {
                displayInterfaceHelp();
            }
            general = 1;
            //Input Checks
            prevX = mapX;
            prevY = mapY;
            while (true) {
                string itemCheck;
                int itemNum;
                cin >> answer;
                //Map Display
                if (answer == "mp" || answer == "Mp" || answer == "mP" || answer == "MP") {
                    cout << endl << endl;
                    printMap15x15(map);
                    cout << endl << endl;
                    cout << "Enter: ";
                }
                //Player Movement
                else if (answer == "w" || answer == "W") {
                    if (mapY - 1 > -1) {
                        if (playerMoveCheck("W", map[mapY - 1][mapX]) == true) {
                            map[mapY][mapX].setplayerPresent(0);
                            mapY -= 1;
                            player.setY(mapY);
                            map[mapY][mapX].setplayerPresent(1);
                            break;
                        }
                        else {
                            cout << "Error: Not a valid movement option" << endl << "Enter: ";
                        }
                    }
                    else {
                        cout << "Error: Not a valid movement option" << endl << "Enter: ";
                    }
                }
                else if (answer == "a" || answer == "A") {
                    if (mapX - 1 > -1) {
                        if (playerMoveCheck("A", map[mapY][mapX - 1]) == true) {
                            map[mapY][mapX].setplayerPresent(0);
                            mapX -= 1;
                            player.setX(mapX);
                            map[mapY][mapX].setplayerPresent(1);
                            break;
                        }
                        else {
                            cout << "Error: Not a valid movement option" << endl << "Enter: ";
                        }
                    }
                    else {
                        cout << "Error: Not a valid movement option" << endl << "Enter: ";
                    }
                }
                else if (answer == "d" || answer == "D") {
                    if (mapX + 1 < 15) {
                        if (playerMoveCheck("D", map[mapY][mapX + 1]) == true) {
                            if (mapX == 5 && mapY == 14 && keyCheck == 0) {
                                for (int i = 0; i < 9; i++) {
                                    if (backpack[i].getName() == "Skull Key") {
                                        if (keyText == 0) {
                                            cout << endl << "There appears to be a large doorway blocking the path. You use the skeleton key to open the door" << endl;
                                        }
                                        if (keyText == 1) {
                                            cout << endl << "You use the skeleton key to open the door" << endl;
                                        }
                                        map[mapY][mapX].setplayerPresent(0);
                                        mapX += 1;
                                        player.setX(mapX);
                                        map[mapY][mapX].setplayerPresent(1);
                                        break;
                                        keyCheck = 1;
                                        printMap15x15(map);
                                        break;
                                    }
                                }
                                if (keyCheck == 0) {
                                    cout << endl << "There appears to be a large doorway blocking the path. Perhaps there is a key lying around somewhere" << endl;
                                    keyText = 1;
                                    break;
                                }
                            }
                            else {

                                map[mapY][mapX].setplayerPresent(0);
                                mapX += 1;
                                player.setX(mapX);
                                map[mapY][mapX].setplayerPresent(1);
                                break;
                            }
                        }
                        else {
                            cout << "Error: Not a valid movement option" << endl << "Enter: ";
                        }
                    }
                    else {
                        cout << "Error: Not a valid movement option" << endl << "Enter: ";
                    }
                }
                else if (answer == "s" || answer == "S") {
                    if (mapY + 1 < 15) {
                        if (playerMoveCheck("S", map[mapY + 1][mapX]) == true) {
                                map[mapY][mapX].setplayerPresent(0);
                                mapY += 1;
                                player.setY(mapY);
                                map[mapY][mapX].setplayerPresent(1);
                                break;
                        }
                        else {
                            cout << "Error: Not a valid movement option" << endl << "Enter: ";
                        }
                    }
                    else {
                        cout << "Error: Not a valid movement option" << endl << "Enter: ";
                    }
                }
                //Room Options
                else if (answer == "e" || answer == "E") {
                    for (int i = 0; i < 21; i++) {
                        if (mapX == mapItems[i].getX() && mapY == mapItems[i].getY()) {
                            itemCheck = "yes";
                            itemNum = i;
                            break;
                        }
                    }
                    if (itemCheck == "yes") {
                        cout << endl << itemLocationInfo(mapItems[itemNum].getLocation()) << endl << "Enter: ";
                    }
                    else {
                        cout << endl << "The room appears to be empty" << endl << "Enter: ";
                    }
                }
                else if (answer == "g" || answer == "G") {
                    for (int i = 0; i < 21; i++) {
                        if (mapX == mapItems[i].getX() && mapY == mapItems[i].getY()) {
                            itemCheck = "yes";
                            itemNum = i;
                            break;
                        }
                    }
                    if (itemCheck == "yes") {
                        cout << endl << "You found a " << mapItems[itemNum].getName() << " " << itemLocationOpen(mapItems[itemNum].getLocation());
                        int counter = 0;
                        for (int i = 0; i < 9; i++) {
                            if (backpack[i].getName() == " ") {
                                backpack[i] = mapItems[itemNum];
                                player = addItemStats(player, backpack[i]);
                                cout << endl << "Item added to your backpack" << endl << "Enter: ";
                                mapItems[itemNum].reset();
                                break;
                            }
                            else {
                                counter++;
                            }
                        }
                        if (counter == 9) {
                            cout << endl << "You can not take this item as your backpack is full" << endl << "Enter: ";
                        }
                    }
                    else {
                        cout << "You found nothing while searching" << endl << "Enter: ";
                    }
                }
                //Interface Options
                else if (answer == "m" || answer == "M") {
                    displayInterfaceGeneral();
                }
                else if (answer == "q" || answer == "Q") {
                    gameState = false;
                    break;
                }
                else if (answer == "p" || answer == "P") {
                    displayInterfaceCombat();
                }
                else if (answer == "h" || answer == "H") {
                    displayInterfaceHints();
                }
                //Inventory and Stats Options
                else if (answer == "i" || answer == "I") {
                    int itemChoice = 0;
                    while (true) {
                        cout << endl << "Inventory:" << endl;
                        for (int i = 0; i < 9; i++) {
                            cout << i + 1 << ": " << backpack[i].getName() << endl;
                        }
                        displayInterfaceInventory();
                        cin >> itemChoice;
                        if (itemChoice == 0) {
                            break;
                        }
                        else if (itemChoice < 1 || itemChoice > 9) {
                            cout << "Invalid Item ID" << endl;
                            cout << "Enter: ";
                        }
                        else if (backpack[itemChoice - 1].getName() == " ") {
                            cout << endl << "No Item located in that ID" << endl;
                        }
                        else {
                            cout << endl << "Item: " << backpack[itemChoice - 1].getName() << endl;
                            displayInterfaceItem();
                            while (true) {
                                cin >> answer;
                                if (answer == "1") {
                                    cout << endl << backpack[itemChoice - 1].getBio() << endl;
                                    displayInterfaceItem();
                                }
                                else if (answer == "2") {
                                    cout << endl << "Warning: this will destroy the item!" << endl;
                                    displayConfirm2();
                                    while (true) {
                                        cin >> answer;
                                        if (answer == "c" || answer == "C") {
                                            backpack[itemChoice - 1].reset();
                                            answer = "n";
                                            break;
                                        }
                                        else if (answer == "n" || answer == "N") {
                                            break;
                                        }
                                        else {
                                            cout << "Not a valid statement" << endl << "Enter: ";
                                        }
                                    }
                                    if (answer == "n" || answer == "N") {
                                        break;
                                    }
                                }
                                else if (answer == "n" || answer == "N") {
                                    break;
                                }
                                else {
                                    cout << "Not a valid statement" << endl << "Enter: ";
                                }
                            }
                        }

                    }
                    displayInterfaceGeneral();
                }
                else if (answer == "st" || answer == "St" || answer == "sT" || answer == "ST") {
                    player.checkStats();
                }
                else {
                    cout << "Invalid Command" << endl << "Enter: ";
                }
            }
        }
    }
    if (mapSize == "4") {
        char output[400];
        int layout[400];
        Maze map[20][20];
        ifstream File;
        File.open("20x20.txt");
        //Convert text file to ints for reading
        int count = 0;
        while (File >> output) {
            layout[count] = atoi(output);
            count++;
        }
        File.close();
        //Set wallType for array
        count = 0;
        for (int row = 0; row < 20; row++) {
            for (int col = 0; col < 20; col++) {
                map[row][col].setType(layout[count]);
                count++;
            }
        }
        //Randomize Items Collection
        srand(time(NULL));
        Item mapItems[40];
        Monster mapMonsters[40];
        //locRand used for how items are found (chest,body,etc) random
        int locRand = 0;
        //Quest Item
        mapItems[0] = items[0];
        locRand = rand() % 2;
        mapItems[0].setLocation(locRand);
        while (true) {
            mapItems[0].setX(rand() % 19);
            mapItems[0].setY(rand() % 19);
            //Prevent spawns in area not accessible yet
            if (mapItems[0].getX() != 10 || mapItems[0].getY() != 19) {
                if (mapItems[0].getX() != 10 || mapItems[0].getY() != 18) {
                    break;
                }
            }
        }
        //Quest Item
        mapItems[1] = items[1];
        locRand = rand() % 2;
        mapItems[1].setLocation(locRand);
        while (true) {
            mapItems[1].setX(rand() % 19);
            mapItems[1].setY(rand() % 19);
            //Prevent spawns in area not accessible yet
            if (mapItems[1].getX() != mapItems[0].getX() || mapItems[1].getY() != mapItems[0].getY()) {
                if (mapItems[1].getX() != 10 || mapItems[1].getY() != 19) {
                    if (mapItems[1].getX() != 10 || mapItems[1].getY() != 18) {
                        break;
                    }
                }
            }
        }
        //Quest Dragon
        mapMonsters[0] = monsters[0];
        mapMonsters[0].setX(10);
        mapMonsters[0].setY(19);
        int checkCount;
        //Random Monster
        for (int i = 0; i < 39; i++) {
            mapMonsters[i + 1] = monsters[rand() % 6 + 1];
            while (true) {
                mapMonsters[i + 1].setX(rand() % 19);
                mapMonsters[i + 1].setY(rand() % 19);
                checkCount = 0;
                for (int j = 0; j < 40; j++) {
                    if (j != i + 1) {
                        if (mapMonsters[i + 1].getX() != mapMonsters[j].getX() || mapMonsters[i + 1].getY() != mapMonsters[j].getY()) {
                            if (mapMonsters[i + 1].getX() != 10 || mapMonsters[i + 1].getY() != 18) {
                                if (mapMonsters[i + 1].getX() != 10 || mapMonsters[i + 1].getY() != 19) {
                                    if (mapMonsters[i + 1].getX() != 9 || mapMonsters[i + 1].getY() != 0)
                                        checkCount++;
                                }
                            }
                        }
                    }
                }
                if (checkCount == 39) {
                    break;
                }

            }
        }
        //Random items
        int set = 0;
        for (int i = 0; i < 38; i++) {
            while (true) { // Manually not include 0 or 1 spaces, random + num would causes inconsistant crashes
                set = rand() % 12;
                if (set != 0 && set != 1) {
                    break;
                }
            }
            mapItems[i + 2] = items[set];
            locRand = rand() % 2;
            mapItems[i + 2].setLocation(locRand);
            while (true) {
                mapItems[i + 2].setX(rand() % 19);
                mapItems[i + 2].setY(rand() % 19);
                checkCount = 0;
                for (int j = 0; j < 40; j++) {
                    if (j != i + 2) {
                        if (mapItems[i + 2].getX() != mapItems[j].getX() || mapItems[i + 2].getX() != mapItems[j].getX()) {
                            if (mapItems[i + 2].getX() != 10 || mapItems[i + 2].getY() != 18) {
                                if (mapItems[i + 2].getX() != 10 || mapItems[i + 2].getY() != 19) {
                                    checkCount++;
                                }
                            }
                        }
                    }
                }
                if (i < 20 && checkCount == 39) {
                    break;
                }
                if (i > 16 && checkCount == 38) {
                    break;
                }
                if (i < 36 && checkCount == 37) {
                    break;
                }
            }
        }
        //Place player at starting position
        player.setX(9);
        player.setY(0);
        int mapY = 0;
        int mapX = 9;
        map[0][9].setplayerPresent(1);
        //Balance
        player.addHP(120);
        //Game loop
        int general = 0;
        bool gameState = true;
        int keyCheck = 0;
        int keyText = 0;
        int combat = -1;
        int prevX = 9;
        int prevY = 0;
        int prevPlayerHP = 0;
        int prevMonsterHP = 0;
        int dextNum;
        int dextCount;
        int dragonCount = 0;
        while (gameState == true) {
            cout << endl << endl << endl;
            printMap20x20(map);
            cout << endl << endl;
            //Check if the player cell contains a monsters
            for (int i = 0; i < 40; i++) {
                if (mapX == mapMonsters[i].getX() && mapY == mapMonsters[i].getY()) {
                    if (mapMonsters[i].getHP() > 0) {
                        cout << "There appears to be a " << mapMonsters[i].getName() << " blocking your path!" << endl;
                        combat = i;
                        break;
                    }
                }
            }
            //Combat
            int crit = 0;
            int hpGain;
            prevPlayerHP = player.getHP();
            prevMonsterHP = mapMonsters[combat].getHP();
            while (combat != -1) {
                cout << endl << endl << endl << "Player Health: " << player.getHP() << "               " << mapMonsters[combat].getName() << " Health: " << mapMonsters[combat].getHP() << endl;
                displayInterfaceCombat();
                cin >> answer;
                if (answer == "1") {
                    crit = rand() % 10;
                    if (crit == 1) {
                        cout << endl << "You critically hit for " << (player.getDamage() * 2) - (mapMonsters[combat].getDefence() / 2) << " damage!" << endl;
                        mapMonsters[combat].setHP((mapMonsters[combat].getHP() - ((player.getDamage() * 2) - (mapMonsters[combat].getDefence() / 2))));
                    }
                    else if (crit != 1) {
                        cout << endl << "You hit for " << player.getDamage() - (mapMonsters[combat].getDefence() / 2) << " damage!" << endl;
                        mapMonsters[combat].setHP((mapMonsters[combat].getHP() - (player.getDamage() - (mapMonsters[combat].getDefence() / 2))));
                    }
                    if (mapMonsters[combat].getHP() > 0) {
                        if (mapMonsters[combat].getName() == "Dragon" && dragonCount == 2) {
                            for (int i = 0; i < 9; i++) {
                                if (backpack[i].getName() == "Dragonfire Shield") {
                                    cout << endl << "The dragon breathes down scourching fire. Your Dragonfire Shield absorbs the attack!" << endl;
                                    cout << endl << mapMonsters[combat].getName() << " hit for 0 damage!" << endl;
                                    dragonCount = 0;
                                    break;
                                }
                            }
                            if (dragonCount == 2) {
                                cout << endl << "The dragon breathes down scourching fire." << endl;
                                cout << endl << mapMonsters[combat].getName() << " hit for " << (mapMonsters[combat].getDamage() * 7) - (player.getDefence() / 2) << " damage!" << endl;
                                player.setHP(player.getHP() - ((mapMonsters[combat].getDamage() * 4) - (player.getDefence() / 2)));
                                dragonCount = 0;
                            }
                        }
                        else if (mapMonsters[combat].getDamage() - (player.getDefence() / 2) < 0) {
                            cout << endl << mapMonsters[combat].getName() << " hit for 0 damage!" << endl;
                            if (mapMonsters[combat].getName() == "Dragon") {
                                dragonCount++;
                            }
                        }
                        else {
                            cout << endl << mapMonsters[combat].getName() << " hit for " << mapMonsters[combat].getDamage() - (player.getDefence() / 2) << " damage!" << endl;
                            player.setHP(player.getHP() - (mapMonsters[combat].getDamage() - (player.getDefence() / 2)));
                            if (mapMonsters[combat].getName() == "Dragon") {
                                dragonCount++;
                            }
                        }
                        if (player.getHP() < 1) {
                            cout << endl << "You have died" << endl;
                            displayConfirm3();
                            while (true) {
                                cin >> answer;
                                if (answer == "1") {
                                    player.setHP(prevPlayerHP);
                                    mapMonsters[combat].setHP(prevMonsterHP);
                                    map[mapY][mapX].setplayerPresent(0);
                                    mapX = prevX;
                                    mapY = prevY;
                                    map[mapY][mapX].setplayerPresent(1);
                                    combat = -1;
                                    printMap20x20(map);
                                    break;
                                }
                                if (answer == "2") {
                                    gameState = false;
                                    combat = -1;
                                    break;
                                }
                                cout << "Not a valid statement" << endl << "Enter: ";
                            }
                        }
                    }
                    else if (mapMonsters[combat].getHP() < 1) {
                        cout << endl << mapMonsters[combat].getName() << " has been slain!" << endl;
                        if (mapMonsters[combat].getName() == "Dragon") {
                            gameState = false;
                            combat = -1;
                            win = true;
                            cout << endl << endl << endl << endl;
                            displayOutro();
                            break;
                        }
                        hpGain = (mapMonsters[combat].getDamage() * 2) + 10;
                        cout << "You feel rejuvenated + " << hpGain << " HP" << endl << endl;
                        player.addHP(hpGain);
                        combat = -1;
                        break;
                    }
                }
                else if (answer == "2") {
                    dextCount = 0;
                    dextNum = rand() % 90;
                    for (int i = 0; i < player.getDext() + 8; i++) {
                        if (i == dextNum) {
                            cout << endl << "You succesfully run away" << endl << endl;
                            map[mapY][mapX].setplayerPresent(0);
                            mapX = prevX;
                            mapY = prevY;
                            map[mapY][mapX].setplayerPresent(1);
                            combat = -1;
                            printMap20x20(map);
                            dextCount = 1;
                            break;
                        }
                    }
                    if (dextCount == 0) {
                        cout << endl << "You failed to run away" << endl;
                        if (mapMonsters[combat].getName() == "Dragon" && dragonCount == 2) {
                            for (int i = 0; i < 9; i++) {
                                if (backpack[i].getName() == "Dragonfire Shield") {
                                    cout << endl << "The dragon breathes down scourching fire. Your Dragonfire Shield absorbs the attack!" << endl;
                                    cout << endl << mapMonsters[combat].getName() << " hit for 0 damage!" << endl;
                                    dragonCount = 0;
                                    break;
                                }
                            }
                            if (dragonCount == 2) {
                                cout << endl << "The dragon breathes down scourching fire." << endl;
                                cout << endl << mapMonsters[combat].getName() << " hit for " << (mapMonsters[combat].getDamage() * 7) - (player.getDefence() / 2) << " damage!" << endl;
                                player.setHP(player.getHP() - ((mapMonsters[combat].getDamage() * 4) - (player.getDefence() / 2)));
                                dragonCount = 0;
                            }
                        }
                        else if (mapMonsters[combat].getDamage() - (player.getDefence() / 2) < 0) {
                            cout << endl << mapMonsters[combat].getName() << " hit for 0 damage!" << endl;
                            if (mapMonsters[combat].getName() == "Dragon") {
                                dragonCount++;
                            }
                        }
                        else {
                            cout << endl << mapMonsters[combat].getName() << " hit for " << mapMonsters[combat].getDamage() - (player.getDefence() / 2) << " damage!" << endl;
                            player.setHP(player.getHP() - (mapMonsters[combat].getDamage() - (player.getDefence() / 2)));
                            if (mapMonsters[combat].getName() == "Dragon") {
                                dragonCount++;
                            }
                        }
                        if (player.getHP() < 1) {
                            cout << endl << "You have died" << endl;
                            displayConfirm3();
                            while (true) {
                                cin >> answer;
                                if (answer == "1") {
                                    player.setHP(prevPlayerHP);
                                    mapMonsters[combat].setHP(prevMonsterHP);
                                    map[mapY][mapX].setplayerPresent(0);
                                    mapX = prevX;
                                    mapY = prevY;
                                    map[mapY][mapX].setplayerPresent(1);
                                    combat = -1;
                                    printMap20x20(map);
                                    break;
                                }
                                if (answer == "2") {
                                    gameState = false;
                                    combat = -1;
                                    break;
                                }
                                cout << "Not a valid statement" << endl << "Enter: ";
                            }
                        }
                    }
                }
                else {
                    cout << "Invalid Command" << endl;
                }

            }
            if (gameState == false) {
                break;
            }
            if (general == 0) {
                displayInterfaceGeneral();
            }
            else {
                displayInterfaceHelp();
            }
            general = 1;
            //Input Checks
            prevX = mapX;
            prevY = mapY;
            while (true) {
                string itemCheck;
                int itemNum;
                cin >> answer;
                //Map Display
                if (answer == "mp" || answer == "Mp" || answer == "mP" || answer == "MP") {
                    cout << endl << endl;
                    printMap20x20(map);
                    cout << endl << endl;
                    cout << "Enter: ";
                }
                //Player Movement
                else if (answer == "w" || answer == "W") {
                    if (mapY - 1 > -1) {
                        if (playerMoveCheck("W", map[mapY - 1][mapX]) == true) {
                            map[mapY][mapX].setplayerPresent(0);
                            mapY -= 1;
                            player.setY(mapY);
                            map[mapY][mapX].setplayerPresent(1);
                            break;
                        }
                        else {
                            cout << "Error: Not a valid movement option" << endl << "Enter: ";
                        }
                    }
                    else {
                        cout << "Error: Not a valid movement option" << endl << "Enter: ";
                    }
                }
                else if (answer == "a" || answer == "A") {
                    if (mapX - 1 > -1) {
                        if (playerMoveCheck("A", map[mapY][mapX - 1]) == true) {
                            map[mapY][mapX].setplayerPresent(0);
                            mapX -= 1;
                            player.setX(mapX);
                            map[mapY][mapX].setplayerPresent(1);
                            break;
                        }
                        else {
                            cout << "Error: Not a valid movement option" << endl << "Enter: ";
                        }
                    }
                    else {
                        cout << "Error: Not a valid movement option" << endl << "Enter: ";
                    }
                }
                else if (answer == "d" || answer == "D") {
                    if (mapX + 1 < 20) {
                        if (playerMoveCheck("D", map[mapY][mapX + 1]) == true) {
                            if (mapX == 9 && mapY == 18 && keyCheck == 0) {
                                for (int i = 0; i < 9; i++) {
                                    if (backpack[i].getName() == "Skull Key") {
                                        if (keyText == 0) {
                                            cout << endl << "There appears to be a large doorway blocking the path. You use the skeleton key to open the door" << endl;
                                        }
                                        if (keyText == 1) {
                                            cout << endl << "You use the skeleton key to open the door" << endl;
                                        }
                                        map[mapY][mapX].setplayerPresent(0);
                                        mapX += 1;
                                        player.setX(mapX);
                                        map[mapY][mapX].setplayerPresent(1);
                                        break;
                                        keyCheck = 1;
                                        printMap20x20(map);
                                        break;
                                    }
                                }
                                if (keyCheck == 0) {
                                    cout << endl << "There appears to be a large doorway blocking the path. Perhaps there is a key lying around somewhere" << endl;
                                    keyText = 1;
                                    break;
                                }
                            }
                            else {

                                map[mapY][mapX].setplayerPresent(0);
                                mapX += 1;
                                player.setX(mapX);
                                map[mapY][mapX].setplayerPresent(1);
                                break;
                            }
                        }
                        else {
                            cout << "Error: Not a valid movement option" << endl << "Enter: ";
                        }
                    }
                    else {
                        cout << "Error: Not a valid movement option" << endl << "Enter: ";
                    }
                }
                else if (answer == "s" || answer == "S") {
                    if (mapY + 1 < 20) {
                        if (playerMoveCheck("S", map[mapY + 1][mapX]) == true) {
                            map[mapY][mapX].setplayerPresent(0);
                            mapY += 1;
                            player.setY(mapY);
                            map[mapY][mapX].setplayerPresent(1);
                            break;
                        }
                        else {
                            cout << "Error: Not a valid movement option" << endl << "Enter: ";
                        }
                    }
                    else {
                        cout << "Error: Not a valid movement option" << endl << "Enter: ";
                    }
                }
                //Room Options
                else if (answer == "e" || answer == "E") {
                    for (int i = 0; i < 39; i++) {
                        if (mapX == mapItems[i].getX() && mapY == mapItems[i].getY()) {
                            itemCheck = "yes";
                            itemNum = i;
                            break;
                        }
                    }
                    if (itemCheck == "yes") {
                        cout << endl << itemLocationInfo(mapItems[itemNum].getLocation()) << endl << "Enter: ";
                    }
                    else {
                        cout << endl << "The room appears to be empty" << endl << "Enter: ";
                    }
                }
                else if (answer == "g" || answer == "G") {
                    for (int i = 0; i < 39; i++) {
                        if (mapX == mapItems[i].getX() && mapY == mapItems[i].getY()) {
                            itemCheck = "yes";
                            itemNum = i;
                            break;
                        }
                    }
                    if (itemCheck == "yes") {
                        cout << endl << "You found a " << mapItems[itemNum].getName() << " " << itemLocationOpen(mapItems[itemNum].getLocation());
                        int counter = 0;
                        for (int i = 0; i < 9; i++) {
                            if (backpack[i].getName() == " ") {
                                backpack[i] = mapItems[itemNum];
                                player = addItemStats(player, backpack[i]);
                                cout << endl << "Item added to your backpack" << endl << "Enter: ";
                                mapItems[itemNum].reset();
                                break;
                            }
                            else {
                                counter++;
                            }
                        }
                        if (counter == 9) {
                            cout << endl << "You can not take this item as your backpack is full" << endl << "Enter: ";
                        }
                    }
                    else {
                        cout << "You found nothing while searching" << endl << "Enter: ";
                    }
                }
                //Interface Options
                else if (answer == "m" || answer == "M") {
                    displayInterfaceGeneral();
                }
                else if (answer == "q" || answer == "Q") {
                    gameState = false;
                    break;
                }
                else if (answer == "p" || answer == "P") {
                    displayInterfaceCombat();
                }
                else if (answer == "h" || answer == "H") {
                    displayInterfaceHints();
                }
                //Inventory and Stats Options
                else if (answer == "i" || answer == "I") {
                    int itemChoice = 0;
                    while (true) {
                        cout << endl << "Inventory:" << endl;
                        for (int i = 0; i < 9; i++) {
                            cout << i + 1 << ": " << backpack[i].getName() << endl;
                        }
                        displayInterfaceInventory();
                        cin >> itemChoice;
                        if (itemChoice == 0) {
                            break;
                        }
                        else if (itemChoice < 1 || itemChoice > 9) {
                            cout << "Invalid Item ID" << endl;
                            cout << "Enter: ";
                        }
                        else if (backpack[itemChoice - 1].getName() == " ") {
                            cout << endl << "No Item located in that ID" << endl;
                        }
                        else {
                            cout << endl << "Item: " << backpack[itemChoice - 1].getName() << endl;
                            displayInterfaceItem();
                            while (true) {
                                cin >> answer;
                                if (answer == "1") {
                                    cout << endl << backpack[itemChoice - 1].getBio() << endl;
                                    displayInterfaceItem();
                                }
                                else if (answer == "2") {
                                    cout << endl << "Warning: this will destroy the item!" << endl;
                                    displayConfirm2();
                                    while (true) {
                                        cin >> answer;
                                        if (answer == "c" || answer == "C") {
                                            backpack[itemChoice - 1].reset();
                                            answer = "n";
                                            break;
                                        }
                                        else if (answer == "n" || answer == "N") {
                                            break;
                                        }
                                        else {
                                            cout << "Not a valid statement" << endl << "Enter: ";
                                        }
                                    }
                                    if (answer == "n" || answer == "N") {
                                        break;
                                    }
                                }
                                else if (answer == "n" || answer == "N") {
                                    break;
                                }
                                else {
                                    cout << "Not a valid statement" << endl << "Enter: ";
                                }
                            }
                        }

                    }
                    displayInterfaceGeneral();
                }
                else if (answer == "st" || answer == "St" || answer == "sT" || answer == "ST") {
                    player.checkStats();
                }
                else {
                    cout << "Invalid Command" << endl << "Enter: ";
                }
            }
        }
    }
    cout << endl;
    cout << endl << endl << "System exited" << endl << endl;
    return 0;
}
