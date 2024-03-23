#include <iostream>
#include <fstream>
#include <iomanip>
#include <string.h>
#include <unistd.h>
#include <iostream>
#include <graphics.h>
using namespace std;

void menu(); // Prototype For Function Menu.


// Class ManageMenu will ask for admin user and then run the menu function.
class manageMenu
{
protected:
string userName;
public:

manageMenu(){
    string * array = new string [3]; // It dynamically allocates the memory space for 3 string.
    array[0] = "Syed";
    array[1] = "Jahangir";
    array[2] = "Alom";
    cout<<"------------------------------------------------------------------------------------"<<endl;
    int gotoMenu;
    cout << "\n\n\n\t Enter the login details to Continue as a Admin: "; // Your Name is the password!
    cin  >> userName;
    if (userName == array[0] || userName == array[1] || userName == array[2])
    {
       cout<<"\n\t Hello admin you have successfully login into the account\n\t"<<endl;
    }
    else{
    cout << "\n\t Login details not matched \n\t"<<endl;
    cout << "\n\t Press 1 to Redirect to admin login: ";
    cin >> gotoMenu;
    system("clear");
        if (gotoMenu == 1)
        {
            manageMenu();
        }
        else
        {
            manageMenu();
        }

    }
    delete[]array;
    sleep(2);  // Will hold the screen for few seconds
    system("clear"); // Clear the console
    menu();

}

// Destructor for ManageMenu
~ manageMenu(){cout<<" Program Crashed Re Run It "<<endl;}  // Free up the space used by manageMenu.

};


void menu()
{

    int mainChoice;
    int gotoMenu;

    cout << "\t\t -*-*-*- Computer Graphics Project Show *-*-*-*-*" << endl;
    cout << "\t\t -------------  Main Menu  --------------" << endl;

    cout << "\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;
    cout << "\t|\t\t\t\t\t|" << endl;
    cout << "\t|\t Doremon              -> 1\t|" << endl;
    cout << "\t|\t Happy Emoji          -> 2\t|" << endl;
    cout << "\t|\t Car                  -> 3\t|" << endl;
    cout << "\t|\t Cycle                -> 4\t|" << endl;
    cout << "\t|\t Cheese               -> 5\t|" << endl;
    cout << "\t|\t Fish                 -> 6\t|" << endl;
    cout << "\t|\t House                -> 7\t|" << endl;
    cout << "\t|\t\t\t\t\t|" << endl;
    cout << "\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|" << endl;

    cout << "\n Enter Your Choice: ";
    cin >> mainChoice;

    if (mainChoice == 1)
    {
        //Doremon

    int gd=DETECT,gm;
    initgraph(&gd,&gm," ");

    setcolor(WHITE);
    setfillstyle(1,BLUE);
    circle(260,160,130);
    floodfill(260,160,WHITE);

    setcolor(WHITE);
    setfillstyle(1,WHITE);
    circle(260,200,90);
    floodfill(260,200,WHITE);

    setcolor(WHITE);
    setfillstyle(1,WHITE);
    circle(220,89,30);
    floodfill(220,89,WHITE);

    setcolor(WHITE);
    setfillstyle(1,WHITE);
    circle(300,90,30);
    floodfill(300,90,WHITE);

    setcolor(BLACK);
    setfillstyle(1,BLACK);
    circle(230,95,10);
    floodfill(230,95,BLACK);

    setcolor(BLACK);
    setfillstyle(1,BLACK);
    circle(290,96,10);
    floodfill(290,96,BLACK);

    setcolor(RED);
    setfillstyle(1,RED);
    circle(255,135,10);
    floodfill(255,135,RED);

    setcolor(BLACK);
    setfillstyle(1,BLACK);
    line(255,155,255,200);
    ellipse(255,174,180,360,30,30);
    floodfill(125,125,WHITE);

    setcolor(YELLOW);
    setfillstyle(1,YELLOW);

    line(210,180,130,180);
    line(210,200,135,200);
    line(220,220,160,240);
    line(300,180,390,180);
    line(320,200,385,200);
    line(330,220,360,240);

    setcolor(RED);
    setfillstyle(1,RED);
    rectangle(100,285,380,310);
    floodfill(110,290,RED);

    setcolor(YELLOW);
    setfillstyle(1,YELLOW);
    circle(255,320,10);
    floodfill(255,320,YELLOW);

    getch();
    closegraph();
    }

    else if (mainChoice == 2)
    {

        //Happy Emoji


        int gd=DETECT,gm;
initgraph(&gd,&gm," ");

//circle
setcolor(LIGHTRED);
setfillstyle(1,LIGHTRED);
circle(200,150,100);
floodfill(201,151,LIGHTRED);

//eye left
setcolor(WHITE);
setfillstyle(1,WHITE);
ellipse(180,120,360,360,15,30);
floodfill(180,120,WHITE);

//small eye
setcolor(BLACK);
setfillstyle(1,BLACK);
ellipse(186,130,360,360,8,15);
floodfill(186,130,BLACK);

//eye right

setcolor(WHITE);
setfillstyle(1,WHITE);
ellipse(230,120,360,360,15,30);
floodfill(230,120,WHITE);

//small eye

setcolor(BLACK);
setfillstyle(1,BLACK);
ellipse(236,130,360,360,8,15);
floodfill(236,130,BLACK);


//line mouth

setcolor(RED);
setfillstyle(1,RED);
line(170,178,230,178);
ellipse(200,178,180,360,30,30);
floodfill(171,180,RED);


//left hand
//setcolor(YELLOW);
//setfillstyle(1,YELLOW);
line(100,250,40,310);

line(40,310,100,370);
//second angle
line(100,270,60,310);
line(60,310,100,350);
//floodfill(101,251,YELLOW);

//right hand
//setcolor(grError);
//setfillstyle(2,grError);
line(300,250,400,200);
line(400,200,300,150);
// second angle
line(300,280,440,200);
line(440,200,292,120);
//floodfill(441,200,grError);
//rectangle

setcolor(GREEN);
setfillstyle(1,GREEN);
rectangle(100,250,300,453);
floodfill(102,251,GREEN);




getch();
closegraph();
    }
    else if (mainChoice == 3)
    {

        //Car

        int gd=DETECT,gm;
    initgraph(&gd,&gm," ");

    setcolor(RED);
    setfillstyle(1,RED);
    rectangle(150,200,450,240);
    floodfill(151,201,RED);

    setcolor(WHITE);
    setfillstyle(1,WHITE);
    circle(220,240,20);
    floodfill(221,241,WHITE);

    setcolor(WHITE);
    setfillstyle(1,WHITE);
    circle(370,240,20);
    floodfill(371,241,WHITE);

    setcolor(YELLOW);
    setfillstyle(1,YELLOW);
    line(200,200,240,150);
    line(240,150,350,150);
    line(350,150,390,200);
    line(200,200,390,200);
    //putpixel(375,190,YELLOW);
    floodfill(375,190,YELLOW);

    getch();
    closegraph();
    }
    else if (mainChoice == 4)
    {
        //Cycle

        int gd=DETECT,gm;
    initgraph(&gd,&gm, " ");

    setcolor(YELLOW);
    setfillstyle(1,YELLOW);
    circle(200,250,30);

    line(200,250,260,250);
    line(200,250,220,200);
    line(220,200,280,200);
    line(280,200,260,250);

    //seat
    line(220,200,220,190);
    line(210,190,230,190);

    circle(310,250,30);

    //handle
    line(310,250,265,170);
    line(265,170,250,170);


    getch();
    closegraph();
    }
    else if (mainChoice == 5)
    {
        //Cheese

        int gd=DETECT, gm;
    initgraph(&gd,&gm, "");

    //1st row
    setcolor(GREEN);
    setfillstyle(1,WHITE);
    rectangle(20,20,70,70);
    floodfill(21,21,GREEN);
    setcolor(GREEN);
    setfillstyle(1,WHITE);
    rectangle(70,20,120,70);
    floodfill(71,21,GREEN);
    setcolor(GREEN);
    setfillstyle(1,WHITE);
    rectangle(120,20,170,70);
    floodfill(121,21,GREEN);
    setcolor(GREEN);
    setfillstyle(1,WHITE);
    rectangle(170,20,220,70);
    floodfill(171,21,GREEN);
    setcolor(GREEN);
    setfillstyle(1,WHITE);
    rectangle(220,20,270,70);
    floodfill(221,21,GREEN);
    setcolor(GREEN);
    setfillstyle(1,WHITE);
    rectangle(270,20,320,70);
    floodfill(271,21,GREEN);
    setcolor(GREEN);
    setfillstyle(1,WHITE);
    rectangle(320,20,370,70);
    floodfill(321,21,GREEN);
    setcolor(GREEN);
    setfillstyle(1,WHITE);
    rectangle(370,20,420,70);
    floodfill(371,21,GREEN);

    //2nd row
    rectangle(20,70,70,120);
    rectangle(70,70,120,120);
    rectangle(120,70,170,120);
    rectangle(170,70,220,120);
    rectangle(220,70,270,120);
    rectangle(270,70,320,120);
    rectangle(320,70,370,120);
    rectangle(370,70,420,120);

    //3rd row
    setcolor(GREEN);
    setfillstyle(1,WHITE);
    rectangle(20,120,70,170);
    floodfill(21,121,GREEN);
    setcolor(GREEN);
    setfillstyle(1,WHITE);
    rectangle(70,120,120,170);
    floodfill(71,121,GREEN);
    setcolor(GREEN);
    setfillstyle(1,WHITE);
    rectangle(120,120,170,170);
    floodfill(121,121,GREEN);
    setcolor(GREEN);
    setfillstyle(1,WHITE);
    rectangle(170,120,220,170);
    floodfill(171,121,GREEN);
    setcolor(GREEN);
    setfillstyle(1,WHITE);
    rectangle(220,120,270,170);
    floodfill(221,121,GREEN);
    setcolor(GREEN);
    setfillstyle(1,WHITE);
    rectangle(270,120,320,170);
    floodfill(271,121,GREEN);
    setcolor(GREEN);
    setfillstyle(1,WHITE);
    rectangle(320,120,370,170);
    floodfill(321,121,GREEN);
    setcolor(GREEN);
    setfillstyle(1,WHITE);
    rectangle(370,120,420,170);
    floodfill(371,121,GREEN);

    //4th row
    rectangle(20,170,70,220);
    rectangle(70,170,120,220);
    rectangle(120,170,170,220);
    rectangle(170,170,220,220);
    rectangle(220,170,270,220);
    rectangle(270,170,320,220);
    rectangle(320,170,370,220);
    rectangle(370,170,420,220);

    //5th row
    setfillstyle(1,WHITE);
    rectangle(20,220,70,270);
    floodfill(21,221,GREEN);
    setfillstyle(1,WHITE);
    rectangle(70,220,120,270);
    floodfill(71,221,GREEN);
    setfillstyle(1,WHITE);
    rectangle(120,220,170,270);
    floodfill(121,221,GREEN);
    setfillstyle(1,WHITE);
    rectangle(170,220,220,270);
    floodfill(171,221,GREEN);
    setfillstyle(1,WHITE);
    rectangle(220,220,270,270);
    floodfill(221,221,GREEN);
    setfillstyle(1,WHITE);
    rectangle(270,220,320,270);
    floodfill(271,221,GREEN);
    setfillstyle(1,WHITE);
    rectangle(320,220,370,270);
    floodfill(321,221,GREEN);
    setfillstyle(1,WHITE);
    rectangle(370,220,420,270);
    floodfill(371,221,GREEN);

    //6th row
    rectangle(20,270,70,320);
    rectangle(70,270,120,320);
    rectangle(120,270,170,320);
    rectangle(170,270,220,320);
    rectangle(220,270,270,320);
    rectangle(270,270,320,320);
    rectangle(320,270,370,320);
    rectangle(370,270,420,320);

    //7th row
    setfillstyle(1,WHITE);
    rectangle(20,320,70,370);
    floodfill(21,321,GREEN);
    setfillstyle(1,WHITE);
    rectangle(70,320,120,370);
    floodfill(71,321,GREEN);
    setfillstyle(1,WHITE);
    rectangle(120,320,170,370);
    floodfill(121,321,GREEN);
    setfillstyle(1,WHITE);
    rectangle(170,320,220,370);
    floodfill(171,321,GREEN);
    setfillstyle(1,WHITE);
    rectangle(220,320,270,370);
    floodfill(221,321,GREEN);
    setfillstyle(1,WHITE);
    rectangle(270,320,320,370);
    floodfill(271,321,GREEN);
    setfillstyle(1,WHITE);
    rectangle(320,320,370,370);
    floodfill(321,321,GREEN);
    setfillstyle(1,WHITE);
    rectangle(370,320,420,370);
    floodfill(371,321,GREEN);

    //8th row
    rectangle(20,370,70,420);
    rectangle(70,370,120,420);
    rectangle(120,370,170,420);
    rectangle(170,370,220,420);
    rectangle(220,370,270,420);
    rectangle(270,370,320,420);
    rectangle(320,370,370,420);
    rectangle(370,370,420,420);


    getch();
    closegraph();
    }
    else if (mainChoice == 6)
    {

        //Fish

        int gd=DETECT,gm;
     initgraph(&gd,&gm," ");

setcolor(15);
setfillstyle(1,1);
ellipse(300,200,0,360,150,80);
floodfill(301,201,15);


setfillstyle(1,RED);
line(154,180,110,165);
line(110,165,120,200);
line(120,200,110,235);
line(110,235,154,220);
floodfill(121,199,15);


setcolor(15);
setfillstyle(1, RED);
line(320,278,280,350);
line(345,276,280,352);
floodfill(321,279,15);


setcolor(15);
setfillstyle(1,RED);
line(320,120,280,48);
line(280,48,345,124);
floodfill(321,119,15);

setcolor(15);
setfillstyle(1,YELLOW);
line(360,128,340,200);
line(340,200, 360, 271);
floodfill(365,133,15);


setcolor(15);
setfillstyle(1,RED);
circle(400,200,20);
floodfill(401,201,15);

ellipse(480,200,360,360,20,30);
ellipse(520,180,360,360,10,15);
ellipse(515,220,360,360,15,20);


     getch();
     closegraph();
    }

    else if (mainChoice == 7)

    {
        //House

        int gd=DETECT,gm;
    initgraph(&gd,&gm, "Jahangir");

    setcolor(YELLOW);
    setfillstyle(1,YELLOW);
    rectangle(100,150,280,300);
    floodfill(102,152,YELLOW);

    setcolor(BLACK);
    setfillstyle(1,BLACK);
    rectangle(150,200,230,300);
    floodfill(152,202,BLACK);

    setcolor(RED);
    setfillstyle(1,RED);
    line(100,150,280,150);
    line(100,150,180,100);
    line(280,150,180,100);
    floodfill(201,149,RED);

    getch();
    closegraph();
    }


    else
        {
            cout<< "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
            sleep(2);
            system("clear");
            menu();
        }
};
int main(){

    manageMenu start_D_Prog;
}


//  End of the Program.
