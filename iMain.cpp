#include<bits/stdc++.h>
# include "iGraphics.h"
char* btnPauseText="PAUSE";
bool running=true;
bool gameOver=false;
int pic_x = 500, pic_y = 80;
char str_score[7];
int j11 = 10;
int spd=22;
int play = 2;
int score=0;
bool ok=false;
int ft=1;
int mposx, mposy;
int oppoy1=1200,oppoy2=1100,oppoy3=700,oppoy4=800,oppoy5=900,oppoy6=1000;
int oppox1=-20,oppox2=-20,oppox3=-20,oppox4=-20,oppox5=-20,oppox6=-20;
void pauseTimers()
{
	iPauseTimer(0);
	iPauseTimer(1);
	iPauseTimer(2);
	iPauseTimer(3);
	iPauseTimer(4);
	iPauseTimer(5);
	iPauseTimer(6);
	iPauseTimer(7);
	iPauseTimer(8);
	iPauseTimer(9);
}
void resumeTimers()
{
	iResumeTimer(0);
	iResumeTimer(1);
	iResumeTimer(2);
	iResumeTimer(3);
	iResumeTimer(4);
	iResumeTimer(5);
	iResumeTimer(6);
	iResumeTimer(7);
	iResumeTimer(8);
	iResumeTimer(9);
}
void spd_increase()
{
	spd+=3;
}
void opponentInit()
{
	if(ft==1)
	{
		ft=0;
		oppoy1=1200,oppoy2=1100,oppoy3=700,oppoy4=800,oppoy5=900,oppoy6=1000;
	}
	ok=true;
}
void sendCar1()
{
	if(play==1){
		if(oppoy1<=0)
			oppoy1=1200;
		if(oppoy1>=1200){
			int r=rand()%2 +1;
			if(r==1)
			{
				oppox1=23;
			} else if(r==2)
			{
				oppox1=107;
			}
		}
	}
}
void sendCar2()
{
	if(play==1){
		if(oppoy2<=0)
			oppoy2=1100;
		if(oppoy2>=1100){
			int r=rand()%2 +1;
			if(r==1)
			{
				oppox2=183;
			} else if(r==2)
			{
				oppox2=274;
			}
		}
	}
}
void sendCar3()
{
	if(play==1){
		if(oppoy3<=0)
			oppoy3=700;
		if(oppoy3>=700){
			int r=rand()%2 +1;
			if(r==1)
			{
				oppox3=352;
			} else if(r==2)
			{
				oppox3=428;
			}
		}
	}
}
void sendCar4()
{
	if(play==1){
		if(oppoy4<=0)
			oppoy4=800;
		if(oppoy4>=800){
			int r=rand()%2 +1;
			if(r==1)
			{
				oppox4=517;
			} else if(r==2)
			{
				oppox4=595;
			}
		}
	}
}
void sendCar5()
{
	if(play==1){
		if(oppoy5<=0)
			oppoy5=900;
		if(oppoy5>=900){
			int r=rand()%2 +1;
			if(r==1)
			{
				oppox5=673;
			} else if(r==2)
			{
				oppox5=743;
			}
		}
	}
}
void sendCar6()
{
	if(play==1){
		if(oppoy6<=0)
			oppoy6=1000;
		if(oppoy6>=1000){
			int r=rand()%2 +1;
			if(r==1)
			{
				oppox6=809;
			} else if(r==2)
			{
				oppox6=890;
			}
		}
	}
}
void setScore()
{
	if(play==1)
		score++;
	itoa(score,str_score,10);
}
void move()
{
	if(play==1){
		j11 -= (spd-2);
		if(oppoy1>=-10)
			oppoy1-=spd;
		if(oppoy2>=-10)
			oppoy2-=spd;
		if(oppoy3>=-10)
			oppoy3-=spd;
		if(oppoy4>=-10)
			oppoy4-=spd;
		if(oppoy5>=-10)
			oppoy5-=spd;
		if(oppoy6>=-10)
			oppoy6-=spd;
		if((pic_x+47)>=oppox1 && pic_x<=(oppox1+47) && oppoy1>0 && oppoy1<=202 && ok)
		{
			pauseTimers();
			running=false;
			gameOver=true;
		}
		if((pic_x+47)>=oppox2 && pic_x<=(oppox2+47) && oppoy2>0 && oppoy2<=202 && ok)
		{
			pauseTimers();
			running=false;
			gameOver=true;
		}
		if((pic_x+47)>=oppox3 && pic_x<=(oppox3+47) && oppoy3>0 && oppoy3<=202 && ok)
		{
			pauseTimers();
			running=false;
			gameOver=true;
		}
		if((pic_x+47)>=oppox4 && pic_x<=(oppox4+47) && oppoy4>0 && oppoy4<=202 && ok)
		{
			pauseTimers();
			running=false;
			gameOver=true;
		}
		if((pic_x+47)>=oppox5 && pic_x<=(oppox5+47) && oppoy5>0 && oppoy5<=202 && ok)
		{
			pauseTimers();
			running=false;
			gameOver=true;
		}
		if((pic_x+47)>=oppox6 && pic_x<=(oppox6+47) && oppoy6>0 && oppoy6<=202 && ok)
		{
			pauseTimers();
			running=false;
			gameOver=true;
		}
	}
}
void home()
{
	iClear();
	iSetColor(255, 0, 50);
	iShowBMP(0, 0, "forza.bmp");
	iShowBMP(400, 400, "nfs.bmp");
	iFilledRectangle(400, 300, 100, 50);
	iShowBMP(400, 300, "images.bmp");
	iShowBMP(400, 200, "quit.bmp");
}
void mygame()
{
	iClear();
	int i=0;
	if(ok){
		iShowBMP(oppox1,oppoy1,"1.bmp");
		iShowBMP(oppox2,oppoy2,"2.bmp");
		iShowBMP(oppox3,oppoy3,"3.bmp");
		iShowBMP(oppox4,oppoy4,"4.bmp");
		iShowBMP(oppox5,oppoy5,"5.bmp");
		iShowBMP(oppox6,oppoy6,"6.bmp");
	}
	iSetColor(255, 255, 255);
	for (i = 0; i < 5000; i++)
	{

		iFilledRectangle(650, j11 + 260 * i, 20, 200);
		iFilledRectangle(330, j11 + 260 * i, 20, 200);
	}
	iSetColor(255, 80, 20);
	iFilledRectangle(960, 0, 10, 25000);
	iShowBMP(pic_x, pic_y, "smurf.bmp");
	iSetColor(255,255,0);
	char fin_score[25]="Score: ";
	strcat(fin_score, str_score);
	iText(1100,500,fin_score, GLUT_BITMAP_HELVETICA_18);
	iSetColor(255,0,0);
	iRectangle(1100,400,70,25);
	iText(1104,407,btnPauseText,GLUT_BITMAP_HELVETICA_18);
	iSetColor(20,255,35);
	iText(985,300,"Use <- and -> keys to control the car",GLUT_BITMAP_8_BY_13);

}

void iDraw()
{
	//place your drawing codes here

	iClear();
	if(gameOver)
	{
		iSetColor(255,255,0);
		char fin_score[27]="Your Score was: ";
		char val_score[5];
		itoa(score,val_score,10);
		strcat(fin_score,val_score);
		iText(1300/2-50,500,"Game Over",GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(77,255,77);
		iText(1300/2-60,450,fin_score);
		iSetColor(255,0,0);
		iRectangle(628,400,54,25);
		iText(632,407,"QUIT",GLUT_BITMAP_HELVETICA_18);


	} else{
		home();
		if (play == 1)
			mygame();
		else if (play == 0)
			exit(0);

	}

}
void iMouseMove(int mx, int my)
{

}
void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		printf("%d %d\n",mx,my);
		if(play==2){
			if (mx >= 405 && mx <= 493 && my >= 312 && my <= 347 && play!=1)
				play = 1;

			else if (mx >= 403 && mx <= 497 && my >= 203 && my <= 250 && play!=1)
				play = 0;
		}}
	else if(gameOver){
		if(mx >= 628 && mx <= (628+54) && my >= 400 && my <= 425)
			exit(0);
	}
	else{
		if(mx>=1100&&mx<=1170&&my>=400&&my<=425)
		{

			if(running)
			{
				pauseTimers();
				running=false;
				btnPauseText="START";
			}
			else
			{
				resumeTimers();
				running=true;
				btnPauseText="PAUSE";
			}


		}
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
	}
}


void iPassiveMouseMove(int mx,int my)
{
	mposx = mx;
	mposy = my;
	if(mx== 2){}
	else if(my== 2){}

}

void iKeyboard(unsigned char key)
{
	if (key == 'x') {
		//do something with 'x'
		exit(0);
	}

}
void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0);
	}
	else if(key == GLUT_KEY_RIGHT)
	{
		if(pic_x+20<900)
		{

			if(running){
				pic_x = pic_x + 20;
			}
		}
	} else if(key == GLUT_KEY_LEFT)
	{
		if(pic_x-20>0)
			if(running)
				pic_x = pic_x - 20;
	}
	//place your codes for other keys here
}

int main()
{
	iSetTimer(20,move);
	iSetTimer(1000,setScore);
	iSetTimer(5000,opponentInit);
	iSetTimer(3000,sendCar1);
	iSetTimer(4000,sendCar2);
	iSetTimer(8000,sendCar3);
	iSetTimer(7000,sendCar4);
	iSetTimer(6000,sendCar5);
	iSetTimer(5000,sendCar6);
	iSetTimer(20000,spd_increase);
	iInitialize(1300, 650, "CAR RACING GAME");
	return 0;
}
