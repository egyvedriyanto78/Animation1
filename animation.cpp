#include <ncurses/ncurses.h>
#include <windows.h>
using namespace std;

int main(){
	initscr();
	while(true){
		clear();
		mvprintw(2,10,"<     >");
		refresh();
		Sleep(250);
		
		mvprintw(3,10,"<     >");
		refresh();
		Sleep(250);
		
		mvprintw(4,10,"<     >");
		refresh();
		Sleep(250);
		
		mvprintw(5,10,"<     >");
		refresh();
		Sleep(250);
		
		mvprintw(6,10,"<     >");
		refresh();
		Sleep(250);
		
		mvprintw(3,13,"E");
		refresh();
		Sleep(250);
		
		mvprintw(4,13,"G");
		refresh();
		Sleep(250);
		
		mvprintw(5,13,"Y");
		refresh();
		Sleep(250);
		
		mvprintw(6,20,"<     >");
		refresh();
		Sleep(250);
		
		mvprintw(5,20,"<     >");
		refresh();
		Sleep(250);
		
		mvprintw(4,20,"<     >");
		refresh();
		Sleep(250);
		
		mvprintw(3,20,"<     >");
		refresh();
		Sleep(250);
		
		mvprintw(2,20,"<     >");
		refresh();
		Sleep(250);
		
		mvprintw(5,23,"Y");
		refresh();
		Sleep(250);
		
		mvprintw(4,23,"G");
		refresh();
		Sleep(250);
		
		mvprintw(3,23,"E");
		refresh();
		Sleep(250);

}
getch();
endwin();
}
