int screen = 9;
int snow_flag = 0;
int level=1;
int chr_x=40, chr_y=40;
int chr_x1=40,chr_y1=100;
int i,sum=20,c_i = 0;

int t1,t2,t3,t4,t5,t6;
char Point_Coin[100];
char life_point[100];
char point_villain[100];
int point = 0,flag = 0,flip = 0;
int lvl_entr=0;
int fluu =0;
int user_d = 0;
int v_x=900,v_y=80;
int  vFlag=0,vu=0,vd=0;
int text_d_r = 1,text_d_g = 1, text_d_b = 1;
int r = 100, g = 50 , bl = 200;

char s[8][15]={"1.bmp","2.bmp","3.bmp","4.bmp","5.bmp","6.bmp","7.bmp"};
char left[8][15]={"7f.bmp","6f.bmp","5f.bmp","4f.bmp","3f.bmp","2f.bmp","1f.bmp"};
char sju[4][15]={"stand.bmp","jump1.bmp","jump2.bmp","jump3.bmp"};
char sjd[5][15]={"jump4.bmp","jump5.bmp","jump6.bmp","jump7.bmp","jump8.bmp"};
char stand[15]="stand.bmp";

char fu[4][15]={"stand.bmp","jump1.bmp","jump2.bmp","jump3.bmp"};
char fd[5][15]={"jump4.bmp","jump5.bmp","jump6.bmp","jump7.bmp","jump8.bmp"};
char f[15]="jump2.bmp";

char v[3][15]={"v1.bmp","v2.bmp","v3.bmp"};
char vdo[3][15]={"v3.bmp","v1.bmp","v2.bmp"};

char gift[2][15]={"giftBox.bmp","giftBox1.bmp"};
char c[4][15]={"1b.bmp","2b.bmp","3b.bmp","4b.bmp"};\

char pengu[4][15]={"pengu1.bmp","pengu2.bmp","pengu3.bmp","pengu4.bmp"};

bool iStand=true;
bool right= true;
int standcounter=0;
int index=0,index1 = 0;

bool iFly=true;
//ool right= true;
int Flycounter=0;
int fly1=0,fly2= 0;

int jump =0; 
int jumpup= 0;
int u = 0,d = 0;
int j =0;
int shark_x=1000;
int shark_y= 40;
int shark1_x=1000;
int shark1_y= 40;
int ci=0;
int jump_w = 0;
int ib_y = 10;

int s_x=40,s_y=40;
int snow_flag1 = 0;
int s_x1 = 40;
int s_y1 = 100;


int fireball_flag = 1;
int fire_x=900;
int fire_y=80;
int fireball_flag1 = 1;
int fire_x1=901;
int fire_y1=400;

int check=0,node = 0;

int s_c=1,s_c1=1;
int i_c=1;
int g_x= 510;
int	g_y=250;
int gb=0;
int life=10;
int villain_life=1;
int p_x=0,p_y=10,pgn=0;
int enter = 0 ,len = 0;

char str[100], str1[100];

FILE *namefile , *fp;


void title();
void story1();
void story2();
void menu();
void game();
void gameOver();
void highscore();
void showHighscore();
void SaveToFile();
void CopyFromFile();
void sort();
void instructions();
void credits();
void coin_visible();
void coins();
void coin_rotate();
void preprocess_coin_lvl1();
void player_move();
void level2intro();
void level2();
void coin_lvl2();
void snowball();
void shark_move();
void shark_move1();
void icebergs();
void gb_sheet();
void shark_charCollision();
void shark_snowball_collision();
void giftbox();
void player_fly();
void lives();
void level3();
void username();
void username1();
void player_fly();
void snowball_lvl3();
void fireball();
void fireball1();
void chr_ice_collision();
void fireball_char_collision();
void snowball_villain_collision();
void snow_fire_collision();
void villain();
void pgn_sheet();
void penguin();



struct coin
{
	int c_x;
	int c_y;
	int mark;
}coin[3000];

struct iceberg
{
	int ib_x;
	int ib_y;
	int mark;
}iceberg[50000];

struct highscores
{
	char name[100];
	int scores;

}h[5],temp;

void preprocess_coin_lvl1()
{	
	coin[0].c_x = 180;
	coin[0].c_y = 150;
	coin[1].c_x = 230;
	coin[1].c_y = 180;
	coin[2].c_x = 271;
	coin[2].c_y = 240;
	coin[3].c_x = 316;
	coin[3].c_y = 230;
	coin[4].c_x = 348;
	coin[4].c_y = 250;
	coin[5].c_x = 400;
	coin[5].c_y = 195;
	coin[6].c_x = 440;
	coin[6].c_y = 280;
	coin[7].c_x = 480;
	coin[7].c_y = 380;
	coin[8].c_x = 510;
	coin[8].c_y = 194;
	coin[9].c_x = 550;
	coin[9].c_y = 350;
	coin[10].c_x = 590;
	coin[10].c_y = 150;
	coin[11].c_x = 630;
	coin[11].c_y = 313;
	coin[12].c_x = 670;
	coin[12].c_y = 296;
	coin[13].c_x = 710;
	coin[13].c_y = 319;
	coin[14].c_x = 750;
	coin[14].c_y = 274;
	coin[15].c_x = 790;
	coin[15].c_y = 267;
	coin[16].c_x = 830;
	coin[16].c_y = 250;
	coin[17].c_x = 870;
	coin[17].c_y = 150;
	coin[18].c_x = 910;
	coin[18].c_y = 300;
	coin[19].c_x = 930;
	coin[19].c_y = 210;
	for( i = 0 ; i < 20 ; i++)
	{
		coin[i].mark = 0;

	}
}

void coin_lvl2()
{
	coin[0].c_x = 150;
	coin[0].c_y = 150;
	coin[1].c_x = 150;
	coin[1].c_y = 250;
	coin[2].c_x = 150;
	coin[2].c_y = 340;
	coin[3].c_x = 300;
	coin[3].c_y = 150;
	coin[4].c_x = 300;
	coin[4].c_y = 250;
	coin[5].c_x = 300;
	coin[5].c_y = 340;
	coin[6].c_x = 450;
	coin[6].c_y = 150;
	coin[7].c_x = 450;
	coin[7].c_y = 250;
	coin[8].c_x = 450;
	coin[8].c_y = 340;
	coin[9].c_x = 600;
	coin[9].c_y = 150;
	coin[10].c_x = 600;
	coin[10].c_y = 250;
	coin[11].c_x = 600;
	coin[11].c_y = 340;
	coin[12].c_x = 750;
	coin[12].c_y = 150;
	coin[13].c_x = 750;
	coin[13].c_y = 250;
	coin[14].c_x = 750;
	coin[14].c_y = 340;
	coin[15].c_x = 900;
	coin[15].c_y = 150;
	coin[16].c_x = 900;
	coin[16].c_y = 250;
	coin[17].c_x = 900;
	coin[17].c_y = 340;
	coin[18].c_x = 225;
	coin[18].c_y = 250;
	coin[19].c_x = 375;
	coin[19].c_y = 250;
	coin[20].c_x = 675;
	coin[20].c_y = 250;
	coin[21].c_x = 825;
	coin[21].c_y = 250;
	for( i = 0 ; i < 22 ; i++)
	{
		coin[i].mark = 0;

	}
} 

void player_move()
{
	if(jump == 0)
	{
		chr_y += 10;
		if(chr_y <= 60) u = 0;
		if(chr_y >= 60 && chr_y <= 65) u = 1;
		if(chr_y >= 65 && chr_y <= 155) u = 2;
		if(chr_y >= 155 && chr_y <= 350) u = 3;
		if(chr_y >= 350)
		{
			jump = 1;
			jumpup  = 1;
		}
	}
	else if(jump == 1)
	{
		chr_y -=10;
		if(chr_y >= 310) d = 0;
		if(chr_y <= 310  && chr_y >= 280) d = 1;
		if(chr_y <= 280 && chr_y >= 70) d = 2;
		if(chr_y <= 70 && chr_y >= 50) d = 3;
		if(chr_y <=40 ) d = 4;

		if(chr_y <= 40)
		{
			jump = 0;
			jumpup = 0;
			iPauseTimer(t2);
			jump_w = 0;
		}
	}

}
void player_fly()
{
	if(fluu== 0)
	{
		chr_y1+= 10;
		if(chr_y1 <= 100) fly1= 0;
		if(chr_y1 >= 100 && chr_y1 <= 180) fly1 = 1;
		if(chr_y1 >= 180 && chr_y1 <= 280) fly1 = 2;
		if(chr_y1 >= 280 && chr_y1 <= 450) fly1 = 3;
		if(chr_y1 >= 450)
		{
			fluu = 1;
			//fly1=0;
		}
	}
	else if(fluu == 1)
	{
		chr_y1 -=10;
		if(chr_y1 >= 450) fly2 = 0;
		if(chr_y1 <= 450  && chr_y1 >=280 ) fly2= 1;
		if(chr_y1 <= 280 && chr_y1 >= 100) fly2 = 2;
		
		

		if(chr_y1 <= 100)
		{
			fluu= 0;
			//fly2=0;
			iPauseTimer(t5);
		    
		}
	}

}
void coin_visible()
{
	coin[c_i++].mark = 1;
	
}
void coin_rotate()
{
	ci++;
	if(ci > 3)
		ci = 0;	
}

void title()
{
	iShowBMP(0,0,"TitlePic.bmp");
}
void story1()
{
	iShowBMP(0,0,"story1.bmp");
}

void story2()
{
	iShowBMP(0,0,"story2.bmp");
}


void username()
{
	if(node == 0)
	{
		//iClear();
		iShowBMP(0,0,"newhscore.bmp");
		//iShowBMP2(50,500,"image\\player.bmp",16777215);
		iSetColor(r,g,bl);
		if(text_d_r == 1)r+=10;
		if(r > 255)text_d_r = 2;
		if(text_d_r == 2)r-=10;
		if(r <=0)text_d_r =1;
		if(text_d_g == 1)g+=10;
		if(g > 255)text_d_g = 2;
		if(text_d_g == 2)g-=10;
		if(g <=0)text_d_g =1;
		if(text_d_b == 1)bl+=10;
		if(bl > 255)text_d_b = 2;
		if(text_d_b == 2)bl-=10;
		if(bl <=0)text_d_b =1;
		//fp = fopen("name.txt","r");
		//fscanf(fp,"%s",str1);
		//fclose(fp);
		//iText(100,470,str1,GLUT_BITMAP_TIMES_ROMAN_24);
		//iShowBMP2(470,500,"image\\player1.bmp",16777215);
		//iSetColor(255,255,255);
		//iFilledRectangle(460,440,370,40);
		//iSetColor(0,0,0);
		iText(600,455, "Click Here",GLUT_BITMAP_HELVETICA_18);
		if(user_d == 1)
		{
					//strcpy(h[4].name,str1);
					sort();
					screen = 3;
					user_d = 0;
					
		}
		//if(image_d)iShowBMP2(150,120,"image\\continue.bmp",16777215);
	}
	else if(node == 1)
	{
		//iClear();
		iShowBMP(0,0,"newhscore.bmp");
		iSetColor(255,255,255);
		iFilledRectangle(460,100,110,40);
		iSetColor(0,0,0);
		iText(475,115,"Click here",GLUT_BITMAP_HELVETICA_18);
		iSetColor(r,g,bl);
		if(text_d_r == 1)r+=10;
		if(r > 255)text_d_r = 2;
		if(text_d_r == 2)r-=10;
		if(r <=0)text_d_r =1;
		if(text_d_g == 1)g+=10;
		if(g > 255)text_d_g = 2;
		if(text_d_g == 2)g-=10;
		if(g <=0)text_d_g =1;
		if(text_d_b == 1)bl+=10;
		if(bl > 255)text_d_b = 2;
		if(text_d_b == 2)bl-=10;
		if(bl <=0)text_d_b =1;
		iText(425,290,"INSERT NEW PLAYER NAME",GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(115,118,121);
		iFilledRectangle(370,205,400,45);
		iSetColor(0,0,0);
		iText(375,220,str,GLUT_BITMAP_TIMES_ROMAN_24);
		
	}

}
void username1()
{
	if(node == 0)
	{
		//iClear();
		iShowBMP(0,0,"congratz.bmp");
		//iShowBMP2(50,500,"image\\player.bmp",16777215);
		iSetColor(r,g,bl);
		if(text_d_r == 1)r+=10;
		if(r > 255)text_d_r = 2;
		if(text_d_r == 2)r-=10;
		if(r <=0)text_d_r =1;
		if(text_d_g == 1)g+=10;
		if(g > 255)text_d_g = 2;
		if(text_d_g == 2)g-=10;
		if(g <=0)text_d_g =1;
		if(text_d_b == 1)bl+=10;
		if(bl > 255)text_d_b = 2;
		if(text_d_b == 2)bl-=10;
		if(bl <=0)text_d_b =1;
		//fp = fopen("name.txt","r");
		//fscanf(fp,"%s",str1);
		//fclose(fp);
		//iText(100,470,"ffsda",GLUT_BITMAP_TIMES_ROMAN_24);
		//iShowBMP2(470,500,"image\\player1.bmp",16777215);
		//iSetColor(255,255,255);
		//iFilledRectangle(460,440,370,40);
		//iSetColor(0,0,0);
		iText(600,455, "Click Here",GLUT_BITMAP_HELVETICA_18);
		if(user_d == 1)
		{
					//strcpy(h[4].name,str1);
					sort();
					screen = 3;
					user_d = 0;
					
		}
		//if(image_d)iShowBMP2(150,120,"image\\continue.bmp",16777215);
	}
	else if(node == 1)
	{
		//iClear();
		iShowBMP(0,0,"congratz.bmp");
		iSetColor(255,255,255);
		iFilledRectangle(460,100,110,40);
		iSetColor(0,0,0);
		iText(475,115,"Click here",GLUT_BITMAP_HELVETICA_18);
		iSetColor(r,g,bl);
		if(text_d_r == 1)r+=10;
		if(r > 255)text_d_r = 2;
		if(text_d_r == 2)r-=10;
		if(r <=0)text_d_r =1;
		if(text_d_g == 1)g+=10;
		if(g > 255)text_d_g = 2;
		if(text_d_g == 2)g-=10;
		if(g <=0)text_d_g =1;
		if(text_d_b == 1)bl+=10;
		if(bl > 255)text_d_b = 2;
		if(text_d_b == 2)bl-=10;
		if(bl <=0)text_d_b =1;
		iText(425,290,"INSERT NEW PLAYER NAME",GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(115,118,121);
		iFilledRectangle(370,205,400,45);
		iSetColor(0,0,0);
		iText(375,220,str,GLUT_BITMAP_TIMES_ROMAN_24);
		
	}

}
void menu()
{
	CopyFromFile();
	c_i = 0;
	point =0;
	life = 30;
	snow_flag = 0;
	level=1;
	chr_x=40, chr_y=40;
	chr_x1=40,chr_y1=100;
	i,sum=20,c_i = 0;
	point = 0,flag = 0,flip = 0;
	lvl_entr=0;
	fluu =0;

	v_x=900,v_y=80;
	vFlag=0,vu=0,vd=0;

	 iStand=true;
	 right= true;
	 standcounter=0;
	 index=0,index1 = 0;

	 iFly=true;
	//ool right= true;
	 Flycounter=0;
	fly1=0;
	fly2= 0;

	jump =0; 
	jumpup= 0;
	u = 0,d = 0;
	j =0;
	shark_x=1000;
	shark_y= 40;
	shark1_x=1000;
	shark1_y= 40;
	ci=0;
	jump_w = 0;
	ib_y = 10;

	s_x=40,s_y=40;
	snow_flag1 = 0;
	s_x1 = 40;
	s_y1 = 100;


	fireball_flag = 1;
	fire_x=900;
	fire_y=80;
	fireball_flag1 = 1;
	fire_x1=901;
	fire_y1=400;

	check=0;

	s_c=1,s_c1=1;
	i_c=1;
	g_x= 510;
	g_y=250;
	gb=0;
	 life=10;
	villain_life=1;
	p_x=0,p_y=10,pgn=0;
	iShowBMP(0,0,"menu.bmp");
	preprocess_coin_lvl1();

}

void sort()
{
	int k;
	for(i = 0 ; i < 4 ; i++)
	{
		for(k = 0 ; k < 4 ; k++)
		{
			if(h[k].scores < h[k+1].scores)
			{
				temp = h[k+1];
				h[k+1] = h[k];
				h[k] = temp;
			}
		}
	}
	SaveToFile();

}
void CopyFromFile()
{
	namefile = fopen("hscore.txt","r");
	for(i = 0 ; i < 4 ; i++)
	{
		fscanf(namefile,"%s %d\n",h[i].name, &h[i].scores);
	}
	fclose(namefile);
}

void SaveToFile()
{
	namefile = fopen("hscore.txt","w");
	for(i = 0 ; i < 4 ; i++)
	{
		fprintf(namefile,"%s %d\n",h[i].name, h[i].scores);
	}
	fclose(namefile);
}

void showHighscore()
{
	int dy = 330;
	for(i = 0 ; i < 4 ; i++,dy -= 330/5)
	{
		iSetColor(128,128,128);
		iFilledRectangle(50,dy-5,680,30);
		iSetColor(72,0,0);
		iText(80,dy,h[i].name,GLUT_BITMAP_TIMES_ROMAN_24);
		char text[80];
		sprintf_s(text,"%d",h[i].scores);
		iText(530,dy,text,GLUT_BITMAP_TIMES_ROMAN_24);

	}
}


void coins()
{
	if(level == 1)
	{	
		iResumeTimer(t3);
		if(c_i >= 20)
		{
			 iPauseTimer(t1);
			 c_i = 25;
		}
		for(i=0;i<20;i++)
		{ 
			if(coin[i].mark == 1)
			{
				iShowBMP2(coin[i].c_x,coin[i].c_y,c[ci],0);
				sprintf(Point_Coin,"%d",point); 
				//if(chr_x + 40 >= coin[i].c_x && chr_y + 36 >= coin[i].c_y)
				if(chr_x<=coin[i].c_x && chr_x+35>=coin[i].c_x && chr_y<=coin[i].c_y && chr_y+38>=coin[i].c_y)

				{
					coin[i].mark = 0;
					if(flag == 0)
					{
						flag = 1;
						point+=1;
						sprintf(Point_Coin,"%d",point);
					}
				}
			
			}
			flag =0;
			
			if(point >= 5)
			{
				screen=6;
				level=2;
				chr_x=40;
				chr_y=40;
				if(c_i >= 20)
				{
				  iPauseTimer(t3);
				  c_i = 0;
				}
				
			}

		}
		

	}

	if(level == 2)
	{
		//coin_lvl2();
		iResumeTimer(t3);
		if(c_i >= 21)
		{
			 iPauseTimer(t1);
			 c_i = 25;
		}
		
		for(i=0;i<22;i++)
		{ 
			if(coin[i].mark == 1)
			{
				iShowBMP2(coin[i].c_x,coin[i].c_y,c[ci],0);
				sprintf(Point_Coin,"%d",point); 
				//if(chr_x + 40 >= coin[i].c_x && chr_y + 36 >= coin[i].c_y)
				if(chr_x<=coin[i].c_x && chr_x+35>=coin[i].c_x && chr_y<=coin[i].c_y && chr_y+38>=coin[i].c_y)

				{
					coin[i].mark = 0;
					if(flag == 0)
					{
						flag = 1;
						point += 1;
						sprintf(Point_Coin,"%d",point);
					}
				}
			
			}
			flag =0;
			
			if(point >= 10)
			{
				screen = 8;
				level = 3;
				chr_x = 40;
				chr_y = 40;
				lvl_entr = 0;
				if(c_i >= 21)
				{
				 iPauseTimer(t3);
				 c_i = 0;
				}
				
			}
			
		}
		
	}
}

void game()
{
	if(level == 1)
	{
		iClear();
		iShowBMP(0,0,"level1.bmp");
	  
		if(!iStand)
		{
			if(flip == 0)
			{
	
				iShowBMP2(chr_x,chr_y,s[index],0);
				standcounter++;
				if(standcounter>=10)
				{
					standcounter=0;
					index=0;
					iStand=true;
				}

			}
			else if(flip == 1)
			{
				iShowBMP2(chr_x,chr_y,left[index1],0);
				standcounter++;
				if(standcounter>=10)
				{
					standcounter=0;
					index1=0;
					iStand=true;
				}
			}
		}
		else if(jumpup == 0)
		 {
		  
			iShowBMP2(chr_x,chr_y,sju[u],0);

		 }  
		else if (jumpup == 1)
		  {

			  iShowBMP2(chr_x,chr_y,sjd[d],0);
		  }
		
		else 
		{
			if(right)
				iShowBMP2(chr_x,chr_y,stand,0);
			else
				iShowBMP2(chr_x,chr_y,left[0],0);
		}

		//iSetColor(0,47,94);
		iSetColor(r,g,bl);
		if(text_d_r == 1)r+=5;
		if(r > 255)text_d_r = 2;
		if(text_d_r == 2)r-=2;
		if(r <=0)text_d_r =1;
		if(text_d_g == 1)g+=5;
		if(g > 255)text_d_g = 2;
		if(text_d_g == 2)g-=5;
		if(g <=0)text_d_g =1;
		if(text_d_b == 1)bl+=2;
		if(bl > 255)text_d_b = 2;
		if(text_d_b == 2)bl-=5;
		if(bl <=0)text_d_b =1;
		iText(800,460,"Stars : ",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(890,460,Point_Coin,GLUT_BITMAP_TIMES_ROMAN_24);

		if(c_i <= 19)
		{
		  iResumeTimer(t1);
		}
		coins();
		

	}
	
}

		
void gameOver()
{
	c_i = 0;
	iShowBMP(0,0,"GameOverNew1.bmp");

}
void highscore()
{
	iShowBMP(0,0,"HighScores.bmp");
	showHighscore();

}
void instructions()
{
	iShowBMP(0,0,"instructions.bmp");
	
}
void credits()
{
	iShowBMP(0,0,"Credits.bmp");

}

void level2intro()
{                     
	iShowBMP(0,0,"level2intro.bmp");
	lvl_entr = 1;
	coin_lvl2();
}

void snowball()
{
	if(snow_flag ==1)
	{
		s_x = s_x + 10;
		iShowBMP2(s_x, s_y,"snowball.bmp",0);
	}

}


void snowball_lvl3()
{
	if(snow_flag1 ==1)
	{
		s_x1 = s_x1 + 5;
		iShowBMP2(s_x1, s_y1,"snowball.bmp",0);

	}
}
void shark_move()
{
	if(s_c == 1)
	{
		shark_x=shark_x-1;
		iShowBMP2(shark_x,shark_y,"shark4.bmp",0);
		
		if (shark_x==0)
		{
			shark_x=1000;
		}
	}
}

void fireball()
{
	
	if(fireball_flag==1)
		{
			fire_x = fire_x - 5;
			fire_y = v_y;
			if(fire_x == 0)
			{
				fire_x= 900;
			}
			iShowBMP2(fire_x, fire_y,"fireball.bmp",0);
		}
}

void fireball1()
{
	
	if(fireball_flag1==1)
		{
			fire_x = fire_x - 4;
			fire_y1 = v_y - 245;
	
			if(fire_x == 0)
			{
				fire_x= 900;
			}
			iShowBMP2(fire_x, fire_y1,"fireball.bmp",0);
		}
}



void shark_move1()
{
	if(s_c1 == 1)
	{
		if (shark1_x==0)
		{
			shark1_x=1000;
		}
	
		shark1_x=shark1_x-1;
		iShowBMP2(shark1_x,shark1_y,"shark5.bmp",0);
	}
}
void icebergs()
{	
	if(i_c == 1)
	{
		iceberg[0].ib_x=40;
		iceberg[1].ib_x=150;
		iceberg[2].ib_x=300;
		iceberg[3].ib_x=450;
		iceberg[4].ib_x=600;
		iceberg[5].ib_x=750;
		iceberg[6].ib_x=900;
		for(i=0;i<7;i++)
			iShowBMP2(iceberg[i].ib_x,iceberg[i].ib_y,"iceberg.bmp",0);
	}
}

void gb_sheet()
{
	gb++;
	if(gb == 2)
		gb = 0;
}

void giftbox()
{
	
	iShowBMP2(g_x,g_y,gift[gb],0);
	if(chr_x<=g_x && chr_x+35>=g_x && chr_y<=g_y && chr_y+38>=g_y)
	{
		g_x=1100;
		g_y=1100;
		point+=3;
	}
}

void lives()
{
	iSetColor(0,0,0);
	iText(20,960,"Life : ",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(50,960,life_point,GLUT_BITMAP_TIMES_ROMAN_24);
	if(life==0)
		screen=5;
}

void shark_snowball_collision()
{
	if(s_x >= shark_x)
	{
		shark_x = 1100;
		s_x=-1; 
		snow_flag = 0;
		s_c = 1;
		
	}

	if(s_x >= shark1_x )
	{
		shark1_x = 1200;
		s_x = -1;
		snow_flag = 0;
		s_c = 1;
	}


}

void shark_charCollision()
{
	//if((shark_x-900>=chr_x+35 && chr_y+38<=shark_y+32 && shark_y>=chr_y) || (shark1_x-900>=chr_x+35 &&chr_y+38<=shark1_y+32  && shark1_y>=chr_y))
	if((shark_x==chr_x) || (shark1_x==chr_x))
	{
		if((shark_y==chr_y &&shark_y+73>=chr_y)  || (shark1_y==chr_y &&shark1_y+73>=chr_y))
		{
		
			s_c=0;
			s_c1=0;
			life-=1;
			sprintf(life_point,"%d",life);
			//iShowBMP(0,0,"GameOverNew1.bmp");
			//screen =5;
			g_x=1100;
			g_y=1100;
		}
	}

}

void chr_ice_collision()
{
	if((chr_x+25<39 ||(chr_x+25>128 && chr_x+25<160) || (chr_x+25>240 && chr_x+25<311 ) || (chr_x+25 >339 && chr_x +25<459) || (chr_x+25 >534 && chr_x +25<610) || (chr_x+25 >684 && chr_x+25 <761) || (chr_x +25>835 && chr_x+25 <907) || chr_x+25>990) && chr_y ==40)
	{
		life-=1;
	    sprintf(life_point,"%d",life);
		//screen = 5;
	}
}

void fireball_char_collision()
{
	
	if(fire_x<= chr_x1+ 60)
	{
		if(fire_y >= chr_y1 && fire_y <=chr_y1+ 70)
		{
			fire_x = 900;
			fireball_flag = 1;
			life-=1;
		}
	}
}

void snowball_villain_collision()
{
	//villain_life = 0;
	if(s_x1 >= v_x)
	{
		if(s_y1 >= v_y && s_y1 <= v_y + 130)
		{
			snow_flag1 = 0;
			villain_life -=1;
			v_x=900,v_y=80;
			
		}
	}
	
}


void snow_fire_collision()
{
	if(s_x1 >= fire_x)
	{
		if(s_y1 >= fire_y && s_y1 <= fire_y +35)
		{
		
			s_x1 = -1;
			snow_flag1 = 0;
			fire_x = 900;
			fireball_flag=1;

		}
	}

	if(s_x1 >= fire_x ) 
	{
			if(s_y1 >= fire_y1 && s_y1 <= fire_y1+ 35)
			{
		
				s_x1 = -1;
				snow_flag1 = 0;
				fire_x = 900;
				fireball_flag1=1;
			}

	}
}


void level2()
{

	iShowBMP(0,0,"level2.bmp");
	
	if(level == 2)
	{
		
		if(!iStand)
			{
				if(flip == 0)
				{
	
					iShowBMP2(chr_x,chr_y,s[index],0);
					standcounter++;
					if(standcounter>=10)
					{
						standcounter=0;
						index=0;
						iStand=true;
					}

				}
				else if(flip == 1)
				{
					iShowBMP2(chr_x,chr_y,left[index1],0);
					standcounter++;
					if(standcounter>=10)
					{
						standcounter=0;
						index1=0;
						iStand=true;
					}
				}
			}
			else if(jumpup == 0)
			 {
		  
				iShowBMP2(chr_x,chr_y,sju[u],0);

			 }  
			else if (jumpup == 1)
			  {

				  iShowBMP2(chr_x,chr_y,sjd[d],0);
			  }
		
			else 
			{
				if(right)
					iShowBMP2(chr_x,chr_y,stand,0);
				else
					iShowBMP2(chr_x,chr_y,left[0],0);
			}
		iSetColor(r,g,bl);
		if(text_d_r == 1)r+=5;
		if(r > 255)text_d_r = 2;
		if(text_d_r == 2)r-=2;
		if(r <=0)text_d_r =1;
		if(text_d_g == 1)g+=5;
		if(g > 255)text_d_g = 2;
		if(text_d_g == 2)g-=5;
		if(g <=0)text_d_g =1;
		if(text_d_b == 1)bl+=2;
		if(bl > 255)text_d_b = 2;
		if(text_d_b == 2)bl-=5;
		if(bl <=0)text_d_b =1;
		iText(800,460,"Stars : ",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(890,460,Point_Coin,GLUT_BITMAP_TIMES_ROMAN_24);
		iText(20,460,"Life : ",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(100,460,life_point,GLUT_BITMAP_TIMES_ROMAN_24);
		sprintf(life_point,"%d",life);
		h[4].scores = point;
		if(life==0)
		{
			
			if(h[3].scores < h[4].scores)
			{
				 screen = 12;
			}
			else
			{
			  screen=5;
			}
		}
		//lives();
		if(c_i <= 21)
		{
		  iResumeTimer(t1);
		}
		//iResumeTimer(t1);
		coins();
		shark_move();
		shark_move1();
		icebergs();
		snowball();
		shark_snowball_collision();
		shark_charCollision();
		chr_ice_collision();
		giftbox();
		iResumeTimer(t4);
		
	}
}

void villain()
{
	
	if(vFlag == 0)
	{
		v_y += 2;
		if(v_y <= 80) vu = 0;
		if(v_y >= 80 && v_y  <= 250) vu = 1;
		if(v_y  >= 250 && v_y <= 400) vu = 2;
		
		if(v_y>= 400)
		{
			vFlag= 1;
			vu=0;
		}
	}
	else if(vFlag == 1)
	{
		v_y -= 2;
		if(v_y  >= 400) vd = 0;
		if(v_y  <= 400  && v_y>= 280) vd = 1;		
		if(v_y <= 280 && v_y >= 80) vd = 2;
		if(v_y<=80)
		{
			vFlag=0;
			vd=0;
		}
	}
}

void pgn_sheet()
{
	pgn++;
	if(pgn == 4)
		pgn = 0;
}

void penguin()
{
	p_x+=1;
	iShowBMP2(p_x,p_y,pengu[pgn],0);
	if(p_x == 1000)
		p_x=0;
}

void level3()
{
	//iSetColor(255,255,255);
	//iText(400,250,"Welcome to Level 3 ",GLUT_BITMAP_TIMES_ROMAN_24);
	iPauseTimer(t1);
	c_i = 0;
	iShowBMP(0,0,"level3.bmp");          
	if(level == 3)
	{
		
		if(!iFly)
		{
				if(fluu== 0)
				{
					iShowBMP2(chr_x1,chr_y1,fu[fly1],0);
					Flycounter++; 
					if(Flycounter>=5)
					{
						Flycounter=0;
						fly1=0;
						iFly=true;
					}
				}
				else if(fluu== 1)
				{
					iShowBMP2(chr_x1,chr_y1,fd[fly2],0);
					Flycounter++;
					if(Flycounter>=5)
					{
						Flycounter=0;
						fly2=0;
						iFly=true;
					}
				}
			}
			else 
				iShowBMP2(chr_x1,chr_y1,f,0);

			if(vFlag == 0)
			 {
		  
				iShowBMP2(v_x,v_y,v[vu],0);
				vu++;
				if(vu>3)
				{
					vu=0;
				}
			 }  
			if (vFlag== 1)
			 {

				  iShowBMP2(v_x,v_y,vdo[vd],0);
				  vd++;
					if(vd>3)
					{
						vd=0;
					}
			  }
		
		
		//player_fly();
		villain();	
		snowball_lvl3();
		fireball_flag = 1;
		fireball();
		//fireball1();
		fireball_char_collision();
		snowball_villain_collision();	
		snow_fire_collision();
		iSetColor(r,g,bl);
		if(text_d_r == 1)r+=5;
		if(r > 255)text_d_r = 2;
		if(text_d_r == 2)r-=2;
		if(r <=0)text_d_r =1;
		if(text_d_g == 1)g+=5;
		if(g > 255)text_d_g = 2;
		if(text_d_g == 2)g-=5;
		if(g <=0)text_d_g =1;
		if(text_d_b == 1)bl+=2;
		if(bl > 255)text_d_b = 2;
		if(text_d_b == 2)bl-=5;
		if(bl <=0)text_d_b =1;
		iText(750,460,"Villain Life : ",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(900,460,point_villain,GLUT_BITMAP_TIMES_ROMAN_24);
		sprintf(point_villain,"%d",villain_life);
		iText(20,460,"Life : ",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(100,460,life_point,GLUT_BITMAP_TIMES_ROMAN_24);
		sprintf(life_point,"%d",life);
		h[4].scores = point;
		if(villain_life <= 0)
		{
			if(h[3].scores < h[4].scores)
			{
				screen = 13;
			}
		}
		if(life <= 0)
		{
			if(h[3].scores < h[4].scores)
			{
				screen = 12;
			}
			else
			{
			  screen=5;
			}
		}
		iResumeTimer(t5);
		penguin();
		iResumeTimer(t6);
		
		
	}
}



