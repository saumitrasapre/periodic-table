#include <iostream>
#include<stdio.h>
#include<windows.h>
#include<graphics.h>
#include<fstream>
using namespace std;
int main()
{
    fstream file;
    int gd= DETECT;
    int gm;
    char buf[100];
    char arr[20];
    int i,j,a,b;
    int screenwidth=GetSystemMetrics(SM_CXSCREEN);
    int screenheight= GetSystemMetrics(SM_CYSCREEN);
    initgraph(&gd, &gm, "C:\\TC\\BGI");
initwindow(screenwidth,screenheight,"",-3,-3);
setcolor(RED);
//Hydrogen column
  circle(50,50+40,20);
  j=50+40;i=0;

  while(i!=6)
  {
    j=j+40;
    circle(50,j,20);
    i++;
  }
  //Beryllium column
  circle(90,90+40,20);
  i=0;j=90+40;
  while(i!=5)
  {
    j=j+40;
    circle(90,j,20);
    i++;
  }
  setcolor(YELLOW);
  setfillstyle(SOLID_FILL,YELLOW);
  bar(800,120,820,140);
  //Scandium Column
  circle(130,170+40,20);
i=0;j=130+40;
  while(i!=4)
  {
    j=j+40;
    circle(130,j,20);
    i++;
  }
//Titanium column
  circle(170,170+40,20);
i=0;j=170+40;
  while(i!=3)
  {
    j=j+40;
    circle(170,j,20);
    i++;
  }
  //Vanadium Column
  circle(210,170+40,20);
i=0;j=170+40;
  while(i!=3)
  {
    j=j+40;
    circle(210,j,20);
    i++;
  }
  //Chromium column
  circle(250,170+40,20);
i=0;j=170+40;
  while(i!=3)
  {
    j=j+40;
    circle(250,j,20);
    i++;
  }

  //Manganese column
  circle(290,170+40,20);
i=0;j=170+40;
  while(i!=3)
  {
    j=j+40;
    circle(290,j,20);
    i++;
  }
  //Iron Column
  circle(330,170+40,20);
i=0;j=170+40;
  while(i!=3)
  {
    j=j+40;
    circle(330,j,20);
    i++;
  }
  //Cobalt Column
  circle(370,170+40,20);
i=0;j=170+40;
while(i!=3)
  {
    j=j+40;
    circle(370,j,20);
    i++;
  }
  //Nickel column
  circle(410,170+40,20);
i=0;j=170+40;
  while(i!=3)
  {
    j=j+40;
    circle(410,j,20);
    i++;
  }
  //Copper column
  circle(450,170+40,20);
i=0;j=170+40;
  while(i!=3)
  {
    j=j+40;
    circle(450,j,20);
    i++;
  }
  //Zinc column
  circle(490,170+40,20);
i=0;j=170+40;
  while(i!=3)
  {
    j=j+40;
    circle(490,j,20);
    i++;
  }
  setcolor(BLUE);
//Boron Column
circle(530,90+40,20);
i=0;j=90+40;
  while(i!=5)
  {
    j=j+40;
    circle(530,j,20);
    i++;
  }
//Carbon column
  circle(570,90+40,20);
i=0;j=90+40;
  while(i!=5)
  {
    j=j+40;
    circle(570,j,20);
    i++;
  }
 //Nitrogen Column
  circle(610,90+40,20);
i=0;j=90+40;
  while(i!=5)
  {
    j=j+40;
    circle(610,j,20);
    i++;
  }
  //Oxygen Column
  circle(650,90+40,20);
i=0;j=90+40;
  while(i!=5)
  {
    j=j+40;
    circle(650,j,20);
    i++;
  }
  //Fluorine Column
  circle(690,90+40,20);
i=0;j=90+40;
  while(i!=5)
  {
    j=j+40;
    circle(690,j,20);
    i++;
  }
  //Helium Column
  circle(730,50+40,20);
i=0;j=50+40;
  while(i!=6)
  {
    j=j+40;
    circle(730,j,20);
    i++;
  }
  setcolor(GREEN);
  //Lanthanides
  circle(130,370+40,20);
  i=0;j=130;
  while(i!=14)
  {
      j=j+40;
    circle(j,370+40,20);
    i++;
  }
  //Actinides
  circle(130,410+40,20);
  i=0;j=130;
  while(i!=14)
  {
    j=j+40;
    circle(j,410+40,20);
    i++;
  }
  setcolor(CYAN);
  settextstyle(COMPLEX_FONT,HORIZ_DIR,3);
  outtextxy(10,10,"Long Form Of Periodic Table");

  settextstyle(COMPLEX_FONT,HORIZ_DIR,1);
  //Hydrogen Column
  outtextxy(45,80,"H");
  outtextxy(40,120,"Li");
  outtextxy(40,160,"Na");
  outtextxy(45,200,"K");
  outtextxy(40,240,"Rb");
  outtextxy(40,280,"Cs");
  outtextxy(40,320,"Fr");

  //Beryllium Column
  outtextxy(80,120,"Be");
  outtextxy(80,160,"Mg");
  outtextxy(80,200,"Ca");
  outtextxy(80,240,"Sr");
  outtextxy(80,280,"Ba");
  outtextxy(80,320,"Ra");

  //Scandium Column
outtextxy(120,200,"Sc");
outtextxy(120,240,"Y");
outtextxy(120,280,"La");
outtextxy(120,320,"Ac");

//Titanium Column
outtextxy(160,200,"Ti");
outtextxy(160,240,"Zr");
outtextxy(160,280,"Hf");
outtextxy(160,320,"Rf");

//Vanadium Column
outtextxy(200,200,"V");
outtextxy(200,240,"Nb");
outtextxy(200,280,"Ta");
outtextxy(200,320,"Db");

//Chromium Column
outtextxy(240,200,"Cr");
outtextxy(240,240,"Mo");
outtextxy(240,280,"W");
outtextxy(240,320,"Sg");

//Manganese Column
outtextxy(280,200,"Mn");
outtextxy(280,240,"Tc");
outtextxy(280,280,"Re");
outtextxy(280,320,"Bh");

//Iron Column
outtextxy(320,200,"Fe");
outtextxy(320,240,"Ru");
outtextxy(320,280,"Os");
outtextxy(320,320,"Hs");

//Cobalt Column
outtextxy(360,200,"Co");
outtextxy(360,240,"Rh");
outtextxy(360,280,"Ir");
outtextxy(360,320,"Mt");

//Nickel Column
outtextxy(400,200,"Ni");
outtextxy(400,240,"Pd");
outtextxy(400,280,"Pt");
outtextxy(400,320,"Ds");

//Copper column
outtextxy(440,200,"Cu");
outtextxy(440,240,"Ag");
outtextxy(440,280,"Au");
outtextxy(440,320,"Rg");

//Zinc column
outtextxy(480,200,"Zn");
outtextxy(480,240,"Cd");
outtextxy(480,280,"Hg");
outtextxy(480,320,"Cn");

//Boron Column
outtextxy(520,120,"B");
outtextxy(520,160,"Al");
outtextxy(520,200,"Ga");
outtextxy(520,240,"In");
outtextxy(520,280,"Tl");
outtextxy(520,320,"Nh");

//Carbon Column
outtextxy(560,120,"C");
outtextxy(560,160,"Si");
outtextxy(560,200,"Ge");
outtextxy(560,240,"Sn");
outtextxy(560,280,"Pb");
outtextxy(560,320,"Fl");

//Nitrogen Column
outtextxy(600,120,"N");
outtextxy(600,160,"P");
outtextxy(600,200,"As");
outtextxy(600,240,"Sb");
outtextxy(600,280,"Bi");
outtextxy(600,320,"Mc");

//Oxygen Column
outtextxy(640,120,"O");
outtextxy(640,160,"S");
outtextxy(640,200,"Se");
outtextxy(640,240,"Te");
outtextxy(640,280,"Po");
outtextxy(640,320,"Lv");

//Fluorine Column
outtextxy(680,120,"F");
outtextxy(680,160,"Cl");
outtextxy(680,200,"Br");
outtextxy(680,240,"I");
outtextxy(680,280,"At");
outtextxy(680,320,"Ts");

//Helium column
outtextxy(720,80,"He");
outtextxy(720,120,"Ne");
outtextxy(720,160,"Ar");
outtextxy(720,200,"Kr");
outtextxy(720,240,"Xe");
outtextxy(720,280,"Rn");
outtextxy(720,320,"Og");

//Lanthanides
outtextxy(120,400,"La");
outtextxy(160,400,"Ce");
outtextxy(200,400,"Pr");
outtextxy(240,400,"Nd");
outtextxy(280,400,"Pm");
outtextxy(320,400,"Sm");
outtextxy(360,400,"Eu");
outtextxy(400,400,"Gd");
outtextxy(440,400,"Tb");
outtextxy(480,400,"Dy");
outtextxy(520,400,"Ho");
outtextxy(560,400,"Er");
outtextxy(600,400,"Tm");
outtextxy(640,400,"Yb");
outtextxy(680,400,"Lu");

//Actinides
outtextxy(120,440,"Ac");
outtextxy(160,440,"Th");
outtextxy(200,440,"Pa");
outtextxy(240,440,"U");
outtextxy(280,440,"Np");
outtextxy(320,440,"Pu");
outtextxy(360,440,"Am");
outtextxy(400,440,"Cm");
outtextxy(440,440,"Bk");
outtextxy(480,440,"Cf");
outtextxy(520,440,"Es");
outtextxy(560,440,"Fm");
outtextxy(600,440,"Md");
outtextxy(640,440,"No");
outtextxy(680,440,"Lr");
a=0;b=0;
setcolor(MAGENTA);
for(i=0;i<7;i++)
{
     a++;
    arr[i]=a;
    sprintf(arr,"%d",a);
    outtextxy(10,80+b,arr);
    b=b+40;
}

a=0;b=0;
for(i=0;i<18;i++)
{
     a++;
    arr[i]=a;
    sprintf(arr,"%d",a);
    outtextxy(40+b,50,arr);
    b=b+40;
}
outtextxy(760,50,"<-- Groups");
settextstyle(COMPLEX_FONT,VERT_DIR,1);
outtextxy(10,480,"Periods -->");
settextstyle(COMPLEX_FONT,HORIZ_DIR,1);
setfillstyle(SOLID_FILL,RED);
  bar(800,120,820,140);
  setcolor(RED);
  outtextxy(850,120,"S- Block");

  setfillstyle(SOLID_FILL,BLUE);
  bar(800,160,820,180);
  setcolor(BLUE);
  outtextxy(850,160,"P- Block");

  setfillstyle(SOLID_FILL,YELLOW);
  bar(800,200,820,220);
  setcolor(YELLOW);
  outtextxy(850,200,"D- Block");

  setfillstyle(SOLID_FILL,GREEN);
  bar(800,240,820,260);
  setcolor(GREEN);
  outtextxy(850,240,"F- Block");

  setcolor(DARKGRAY);
  rectangle(400,500,1000,750);
settextstyle(BOLD_FONT,HORIZ_DIR,3);
setcolor(LIGHTCYAN);
  POINT cursorpos;
  i=0;j=0;
file.open("period.txt",ios::in);
  while(1)
  {
     GetCursorPos(&cursorpos);
     //HYDROGEN CURSOR POSITIONS
if( cursorpos.x>30 && cursorpos.x<70)
{
    if(cursorpos.y>90 && cursorpos.y<110)
    {
            outtextxy(410,510,"Hydrogen     ");
                file.seekg(0);
                file>>buf;
                j=20;
                outtextxy(410,590,buf);
                for(i=0;i<5;i++)
                {
                    file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }

    }
     else if(cursorpos.y>110 && cursorpos.y<150)
    {

            outtextxy(410,510,"Lithium   ");

           file.seekg(129);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>150 && cursorpos.y<190)
    {
        //getch();
            outtextxy(410,510,"Sodium    ");
            file.seekg(613);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>190 && cursorpos.y<230)
    {
        //getch();
            outtextxy(410,510,"Potassium ");
            file.seekg(1056);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>230 && cursorpos.y<270)
    {
        //getch();
            outtextxy(410,510,"Rubidium ");
            file.seekg(2009);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }

    }
    else if(cursorpos.y>270 && cursorpos.y<310)
    {
        //getch();
            outtextxy(410,510,"Caesium ");
            file.seekg(2975);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>310 && cursorpos.y<350)
    {
        //getch();
            outtextxy(410,510,"Francium ");
            file.seekg(4647);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
}
//BERYLLIUM CURSOR POSITIONS
else if( cursorpos.x>70 && cursorpos.x<110)
{
    if(cursorpos.y>110 && cursorpos.y<150)
    {
        //getch();
            outtextxy(410,510,"Beryllium");
            file.seekg(206);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
     else if(cursorpos.y>150 && cursorpos.y<190)
    {
        //getch();
            outtextxy(410,510,"Magnesium ");
            file.seekg(676);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>190 && cursorpos.y<230)
    {
        //getch();
            outtextxy(410,510,"Calcium      ");
            file.seekg(1109);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>230 && cursorpos.y<270)
    {
        //getch();
            outtextxy(410,510,"Strontium ");
            file.seekg(2062);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>270 && cursorpos.y<310)
    {
        //getch();
            outtextxy(410,510,"Barium   ");
            file.seekg(3026);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>310 && cursorpos.y<350)
    {
        //getch();
            outtextxy(410,510,"Radium   ");
            file.seekg(4697);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }

}

//SCANDIUM CURSOR POSITONS
else if( cursorpos.x>110 && cursorpos.x<150)
{
    if(cursorpos.y>190 && cursorpos.y<230)
    {
        //getch();
            outtextxy(410,510,"Scandium   ");
            file.seekg(1162);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
     else if(cursorpos.y>230 && cursorpos.y<270)
    {
        //getch();
            outtextxy(410,510,"Yttrium   ");
            file.seekg(2114);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>270 && cursorpos.y<310)
    {
        //getch();
            outtextxy(410,510,"Lanthanum     ");
            file.seekg(3075);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>310 && cursorpos.y<350)
    {
        //getch();
            outtextxy(410,510,"Actinium      ");
            file.seekg(4748);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }

else if(cursorpos.y>390 && cursorpos.y<430)
    {
        //getch();
            outtextxy(410,510,"Lanthanum      ");
            file.seekg(3075);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>430 && cursorpos.y<470)
    {
        //getch();
            outtextxy(410,510,"Actinium      ");
            file.seekg(4748);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }

}
//TITANIUM CURSOR POSITONS
else if( cursorpos.x>150 && cursorpos.x<190)
{
    if(cursorpos.y>190 && cursorpos.y<230)
    {
        //getch();
            outtextxy(410,510,"Titanium    ");
            file.seekg(1214);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
     else if(cursorpos.y>230 && cursorpos.y<270)
    {
        //getch();
            outtextxy(410,510,"Zirconium    ");
            file.seekg(2166);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>270 && cursorpos.y<310)
    {
        //getch();
            outtextxy(410,510,"Hafnium      ");
            file.seekg(3855);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>310 && cursorpos.y<350)
    {
        //getch();
            outtextxy(410,510,"Rutherfordium    ");
            file.seekg(5528);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>390 && cursorpos.y<430)
    {
        //getch();
            outtextxy(410,510,"Cerium       ");
            file.seekg(3127);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }

    }
    else if(cursorpos.y>430 && cursorpos.y<470)
    {
        //getch();
            outtextxy(410,510,"Thorium    ");
             file.seekg(4800);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
}
//VANADIUM CURSOR POSITONS
else if( cursorpos.x>190 && cursorpos.x<230)
{
    if(cursorpos.y>190 && cursorpos.y<230)
    {
        //getch();
            outtextxy(410,510,"Vanadium    ");
             file.seekg(1266);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
     else if(cursorpos.y>230 && cursorpos.y<270)
    {
        //getch();
            outtextxy(410,510,"Niobium    ");
            file.seekg(2218);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>270 && cursorpos.y<310)
    {
        //getch();
            outtextxy(410,510,"Tantalum      ");
            file.seekg(3906);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>310 && cursorpos.y<350)
    {
        //getch();
            outtextxy(410,510,"Dubnium        ");
            file.seekg(5580);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>390 && cursorpos.y<430)
    {
        //getch();
            outtextxy(410,510,"Pradseodymium        ");
            file.seekg(3179);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>430 && cursorpos.y<470)
    {
        //getch();
            outtextxy(410,510,"Proactinium        ");
            file.seekg(4852);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
}
//CHROMIUM CURSOR POSITONS
else if( cursorpos.x>230 && cursorpos.x<270)
{
    if(cursorpos.y>190 && cursorpos.y<230)
    {
        //getch();
            outtextxy(410,510,"Chromium    ");
            file.seekg(1318);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
     else if(cursorpos.y>230 && cursorpos.y<270)
    {
        //getch();
            outtextxy(410,510,"Molybdenum    ");
            file.seekg(2270);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>270 && cursorpos.y<310)
    {
        //getch();
            outtextxy(410,510,"Tungsten      ");
            file.seekg(3958);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>310 && cursorpos.y<350)
    {
        //getch();
            outtextxy(410,510,"Seaborgium    ");
            file.seekg(5632);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>390 && cursorpos.y<430)
    {
        //getch();
            outtextxy(410,510,"Neodymium    ");
            file.seekg(3231);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>430 && cursorpos.y<470)
    {
        //getch();
            outtextxy(410,510,"Uranium    ");
            file.seekg(4904);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
}
//MANGANESE CURSOR POSITONS
else if( cursorpos.x>270 && cursorpos.x<310)
{
    if(cursorpos.y>190 && cursorpos.y<230)
    {
        //getch();
            outtextxy(410,510,"Manganese    ");
            file.seekg(1370);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
     else if(cursorpos.y>230 && cursorpos.y<270)
    {
        //getch();
            outtextxy(410,510,"Technetium    ");
            file.seekg(2322);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>270 && cursorpos.y<310)
    {
        //getch();
            outtextxy(410,510,"Rhenium      ");
            file.seekg(4010);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>310 && cursorpos.y<350)
    {
        //getch();
            outtextxy(410,510,"Bohrium    ");
            file.seekg(5684);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>390 && cursorpos.y<430)
    {
        //getch();
            outtextxy(410,510,"Promethium    ");
            file.seekg(3283);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }

    }
    else if(cursorpos.y>430 && cursorpos.y<470)
    {
        //getch();
            outtextxy(410,510,"Neptunium    ");
            file.seekg(4956);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
}
//IRON CURSOR POSITONS
else if( cursorpos.x>310 && cursorpos.x<350)
{
    if(cursorpos.y>190 && cursorpos.y<230)
    {
        //getch();
            outtextxy(410,510,"Iron      ");
            file.seekg(1422);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
     else if(cursorpos.y>230 && cursorpos.y<270)
    {
        //getch();
            outtextxy(410,510,"Ruthenium    ");
            file.seekg(2374);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>270 && cursorpos.y<310)
    {
        //getch();
            outtextxy(410,510,"Osmium      ");
            file.seekg(4062);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>310 && cursorpos.y<350)
    {
        //getch();
            outtextxy(410,510,"Hassium    ");
            file.seekg(5736);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>390 && cursorpos.y<430)
    {
        //getch();
            outtextxy(410,510,"Samarium    ");
            file.seekg(3335);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>430 && cursorpos.y<470)
    {
        //getch();
            outtextxy(410,510,"Plutonium    ");
            file.seekg(5007);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
}
//COBALT CURSOR POSITONS
else if( cursorpos.x>350 && cursorpos.x<390)
{
    if(cursorpos.y>190 && cursorpos.y<230)
    {
        //getch();
            outtextxy(410,510,"Cobalt    ");
            file.seekg(1474);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
     else if(cursorpos.y>230 && cursorpos.y<270)
    {
        //getch();
            outtextxy(410,510,"Rhodium    ");
            file.seekg(2426);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>270 && cursorpos.y<310)
    {
        //getch();
            outtextxy(410,510,"Iridium      ");
            file.seekg(4115);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>310 && cursorpos.y<350)
    {
        //getch();
            outtextxy(410,510,"Meitnerium    ");
            file.seekg(5788);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>390 && cursorpos.y<430)
    {
        //getch();
            outtextxy(410,510,"Europium    ");
            file.seekg(3387);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>430 && cursorpos.y<490)
    {
        //getch();
            outtextxy(410,510,"Americium    ");
            file.seekg(5060);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
}
//NICKEL CURSOR POSITONS
else if( cursorpos.x>390 && cursorpos.x<430)
{
    if(cursorpos.y>190 && cursorpos.y<230)
    {
        //getch();
            outtextxy(410,510,"Nickel    ");
            file.seekg(1526);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
     else if(cursorpos.y>230 && cursorpos.y<270)
    {
        //getch();
            outtextxy(410,510,"Palladium    ");
            file.seekg(2476);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>270 && cursorpos.y<310)
    {
        //getch();
            outtextxy(410,510,"Platinum      ");
            file.seekg(4167);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>310 && cursorpos.y<350)
    {
        //getch();
            outtextxy(410,510,"Darmstadtium    ");
            file.seekg(5840);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>390 && cursorpos.y<430)
    {
        //getch();
            outtextxy(410,510,"Gadolinium    ");
             file.seekg(3439);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>430 && cursorpos.y<470)
    {
        //getch();
            outtextxy(410,510,"Curium    ");
            file.seekg(5112);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
}
//COPPER CURSOR POSITONS
else if( cursorpos.x>430 && cursorpos.x<470)
{
    if(cursorpos.y>190 && cursorpos.y<230)
    {
        //getch();
            outtextxy(410,510,"Copper      ");
            file.seekg(1580);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
     else if(cursorpos.y>230 && cursorpos.y<270)
    {
        //getch();
            outtextxy(410,510,"Silver     ");
            file.seekg(2532);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>270 && cursorpos.y<310)
    {
        //getch();
            outtextxy(410,510,"Gold       ");
            file.seekg(4222);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>310 && cursorpos.y<350)
    {
        //getch();
            outtextxy(410,510,"Roentgenium    ");
            file.seekg(5893);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
     else if(cursorpos.y>390 && cursorpos.y<430)
    {
        //getch();
            outtextxy(410,510,"Terbium    ");
            file.seekg(3491);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
     else if(cursorpos.y>430 && cursorpos.y<470)
    {
        //getch();
            outtextxy(410,510,"Berkelium    ");
            file.seekg(5164);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
}
//ZINC CURSOR POSITONS
else if( cursorpos.x>470 && cursorpos.x<510)
{
    if(cursorpos.y>190 && cursorpos.y<230)
    {
        //getch();
            outtextxy(410,510,"Zinc     ");
            file.seekg(1635);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
     else if(cursorpos.y>230 && cursorpos.y<270)
    {
        //getch();
            outtextxy(410,510,"Cadmium    ");
            file.seekg(2587);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>270 && cursorpos.y<310)
    {
        //getch();
            outtextxy(410,510,"Mercury      ");
            file.seekg(4275);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>310 && cursorpos.y<350)
    {
        //getch();
            outtextxy(410,510,"Copernicium    ");
            file.seekg(5946);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>390 && cursorpos.y<430)
    {
        //getch();
            outtextxy(410,510,"Dysprosium    ");
            file.seekg(3543);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>430 && cursorpos.y<470)
    {
        //getch();
            outtextxy(410,510,"Californium    ");
            file.seekg(5216);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
}
//BORON CURSOR POSITONS
else if( cursorpos.x>510 && cursorpos.x<550)
{
    if(cursorpos.y>110 && cursorpos.y<150)
    {
        //getch();
            outtextxy(410,510,"Boron     ");
            file.seekg(278);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
     else if(cursorpos.y>150 && cursorpos.y<190)
    {
        //getch();
            outtextxy(410,510,"Aluminium    ");
             file.seekg(727);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>190 && cursorpos.y<230)
    {
        //getch();
            outtextxy(410,510,"Gallium      ");
            file.seekg(1690);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>230 && cursorpos.y<270)
    {
        //getch();
            outtextxy(410,510,"Indium    ");
            file.seekg(2641);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>270 && cursorpos.y<310)
    {
        //getch();
            outtextxy(410,510,"Thallium      ");
            file.seekg(4332);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>310 && cursorpos.y<350)
    {
        //getch();
            outtextxy(410,510,"Nihonium       ");
            file.seekg(5999);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>390 && cursorpos.y<430)
    {
        //getch();
            outtextxy(410,510,"Holmium        ");
            file.seekg(3595);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>430 && cursorpos.y<470)
    {
        //getch();
            outtextxy(410,510,"Einsteinium    ");
            file.seekg(5268);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
}
//CARBON CURSOR POSITONS
else if( cursorpos.x>550 && cursorpos.x<590)
{
    if(cursorpos.y>110 && cursorpos.y<150)
    {
        //getch();
            outtextxy(410,510,"Carbon     ");
            file.seekg(337);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
     else if(cursorpos.y>150 && cursorpos.y<190)
    {
        //getch();
            outtextxy(410,510,"Silicon    ");
            file.seekg(782);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }

    }
    else if(cursorpos.y>190 && cursorpos.y<230)
    {
        //getch();
            outtextxy(410,510,"Germanium      ");
            file.seekg(1745);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>230 && cursorpos.y<270)
    {
        //getch();
            outtextxy(410,510,"Tin      ");
            file.seekg(2696);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>270 && cursorpos.y<310)
    {
        //getch();
            outtextxy(410,510,"Lead      ");
            file.seekg(4384);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>310 && cursorpos.y<350)
    {
        //getch();
            outtextxy(410,510,"Flerovium    ");
            file.seekg(6051);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>390 && cursorpos.y<430)
    {
        //getch();
            outtextxy(410,510,"Erbium      ");
            file.seekg(3647);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>430 && cursorpos.y<470)
    {
        //getch();
            outtextxy(410,510,"Fermium    ");
            file.seekg(5320);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
}
//NITROGEN CURSOR POSITONS
else if( cursorpos.x>590 && cursorpos.x<630)
{
    if(cursorpos.y>110 && cursorpos.y<150)
    {
        //getch();
            outtextxy(410,510,"Nitrogen     ");
            file.seekg(390);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }

    }
     else if(cursorpos.y>150 && cursorpos.y<190)
    {
        //getch();
            outtextxy(410,510,"Phosphorus    ");
            file.seekg(835);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>190 && cursorpos.y<230)
    {
        //getch();
            outtextxy(410,510,"Arsenic      ");
            file.seekg(1800);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>230 && cursorpos.y<270)
    {
        //getch();
            outtextxy(410,510,"Antimony    ");
            file.seekg(2751);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>270 && cursorpos.y<310)
    {
        //getch();
            outtextxy(410,510,"Bismuth    ");
            file.seekg(4439);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>310 && cursorpos.y<350)
    {
        //getch();
            outtextxy(410,510,"Moscovium    ");
            file.seekg(6103);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
     else if(cursorpos.y>390 && cursorpos.y<430)
    {
        //getch();
            outtextxy(410,510,"Thulium    ");
            file.seekg(3699);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
     else if(cursorpos.y>430 && cursorpos.y<470)
    {
        //getch();
            outtextxy(410,510,"Mendelevium    ");
            file.seekg(5372);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
}
//OXYGEN CURSOR POSITONS
else if( cursorpos.x>630 && cursorpos.x<670)
{
    if(cursorpos.y>110 && cursorpos.y<150)
    {
        //getch();
            outtextxy(410,510,"Oxygen     ");
            file.seekg(446);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }

    }
     else if(cursorpos.y>150 && cursorpos.y<190)
    {
        //getch();
            outtextxy(410,510,"Sulphur    ");
            file.seekg(888);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }

    }
    else if(cursorpos.y>190 && cursorpos.y<230)
    {
        //getch();
            outtextxy(410,510,"Selenium      ");
            file.seekg(1853);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>230 && cursorpos.y<270)
    {
        //getch();
            outtextxy(410,510,"Tellurium    ");
            file.seekg(2806);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>270 && cursorpos.y<310)
    {
        //getch();
            outtextxy(410,510,"Polonium    ");
            file.seekg(4491);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>310 && cursorpos.y<350)
    {
        //getch();
            outtextxy(410,510,"Livermorium    ");
            file.seekg(6155);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>390 && cursorpos.y<430)
    {
        //getch();
            outtextxy(410,510,"Ytterbium    ");
            file.seekg(3751);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>430 && cursorpos.y<470)
    {
        //getch();
            outtextxy(410,510,"Nobelium    ");
            file.seekg(5424);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
}
//FLUORINE CURSOR POSITONS
else if( cursorpos.x>670 && cursorpos.x<710)
{
    if(cursorpos.y>110 && cursorpos.y<150)
    {
        //getch();
            outtextxy(410,510,"Fluorine     ");
            file.seekg(502);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
     else if(cursorpos.y>150 && cursorpos.y<190)
    {
        //getch();
            outtextxy(410,510,"Chlorine    ");
            file.seekg(944);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>190 && cursorpos.y<230)
    {
        //getch();
            outtextxy(410,510,"Bromine      ");
            file.seekg(1904);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>230 && cursorpos.y<270)
    {
        //getch();
            outtextxy(410,510,"Iodine    ");
            file.seekg(2861);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>270 && cursorpos.y<310)
    {
        //getch();
            outtextxy(410,510,"Astatine    ");
                file.seekg(4543);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>310 && cursorpos.y<350)
    {
        //getch();
            outtextxy(410,510,"Tennessine    ");
            file.seekg(6207);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>390 && cursorpos.y<430)
    {
        //getch();
            outtextxy(410,510,"Lutetium    ");
            file.seekg(3803);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>430 && cursorpos.y<470)
    {
        //getch();
            outtextxy(410,510,"Lawrencium    ");
            file.seekg(5476);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
}
//HELIUM CURSOR POSITONS
else if( cursorpos.x>710 && cursorpos.x<750)
{
    if(cursorpos.y>90 && cursorpos.y<110)
    {

            outtextxy(410,510,"Helium     ");
           file.seekg(61);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }

    }
     else if(cursorpos.y>110 && cursorpos.y<150)
    {
        //getch();
            outtextxy(410,510,"Neon    ");
            file.seekg(557);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>150 && cursorpos.y<190)
    {
        //getch();
            outtextxy(410,510,"Argon      ");
            file.seekg(1000);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>190 && cursorpos.y<230)
    {
        //getch();
            outtextxy(410,510,"Krypton    ");
            file.seekg(1955);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>230 && cursorpos.y<270)
    {
        //getch();
            outtextxy(410,510,"Xenon    ");
            file.seekg(2917);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>270 && cursorpos.y<310)
    {
        //getch();
            outtextxy(410,510,"Radon    ");
            file.seekg(4594);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }
    else if(cursorpos.y>310 && cursorpos.y<350)
    {
        //getch();
            outtextxy(410,510,"Oganesson    ");
            file.seekg(6258);
                file>>buf;
                outtextxy(410,590,buf);
                i=0;j=20;
                for(i=0;i<5;i++)
                {
                file>>buf;
                outtextxy(410,590+j,buf);
                j=j+20;
                }
    }

}

  }

    getch();
    closegraph();
    return 0;
}
