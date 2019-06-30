
# include "iGraphics.h"

int player_x , player_y , coin_x , coin_y , bg_x;




int screen = 0;
void menu();
void game();
void gameOver();
void highscore();
void instructions();
void credits();

void aboni();

void iDraw()
{
		
	iClear();

	
	if(screen==0)menu();
	if(screen==1)game();
	if(screen==2)instructions();
	if(screen==3)highscore();
	if(screen==4)credits();
	if(screen==5)gameOver();

}


void aboni(){
	iShowBMP(0,0,"aa.bmp");
}

void menu()
{
	iShowBMP(0,0,"menu.bmp");
}
void game()
{
	iShowBMP(0,0,"menu.bmp");
	iShowBMP(40,40,"shamura.bmp");
}
void gameOver()
{
	iShowBMP(0,0,"GameOver.bmp");

}
void highscore()
{
	iShowBMP(0,0,"HighScores.bmp");

}
void instructions()
{
	iShowBMP(0,0,"instructions.bmp");
}
void credits()
{
	iShowBMP(0,0,"Credits.bmp");

}



/* 
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
}

/* 
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if(screen ==0)
	{
	
	    if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && mx>=335 && mx<=660 && my>=453 && my<=530)
		{
			printf("%d %d\n",mx,my);
	        screen = 1;
		}
		if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && mx>=335 && mx<=660 && my>=350 && my<=425)
		{
			screen = 2;
			printf("%d %d\n",mx,my);
            
		}
		if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && mx>=335 && mx<=660 && my>=239 && my<=317)
		{
			screen = 3;
			
			
		}
		if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && mx>=335 && mx<=660 && my>=141 && my<=209)
		{
			
			screen = 4 ;
		}
		if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && mx>=335 && mx<=660 && my>=38 && my<=105)
		{
			exit(0);
		}	
		
	}

	if(screen == 2)
	{
		if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && mx>=744 && mx<=944 && my>=58 && my<=105)
		{
			screen = 0;
		}
	}

	if(screen ==3)
	{
		if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && mx>=724 && mx<=931 && my>=34 && my<=127)
		{
			screen = 0;
		}

	}

	if(screen ==4)
	{
		if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && mx>=750 && mx<=950 && my>=19 && my<=107)
		{
			screen = 0;
		}
	}


	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
		{
		//place your codes here	
		}


}
/*iPassiveMouseMove is called to detect and use 
the mouse point without pressing any button */

void iPassiveMouseMove(int mx,int my)
{ 
	
	//place your code here
	
 if(mx== 2){}        /*Something to do with mx*/
 else if(my== 2){}   /*Something to do with my*/
 
}


/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed. 
*/
void iKeyboard(unsigned char key)
{
	/*if(key == 'f')
	{
		t=iSetTimer(0,fire);
		s=iSetTimer(5,Bullet);
		//do something with 'q'
	}*/
	//place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use 
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6, 
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12, 
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP, 
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT 
*/
void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_RIGHT)
	{
		
	}
	if(key == GLUT_KEY_LEFT)
	{
		
	}
	if(key == GLUT_KEY_UP)
	{
		
	}
	if(key == GLUT_KEY_DOWN)
	{
		
	}
	

	

	//place your codes for other keys here
}
//


int main()
{
	//place your own initialization codes here. 

	iInitialize(1000, 700, "IceVenture");
	return 0;
}