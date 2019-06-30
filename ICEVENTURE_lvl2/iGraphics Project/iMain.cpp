# include "iGraphics.h"
#include "Functions.h" 







void iDraw()
{
		
	iClear();
	if(screen==9)title();
	else if(screen==10)story1();
	else if(screen==11)story2();
	else if(screen==0)menu();
	else if(screen==1)game();
	else if(screen==2)instructions();
	else if(screen==3)highscore();
	else if(screen==4)credits();
	else if(screen==5)gameOver();
	else if(screen==6)level2intro();
	else if(screen==7)level2();
	else if(screen==8)level3();
	else if(screen == 12)username();
	else if(screen == 13)username1();

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
	

	if(screen == 9)

	{
		printf("%d %d\n",mx,my);
		if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && mx>=912 && mx<=976 && my>=436 && my<487)
		{
			screen = 10;
			
		}

	}
	

	if(screen == 10)
	{
		printf("%d %d\n",mx,my);
			if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && mx>=900 && mx<=970 && my>=251 && my<297)
			{
				screen = 11;
				
			}
		

	}

	if(screen == 11)
	{
		printf("%d %d\n",mx,my);
		
		
		if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && mx>=924 && mx<=980 && my>=183 && my<208)
		{
			screen = 0;
		}
		

	}

	
	
	
	if(screen == 5)
	{
		if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && mx>=764 && mx<=960 && my>=25 && my<=85)
		{
			screen = 0;
		}              

		
		
	}
	
	
	if(screen == 0)
	{
	
	   if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && mx>=330 && mx<=670 && my>=323 && my<=377)
		{
			printf("%d %d\n",mx,my);
	        screen = 1;
			level = 1;
			
		}
		if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && mx>=330 && mx<=670 && my>=257 && my<=300)
		{
			screen = 2;
			printf("%d %d\n",mx,my);
            
		}
		if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && mx>=330 && mx<=670 && my>=174 && my<=217)
		{
			screen = 3;
			
			
		}
		if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && mx>=330 && mx<=670 && my>=100 && my<=150)
		{
			
			screen = 4 ;
		}
		if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && mx>=330 && mx<=670 && my>=25 && my<=75)
		{
			exit(0);
		}	
		
	}

	if(screen == 2)
	{
		
		if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && mx>=748 && mx<=947 && my>=40 && my<=76)
		{
			screen = 0;
		}
	}

	if(screen == 3)
	{
		
		
		if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && mx>=730 && mx<=930 && my>=29 && my<=89)
		{
			screen = 0;
		}

	}

	if(screen ==4)
	{
		//printf("%d %d\n",mx,my);
		if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && mx>=748 && mx<=950 && my>=13 && my<=74)
		{
			screen = 0;
		}
	}

	if(screen == 12)//username
	{
		if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && (mx >=460 && mx <= 830) && (my >= 440 && my <= 480) && node == 0)
		{
				node = 1;
		}
		if(node == 1)
		{

			if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && (mx >=460 && mx <= 570) && (my >= 101 && my <= 139))
			{

				    strcpy(h[4].name,str);
					/*fp = fopen("name.txt","w");
					fprintf(fp,"%s",str1);
					fclose(fp);*/
					for(i = 0 ; i < len ;i++)
						str[i] = 0;
					len = 0;
					node = 0;
					user_d = 1;

			}
	}
	}
	if(screen == 13)//username
	{
		if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && (mx >=460 && mx <= 830) && (my >= 440 && my <= 480) && node == 0)
		{
				node = 1;
		}
		if(node == 1)
		{

			if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && (mx >=460 && mx <= 570) && (my >= 101 && my <= 139))
			{

				    strcpy(h[4].name,str);
					/*fp = fopen("name.txt","w");
					fprintf(fp,"%s",str1);
					fclose(fp);*/
					for(i = 0 ; i < len ;i++)
						str[i] = 0;
					len = 0;
					node = 0;
					user_d = 1;

			}
	}
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
		{
		//place your codes here	
			//printf("%d %d\n",mx,my);
		}
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
		//place your codes here	
			printf("%d %d\n",mx,my);
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
	if (key == 's')
	{
		snow_flag = 1;
		s_x=chr_x+10;
		s_y= chr_y+10;
	}

	if (key == 's')
	{
		snow_flag1 = 1;
		snow_flag = 1;
		s_x1=chr_x1+10;
		s_y1= chr_y1+10;
	}

	if(key == ' ')
	{
		iResumeTimer(t2);
		if(level == 1)
			jump_w = 1;
		else if(level == 2)
			jump_w = 0;
	}
	if(screen == 6)
	{
		if(lvl_entr == 1)
		{
			if(key == 13)
			{
				screen = 7;
			//c_i = 0;
			}
		}
	}

	if(screen == 12)//username
	{
		if(node == 1)
		{
			if(key == 13)
			{
				strcpy(h[4].name, str);
				for(i = 0; i < len; i++)
				{
					str[i] = 0;
				}
				len = 0;
				node = 0;
				user_d = 1;
			}
			else if(key == 8)
			{
				len--;
				str[len] = key;
			}
			else
			{
				str[len] = key;
				len++;
			}
		}
	}
	if(screen == 13)//username
	{
		if(node == 1)
		{
			if(key == 13)
			{
				strcpy(h[4].name, str);
				for(i = 0; i < len; i++)
				{
					str[i] = 0;
				}
				len = 0;
				node = 0;
				user_d = 1;
			}
			else if(key == 8)
			{
				len--;
				str[len] = key;
			}
			else
			{
				str[len] = key;
				len++;
			}
		}
	}
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
	if(jump_w == 0)
	{
		if(key == GLUT_KEY_RIGHT && chr_x<=900)
		{
			flip=0;
			iStand=false;
			chr_x+=6;
			index++;
			if(index > 6)
			{
				index=0;
			}
		}
		if(key == GLUT_KEY_LEFT && chr_x>=5)
		{
			flip=1;
			iStand=false;
			chr_x-=6;
			index1++;
			if(index1 > 6 )
			{
				index1 = 0;
			}	
		}
	}
	if(screen == 8)
	{
		c_i = 0;
	if(key == GLUT_KEY_UP && chr_y1<=400)
	{
		fluu=0;
			iFly=false;
			chr_y1+=15;
			fly1++;
			if(fly1 > 4)
			{
				fly1=0;
			}
	}
	if(key == GLUT_KEY_DOWN && chr_y1>=100)
	{
		fluu=1;
			iFly=false;
			chr_y1-=15;
			fly2++;
			if(fly2 > 4)
			{
				fly2=0;
			}
	}
	}

	//place your codes for other keys here
}
//


int main()
{
	//place your own initialization codes here. 
	t1 = iSetTimer(90,coin_visible);
	iPauseTimer(t1);
	t2 = iSetTimer(25,player_move);
	iPauseTimer(t2);
	t3 = iSetTimer(100,coin_rotate);
	iPauseTimer(t3);
	t4 = iSetTimer(150,gb_sheet);
	iPauseTimer(t4);
	/*t5 = iSetTimer(70,player_fly);
	iPauseTimer(t5);*/
	t6 = iSetTimer(180,pgn_sheet);
	iPauseTimer(t6);


	
	PlaySound("iceventure",NULL,SND_LOOP | SND_ASYNC);
	iInitialize(1000, 500, "IceVenture");
	return 0;
}