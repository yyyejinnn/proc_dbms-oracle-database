
/* Result Sets Interface */
#ifndef SQL_CRSR
#  define SQL_CRSR
  struct sql_cursor
  {
    unsigned int curocn;
    void *ptr1;
    void *ptr2;
    unsigned int magic;
  };
  typedef struct sql_cursor sql_cursor;
  typedef struct sql_cursor SQL_CURSOR;
#endif /* SQL_CRSR */

/* Thread Safety */
typedef void * sql_context;
typedef void * SQL_CONTEXT;

/* Object support */
struct sqltvn
{
  unsigned char *tvnvsn; 
  unsigned short tvnvsnl; 
  unsigned char *tvnnm;
  unsigned short tvnnml; 
  unsigned char *tvnsnm;
  unsigned short tvnsnml;
};
typedef struct sqltvn sqltvn;

struct sqladts
{
  unsigned int adtvsn; 
  unsigned short adtmode; 
  unsigned short adtnum;  
  sqltvn adttvn[1];       
};
typedef struct sqladts sqladts;

static struct sqladts sqladt = {
  1,1,0,
};

/* Binding to PL/SQL Records */
struct sqltdss
{
  unsigned int tdsvsn; 
  unsigned short tdsnum; 
  unsigned char *tdsval[1]; 
};
typedef struct sqltdss sqltdss;
static struct sqltdss sqltds =
{
  1,
  0,
};

/* File name & Package Name */
struct sqlcxp
{
  unsigned short fillen;
           char  filnam[13];
};
static const struct sqlcxp sqlfpn =
{
    12,
    "team_proc.pc"
};


static unsigned int sqlctx = 317795;


static struct sqlexd {
   unsigned int   sqlvsn;
   unsigned int   arrsiz;
   unsigned int   iters;
   unsigned int   offset;
   unsigned short selerr;
   unsigned short sqlety;
   unsigned int   occurs;
      const short *cud;
   unsigned char  *sqlest;
      const char  *stmt;
   sqladts *sqladtp;
   sqltdss *sqltdsp;
            void  **sqphsv;
   unsigned int   *sqphsl;
            int   *sqphss;
            void  **sqpind;
            int   *sqpins;
   unsigned int   *sqparm;
   unsigned int   **sqparc;
   unsigned short  *sqpadto;
   unsigned short  *sqptdso;
   unsigned int   sqlcmax;
   unsigned int   sqlcmin;
   unsigned int   sqlcincr;
   unsigned int   sqlctimeout;
   unsigned int   sqlcnowait;
              int   sqfoff;
   unsigned int   sqcmod;
   unsigned int   sqfmod;
   unsigned int   sqlpfmem;
            void  *sqhstv[5];
   unsigned int   sqhstl[5];
            int   sqhsts[5];
            void  *sqindv[5];
            int   sqinds[5];
   unsigned int   sqharm[5];
   unsigned int   *sqharc[5];
   unsigned short  sqadto[5];
   unsigned short  sqtdso[5];
} sqlstm = {13,5};

/* SQLLIB Prototypes */
extern void sqlcxt (void **, unsigned int *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlcx2t(void **, unsigned int *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlbuft(void **, char *);
extern void sqlgs2t(void **, char *);
extern void sqlorat(void **, unsigned int *, void *);

/* Forms Interface */
static const int IAPSUCC = 0;
static const int IAPFAIL = 1403;
static const int IAPFTL  = 535;
extern void sqliem(unsigned char *, signed int *);

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{13,4130,1,0,0,
5,0,0,0,0,0,27,142,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,10,0,0,1,10,0,0,
36,0,0,2,0,0,31,159,0,0,0,0,0,1,0,
51,0,0,3,0,0,17,374,0,0,1,1,0,1,0,1,97,0,0,
70,0,0,3,0,0,45,379,0,0,0,0,0,1,0,
85,0,0,3,0,0,13,388,0,0,4,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
116,0,0,3,0,0,15,419,0,0,0,0,0,1,0,
131,0,0,4,0,0,29,421,0,0,0,0,0,1,0,
146,0,0,3,0,0,17,455,0,0,1,1,0,1,0,1,97,0,0,
165,0,0,3,0,0,45,461,0,0,0,0,0,1,0,
180,0,0,3,0,0,13,470,0,0,5,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
215,0,0,3,0,0,15,506,0,0,0,0,0,1,0,
230,0,0,5,0,0,29,508,0,0,0,0,0,1,0,
245,0,0,3,0,0,17,540,0,0,1,1,0,1,0,1,97,0,0,
264,0,0,3,0,0,45,546,0,0,0,0,0,1,0,
279,0,0,3,0,0,13,555,0,0,3,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,
306,0,0,3,0,0,15,581,0,0,0,0,0,1,0,
321,0,0,6,0,0,29,583,0,0,0,0,0,1,0,
336,0,0,3,0,0,17,615,0,0,1,1,0,1,0,1,97,0,0,
355,0,0,3,0,0,45,621,0,0,0,0,0,1,0,
370,0,0,3,0,0,13,631,0,0,3,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,
397,0,0,3,0,0,15,659,0,0,0,0,0,1,0,
412,0,0,7,0,0,29,661,0,0,0,0,0,1,0,
427,0,0,3,0,0,17,692,0,0,1,1,0,1,0,1,97,0,0,
446,0,0,3,0,0,45,698,0,0,0,0,0,1,0,
461,0,0,3,0,0,13,707,0,0,3,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,
488,0,0,3,0,0,15,735,0,0,0,0,0,1,0,
503,0,0,8,0,0,29,737,0,0,0,0,0,1,0,
518,0,0,3,0,0,17,768,0,0,1,1,0,1,0,1,97,0,0,
537,0,0,3,0,0,45,770,0,0,0,0,0,1,0,
552,0,0,9,0,0,24,818,0,0,1,1,0,1,0,1,97,0,0,
571,0,0,10,0,0,29,823,0,0,0,0,0,1,0,
586,0,0,3,0,0,17,850,0,0,1,1,0,1,0,1,97,0,0,
605,0,0,3,0,0,45,852,0,0,0,0,0,1,0,
620,0,0,11,0,0,24,900,0,0,1,1,0,1,0,1,97,0,0,
639,0,0,12,0,0,29,905,0,0,0,0,0,1,0,
654,0,0,13,0,0,24,948,0,0,1,1,0,1,0,1,97,0,0,
673,0,0,14,0,0,29,951,0,0,0,0,0,1,0,
688,0,0,3,0,0,17,978,0,0,1,1,0,1,0,1,97,0,0,
707,0,0,3,0,0,45,980,0,0,0,0,0,1,0,
722,0,0,3,0,0,13,987,0,0,4,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
753,0,0,3,0,0,15,996,0,0,0,0,0,1,0,
768,0,0,15,0,0,24,1034,0,0,1,1,0,1,0,1,97,0,0,
787,0,0,16,0,0,29,1037,0,0,0,0,0,1,0,
802,0,0,3,0,0,17,1065,0,0,1,1,0,1,0,1,97,0,0,
821,0,0,3,0,0,45,1067,0,0,0,0,0,1,0,
836,0,0,3,0,0,13,1074,0,0,5,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
871,0,0,3,0,0,15,1085,0,0,0,0,0,1,0,
886,0,0,17,0,0,24,1123,0,0,1,1,0,1,0,1,97,0,0,
905,0,0,18,0,0,29,1126,0,0,0,0,0,1,0,
920,0,0,3,0,0,17,1152,0,0,1,1,0,1,0,1,97,0,0,
939,0,0,3,0,0,45,1154,0,0,0,0,0,1,0,
954,0,0,3,0,0,13,1161,0,0,3,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,
981,0,0,3,0,0,15,1170,0,0,0,0,0,1,0,
996,0,0,19,0,0,24,1224,0,0,1,1,0,1,0,1,97,0,0,
1015,0,0,20,0,0,29,1227,0,0,0,0,0,1,0,
1030,0,0,3,0,0,17,1254,0,0,1,1,0,1,0,1,97,0,0,
1049,0,0,3,0,0,45,1256,0,0,0,0,0,1,0,
1064,0,0,3,0,0,13,1261,0,0,3,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,
1091,0,0,3,0,0,15,1275,0,0,0,0,0,1,0,
};


// win32 Visual C 컴파일시 추가
// 프로그램 가장 첫 줄에 추가할 것
#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <time.h>

/* for oracle */
#include <sqlda.h>
#include <sqlca.h>
#include <sqlcpr.h>

#define CLS system("cls")
#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define SUBMIT 4
#define PAGE_NUM 5
BOOL is_err = FALSE;

void DB_connect();
void sql_error(char *msg);

void init(); // DOS 창 크기
void titleDraw(); // 타이틀
void textcolor(int foreground, int background); // 글씨 색
int menuDraw(int num, int outNum); // 메뉴
void gotoxy(int, int); // 텍스트 위치
int keyControl(); // 키보드 이동

//info
void advertiser_info();
void customer_info();
void ad_info();
void membership_info();
void benefit_info();

//add
void add_membership();
void add_benefit();

//delete
void delete_advertiser();
void deldel_advertiser();
void delete_customer();
void deldel_customer();
void delete_ad();
void deldel_ad();


//modify
void mod_benefit();
char Bnumber[10], Bpoint[50], Coupon[50] ;
void modmod_benefit();


void handle_insert_error();   // 에러처리
void handle_delect_error();   // 에러처리

/* EXEC SQL BEGIN DECLARE SECTION; */ 

   //로그인
   /* VARCHAR uid[80]; */ 
struct { unsigned short len; unsigned char arr[80]; } uid;

   /* VARCHAR pwd[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } pwd;

/*
   // 변경 값
   int value;
   
   int v_room_number_count;

*/

/* EXEC SQL END DECLARE SECTION; */ 


#define getch()  _getch()
#define STD_HANDLE GetStdHandle(STD_OUTPUT_HANDLE)
void main() {

   DB_connect();
   init();

   while(1){
      titleDraw();
      int menuNum = menuDraw(4,1); //맨 처음 뜨는 4개랑 1은 값 전달용 
      if(menuNum == 0){         // 1. 조회 
         menuNum = menuDraw(5,2); //1 눌렀을떄 6개 뜨게하는거  
         if(menuNum == 0){      // 2. 광고주 정보 
            advertiser_info();
         }else if(menuNum == 2){   // 2. 고객정보 
            customer_info();
         }
         else if(menuNum == 4){   // 2. 광고정보 
            ad_info();
         }
         else if(menuNum == 6){   // 2. 멤버십정보 
            membership_info();
         }
         else if(menuNum == 8){   // 2. 혜택정보 
            benefit_info();
         }
      }else if(menuNum == 2){      // 1. 추가 
         menuNum = menuDraw(2,3);
         if(menuNum == 0){      // 2. 멤버십 추가 
            add_membership();
         }
          else if(menuNum == 2){   // 2. 혜택 추가 
            add_benefit();
         }
      }else if(menuNum == 4){      // 1. 삭제 
         menuNum = menuDraw(3,4);
         if(menuNum == 0){      // 2. 광고주 삭제 
            delete_advertiser();
         }else if(menuNum == 2){   // 2. 고객삭제 
            delete_customer();
         }else if(menuNum == 4){   // 2. 광고 정보 삭제 
            delete_ad();
         }
      }else if(menuNum == 6){      // 1. 수정 
         menuNum = menuDraw(1,5);
         if(menuNum == 0){      // 2. 혜택 수정 
            modmod_benefit();
            mod_benefit();
         }
        }
      }
      getch();
   }


void DB_connect() {
   strcpy((char *)uid.arr, "b20173163@//sedb.deu.ac.kr:1521/orcl");
   uid.len = (short) strlen((char *)uid.arr);
   strcpy((char *)pwd.arr, "20173163");
   pwd.len = (short) strlen((char *)pwd.arr);
   
   /* EXEC SQL CONNECT :uid IDENTIFIED BY :pwd; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )10;
   sqlstm.offset = (unsigned int  )5;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&uid;
   sqlstm.sqhstl[0] = (unsigned int  )82;
   sqlstm.sqhsts[0] = (         int  )82;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&pwd;
   sqlstm.sqhstl[1] = (unsigned int  )22;
   sqlstm.sqhsts[1] = (         int  )22;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlstm.sqlcmax = (unsigned int )100;
   sqlstm.sqlcmin = (unsigned int )2;
   sqlstm.sqlcincr = (unsigned int )1;
   sqlstm.sqlctimeout = (unsigned int )0;
   sqlstm.sqlcnowait = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   if(sqlca.sqlcode != 0 && sqlca.sqlcode != -1405) { //connect
      printf("\7Connect error: %s ",sqlca.sqlerrm.sqlerrmc);
      getch(); 
      exit(-1);
   }
}

void sql_error(char *msg) {
   char err_msg[128];      size_t buf_len, msg_len;
   /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 

   printf("\n%s\n",msg);      
   buf_len = sizeof(err_msg);
   sqlglm(err_msg, &buf_len, &msg_len);   
   printf("%.*s\n",msg_len,err_msg);
   getch();
   /* EXEC SQL ROLLBACK WORK; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )36;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   exit(-1);
}

void print_screen(char fname[])
{
   FILE *fp;
   char line[100];

   if ( (fp = fopen(fname,"r"))  == NULL ){
      printf("file open error\n");
      getch();
      exit(-1);
   }
   while(1)
   {
      if( fgets(line, 99, fp) == NULL){
           break;
      }
      printf("%s", line);
   }

   fclose(fp);
}


void init()
{
   system("mode con:cols=92 lines=33"); // 해상도 설정
   system("title 멤버십 관리 시스템");             // 제목 설정

   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE); // 커서 숨기기
   CONSOLE_CURSOR_INFO ConsoleCursor;
   ConsoleCursor.bVisible = 0;
   ConsoleCursor.dwSize = 1;
   SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
}

void clrscr(void)
{
    COORD Cur= {0, 0};
    unsigned long dwLen;

    FillConsoleOutputCharacter(STD_HANDLE, ' ', 92*33, Cur, &dwLen);
}

void titleDraw()
{
   gotoxy(0,0);
   textcolor(5, 0);
   print_screen("main_frame.txt"); 

}

int menuDraw(int num, int outNum) // 출력문 개수, 출력문 번호
{
   
   int x = 40;
   int y = 10;
   int yPos = 10;
   textcolor(9, 0);

   if(outNum == 1){ //맨첨에 뜨는거 
      clrscr();
      titleDraw();
      gotoxy(x, y);
      printf("조회");
      gotoxy(x, y+2);
      printf("추가");
      gotoxy(x, y+4);
      printf("삭제");
      gotoxy(x, y+6);
      printf("수정");

   }else if(outNum == 2){ //조회 눌렀을 때 
      clrscr();
      titleDraw();
      gotoxy(x, y);
      printf("광고주 정보");
      gotoxy(x, y+2);
      printf("고객 정보");
      gotoxy(x, y+4);
      printf("광고 정보");
      gotoxy(x, y+6);
      printf("멤버십 정보");
      gotoxy(x, y+8);
      printf("혜택 정보");
      

   }else if(outNum == 3){ //추가 눌렀을 떄 
      clrscr();
      titleDraw();
      gotoxy(x, y);
      printf("멤버십 정보");
      gotoxy(x, y +2);
      printf("혜택 정보");

   }else if(outNum == 4){ //삭제 눌렀을 때 
      clrscr();
      titleDraw();
      gotoxy(x, y);
      printf("광고주 정보");
      gotoxy(x, y+2);
      printf("고객 정보");
      gotoxy(x, y+4);
      printf("광고 정보");
      gotoxy(x, y+6);

   }
   else if(outNum == 5){ //수정 눌렀을 때 
      clrscr();
      titleDraw();
      gotoxy(x, y);
      printf("혜택 수정");
   }

   while(1){
      int n = keyControl();
      switch(n){
         case UP:{
            if(y > yPos){
               gotoxy(x-2,y);
               printf(" ");
               y-=2;
               gotoxy(x-2,y);
               printf(">");
            }
            break;
         }
         case DOWN:{
            if(y < yPos + 2 * (num - 1)){
               gotoxy(x-2,y);
               printf(" ");
               y+=2;
               gotoxy(x-2,y);
               printf(">");
            }
            break;
         }
         case SUBMIT:{
            return y - yPos;
         }
      }
   }

}

void textcolor(int foreground, int background) 
{ 
   int color=foreground+background*16; 
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color); 
}

void gotoxy(int x, int y)
{
   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   COORD pos;
   pos.X = x;
   pos.Y = y;
   SetConsoleCursorPosition(consoleHandle, pos);
}

int keyControl()
{
   char temp = getch();

   if(temp == 'w' || temp == 'W'){
      return UP;
   }else if(temp == 'a' || temp == 'w'){
      return LEFT;
   }else if(temp == 's' || temp == 'S'){
      return DOWN;
   }else if(temp == 'd' || temp == 'D'){
      return RIGHT;
   }else if(temp == ' '){ //space bar
      return SUBMIT;
   }
}

void handle_insert_error() {
   gotoxy(25, 17);
   is_err = TRUE;
   printf("데이터 무결성에 위배됩니다.");
}

void handle_delect_error() {
   gotoxy(25, 17);
   is_err = TRUE;
   printf("데이터 삭제시 오류가 발생합니다.");
}


//info

void advertiser_info(){
   titleDraw(); 
/* EXEC SQL BEGIN DECLARE SECTION; */ 

   /* varchar name[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } name;

   /* varchar date[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } date;

   /* varchar ad_num[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } ad_num;

   /* varchar member_num[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } member_num;


   char dynstmt[1000];
/* EXEC SQL END DECLARE SECTION; */ 

   clrscr();
   titleDraw();

   int count=0, i ;

   int x = 30;
   int y = 14;
   textcolor(5, 0);
  /* 실행시킬 SQL 문장*/      
   sprintf(dynstmt,"SELECT advertiser_name, advertiser_date, advertiser_number, membership_number FROM advertiser_info "); 

   /* EXEC SQL PREPARE S FROM :dynstmt ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )51;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)dynstmt;
   sqlstm.sqhstl[0] = (unsigned int  )1000;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   /* cursor 선언 */
   /* EXEC SQL DECLARE c_cursor CURSOR FOR S; */ 

   /* cursor open */
   /* EXEC SQL OPEN c_cursor ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )70;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqcmod = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}

 

   /* EXEC SQL WHENEVER NOT FOUND DO break; */ 


   x = 5;
   y = 10;

   for (;;)
    {
        /* EXEC SQL FETCH c_cursor INTO :name, :date, :ad_num, :member_num; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 4;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )85;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&name;
        sqlstm.sqhstl[0] = (unsigned int  )102;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&date;
        sqlstm.sqhstl[1] = (unsigned int  )102;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&ad_num;
        sqlstm.sqhstl[2] = (unsigned int  )102;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&member_num;
        sqlstm.sqhstl[3] = (unsigned int  )102;
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode == 1403) break;
}



   name.arr[name.len] = '\0' ;
   date.arr[date.len] = '\0';
   ad_num.arr[ad_num.len] = '\0';
   member_num.arr[member_num.len] = '\0';
   
   gotoxy(5,8);
   printf("ADVERTISER_NAME |");
   gotoxy(23,8);
   printf("ADVERTISER_DATE |");
   gotoxy(41,8);
   printf("ADVERTISER_NUMBER |");
   gotoxy(61,8);
   printf("MEMBERSHIP_NUMBER |");
   
   
   gotoxy(x,y);
   printf("     %-11s", name.arr);
   gotoxy(x+20,y);
   printf("   %-21s", date.arr);
   gotoxy(x+37,y);
   printf("     %-7s", ad_num.arr);
   gotoxy(x+56, y);
   printf("       %-7s", member_num.arr);
   
   y++;
   
    }

    /* Close the cursor. */
   /* EXEC SQL CLOSE c_cursor; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )116;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   /* EXEC SQL COMMIT ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )131;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   while(1){
      int n = keyControl();
      if(n == SUBMIT)
         break;
   }
};

void customer_info(){ //고객 정보 
   titleDraw();
 /* EXEC SQL BEGIN DECLARE SECTION; */ 

   /* varchar no[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } no;

   /* varchar name[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } name;

   /* varchar point[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } point;

   /* varchar coupon[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } coupon;

   /* varchar bno[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } bno;


   char dynstmt[1000];
 /* EXEC SQL END DECLARE SECTION; */ 

   clrscr();
   titleDraw();
   
   int count=0, i ;

   int x = 30;
   int y = 14;
   textcolor(5, 0);
 /* 실행시킬 SQL 문장*/      
   sprintf(dynstmt,"SELECT customer_number, customer_name, customer_point, coupon, benefit_number FROM customer_info "); 

   /* select 문장이 제대로 구성되어 있는지 화면에 찍어봄 */
   //printf("dynstmt:%s\n", dynstmt);

   /* EXEC SQL PREPARE S FROM :dynstmt ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )146;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)dynstmt;
   sqlstm.sqhstl[0] = (unsigned int  )1000;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   /* cursor 선언 */
   /* EXEC SQL DECLARE c_cursor CURSOR FOR S; */ 


   /* cursor open */
   /* EXEC SQL OPEN c_cursor ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )165;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqcmod = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}

 

   /* EXEC SQL WHENEVER NOT FOUND DO break; */ 


   x = 5;
   y = 10;

   for (;;)
    {
        /* EXEC SQL FETCH c_cursor INTO :no, :name, :point, :coupon, :bno; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 5;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )180;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&no;
        sqlstm.sqhstl[0] = (unsigned int  )102;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&name;
        sqlstm.sqhstl[1] = (unsigned int  )102;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&point;
        sqlstm.sqhstl[2] = (unsigned int  )102;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&coupon;
        sqlstm.sqhstl[3] = (unsigned int  )102;
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)&bno;
        sqlstm.sqhstl[4] = (unsigned int  )102;
        sqlstm.sqhsts[4] = (         int  )0;
        sqlstm.sqindv[4] = (         void  *)0;
        sqlstm.sqinds[4] = (         int  )0;
        sqlstm.sqharm[4] = (unsigned int  )0;
        sqlstm.sqadto[4] = (unsigned short )0;
        sqlstm.sqtdso[4] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode == 1403) break;
}



   no.arr[no.len] = '\0' ;
   name.arr[name.len] = '\0';
   point.arr[point.len] = '\0';
   coupon.arr[coupon.len] = '\0';
   bno.arr[bno.len] = '\0';


   gotoxy(5,8);
   printf("CUSTOMER_NUMBER |");
   gotoxy(25,8);
   printf("CUSTOMER_NAME |");
   gotoxy(42,8);
   printf("CUSTOMER_POINT |");
   gotoxy(59,8);
   printf("COUPON |");
   gotoxy(68,8);
   printf("BENEFIT_NUMBER ");   
   
   gotoxy(x,y);
   printf("       %-4s", no.arr);
   gotoxy(x+20,y);
   printf("     %-7s", name.arr);
   gotoxy(x+37,y);
   printf("     %-7s", point.arr);
   gotoxy(x+54, y);
   printf("   %-7s", coupon.arr);
   gotoxy(x+63, y);
   printf("     %-7s", bno.arr);
   y++;
   

    }

    /* Close the cursor. */
   /* EXEC SQL CLOSE c_cursor; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )215;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   /* EXEC SQL COMMIT ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )230;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   while(1){
      int n = keyControl();
      if(n == SUBMIT)
         break;
   }
   
} 
void ad_info(){
   titleDraw();
 /* EXEC SQL BEGIN DECLARE SECTION; */ 

   /* varchar ad_num[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } ad_num;

   /* varchar ad_title[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } ad_title;

   /* varchar advertiser_num[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } advertiser_num;


   char dynstmt[1000];
 /* EXEC SQL END DECLARE SECTION; */ 

   clrscr();
   titleDraw();

   int count=0, i ;

   int x = 30;
   int y = 14;
   textcolor(5, 0);
 /* 실행시킬 SQL 문장*/      
   sprintf(dynstmt,"SELECT ad_number, ad_title, advertiser_number FROM ad_info "); 

   /* select 문장이 제대로 구성되어 있는지 화면에 찍어봄 */
   //printf("dynstmt:%s\n", dynstmt);

   /* EXEC SQL PREPARE S FROM :dynstmt ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )245;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)dynstmt;
   sqlstm.sqhstl[0] = (unsigned int  )1000;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   /* cursor 선언 */
   /* EXEC SQL DECLARE c_cursor CURSOR FOR S; */ 


   /* cursor open */
   /* EXEC SQL OPEN c_cursor ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )264;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqcmod = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}

 

   /* EXEC SQL WHENEVER NOT FOUND DO break; */ 


   x = 5;
   y = 10;

   for (;;)
    {
        /* EXEC SQL FETCH c_cursor INTO :ad_num, :ad_title, :advertiser_num; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 5;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )279;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&ad_num;
        sqlstm.sqhstl[0] = (unsigned int  )102;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&ad_title;
        sqlstm.sqhstl[1] = (unsigned int  )102;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&advertiser_num;
        sqlstm.sqhstl[2] = (unsigned int  )102;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode == 1403) break;
}



   ad_num.arr[ad_num.len] = '\0' ;
   ad_title.arr[ad_title.len] = '\0';
   advertiser_num.arr[advertiser_num.len] = '\0';

   gotoxy(5,8);
   printf("| AD_NUMBER |");
   gotoxy(20,8);
   printf("           | AD_TITLE |");
   gotoxy(57,8);
   printf("| ADVERTISER_NUMBER |");
   

   gotoxy(x,y);
   printf("     %-6s", ad_num.arr);
   gotoxy(x+12,y);
   printf("        %-45s", ad_title.arr);
   gotoxy(x+52,y);
   printf("       %-7s", advertiser_num.arr);
   y++;
   
   
    }

    /* Close the cursor. */
   /* EXEC SQL CLOSE c_cursor; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )306;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   /* EXEC SQL COMMIT ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )321;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   while(1){
      int n = keyControl();
      if(n == SUBMIT)
         break;
   }
};

void membership_info(){ //membership info
   titleDraw(); 
/* EXEC SQL BEGIN DECLARE SECTION; */ 

   /* varchar num[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } num;

   /* varchar name[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } name;

   /* varchar price[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } price;


   char dynstmt[1000];
/* EXEC SQL END DECLARE SECTION; */ 

   clrscr();
   titleDraw();

   int count=0, i ;

   int x = 30;
   int y = 14;
   textcolor(5, 0);
 /* 실행시킬 SQL 문장*/      
   sprintf(dynstmt,"SELECT membership_number, membership_name, membership_price FROM membership_info "); 

   /* select 문장이 제대로 구성되어 있는지 화면에 찍어봄 */
   //printf("dynstmt:%s\n", dynstmt);

   /* EXEC SQL PREPARE S FROM :dynstmt ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )336;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)dynstmt;
   sqlstm.sqhstl[0] = (unsigned int  )1000;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   /* cursor 선언 */
   /* EXEC SQL DECLARE c_cursor CURSOR FOR S; */ 


   /* cursor open */
   /* EXEC SQL OPEN c_cursor ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )355;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqcmod = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}

 

   /* EXEC SQL WHENEVER NOT FOUND DO break; */ 


   x = 15;
   y = 10;

   for (;;)
    {
       
        /* EXEC SQL FETCH c_cursor INTO :num, :name, :price; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 5;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )370;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&num;
        sqlstm.sqhstl[0] = (unsigned int  )102;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&name;
        sqlstm.sqhstl[1] = (unsigned int  )102;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&price;
        sqlstm.sqhstl[2] = (unsigned int  )102;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode == 1403) break;
}



   num.arr[num.len] = '\0' ;
   name.arr[name.len] = '\0';
   price.arr[price.len] = '\0';
     
   gotoxy(15,8);
   printf("MEMBERSHIP_NUMBER |");
   gotoxy(35,8);
   printf("MEMBERSHIP_NAME |");
   gotoxy(55,8);
   printf("MEMBERSHIP_PRICE |");

   gotoxy(x,y);
   printf("       %-6s", num.arr);
   gotoxy(x+20,y);
   printf("   %-25s", name.arr);
   gotoxy(x+40,y);
   printf("     %-11s", price.arr);
   y++;
   
   int p; //지우기 위해 추가한 임의의 변수 
   for(p=0;p<13;p++){
        printf("                                                          \n");
   }
    }

    /* Close the cursor. */
   /* EXEC SQL CLOSE c_cursor; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )397;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   /* EXEC SQL COMMIT ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )412;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   while(1){
      int n = keyControl();
      if(n == SUBMIT)
         break;
   }
}
void benefit_info(){
   titleDraw(); 
/* EXEC SQL BEGIN DECLARE SECTION; */ 

   /* varchar point[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } point;

   /* varchar coupon[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } coupon;

   /* varchar num[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } num;


   char dynstmt[1000];
/* EXEC SQL END DECLARE SECTION; */ 

   clrscr();
   titleDraw();

   int count=0, i ;

   int x = 30;
   int y = 14;
   textcolor(5, 0);
 /* 실행시킬 SQL 문장*/      
   sprintf(dynstmt,"SELECT benefit_point, coupon, benefit_number FROM benefit "); 

   /* select 문장이 제대로 구성되어 있는지 화면에 찍어봄 */
   //printf("dynstmt:%s\n", dynstmt);

   /* EXEC SQL PREPARE S FROM :dynstmt ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )427;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)dynstmt;
   sqlstm.sqhstl[0] = (unsigned int  )1000;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   /* cursor 선언 */
   /* EXEC SQL DECLARE c_cursor CURSOR FOR S; */ 


   /* cursor open */
   /* EXEC SQL OPEN c_cursor ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )446;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqcmod = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}

 

   /* EXEC SQL WHENEVER NOT FOUND DO break; */ 


   x = 25;
   y = 10;

   for (;;)
    {
        /* EXEC SQL FETCH c_cursor INTO :point, :coupon, :num; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 5;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )461;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&point;
        sqlstm.sqhstl[0] = (unsigned int  )102;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&coupon;
        sqlstm.sqhstl[1] = (unsigned int  )102;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&num;
        sqlstm.sqhstl[2] = (unsigned int  )102;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode == 1403) break;
}



   point.arr[point.len] = '\0' ;
   coupon.arr[coupon.len] = '\0';
   num.arr[num.len] = '\0';

   gotoxy(25,8);
   printf("BENEFIT_POINT |");
   gotoxy(40,8);
   printf(" COUPON |");
   gotoxy(50,8);
   printf("BENERIT_NUMBER |");

   gotoxy(x,y);
   printf("     %s", point.arr);
   gotoxy(x+15,y);
   printf("   %-2s", coupon.arr);
   gotoxy(x+25,y);
   printf("     %s", num.arr);
   y++;
   
   int p; //지우기 위해 추가한 임의의 변수 
   for(p=0;p<13;p++){
        printf("                                                          \n");
   }
    }

    /* Close the cursor. */
   /* EXEC SQL CLOSE c_cursor; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )488;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   /* EXEC SQL COMMIT ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )503;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   while(1){
      int n = keyControl();
      if(n == SUBMIT)
         break;
   }
}


//add
void add_membership(){
   titleDraw(); 

    /* EXEC SQL BEGIN DECLARE SECTION; */ 

    /* varchar membership_number[5]; */ 
struct { unsigned short len; unsigned char arr[5]; } membership_number;

    /* varchar membership_name[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } membership_name;

    /* varchar membership_price[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } membership_price;


    char dynstmt[1000];
/* EXEC SQL END DECLARE SECTION; */ 

   clrscr();
   titleDraw();

   int count=0;
    
   int x = 50;
   int y = 12;
   textcolor(5, 0); 
 /* 실행시킬 SQL 문장*/      
   //sprintf(dynstmt,"SELECT benefit_point, coupon, benefit_number FROM benefit "); 
   /* EXEC SQL PREPARE S FROM :dynstmt ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )518;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)dynstmt;
   sqlstm.sqhstl[0] = (unsigned int  )1000;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   /* EXEC SQL DECLARE c_cursor CURSOR FOR S; */ 

   /* EXEC SQL OPEN c_cursor ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )537;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqcmod = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}

 
   /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 



  
   for (;;)
{
   /* 데이터 입력 */

    gotoxy(30,10);
    printf(" 추가할 내용을 입력해주세요\n");   
    gotoxy(25,11);
    printf(" ------------------------------------\n");
    gotoxy(25,12);
    printf("멤버십고유번호:\n");
    gotoxy(25,13);
    printf("\n");
    gotoxy(25,14);
    printf("이름:\n");
    gotoxy(25,15);
    printf("\n");
    gotoxy(25,16);
    printf("가격:\n");
    gotoxy(25,17);
    printf(" ------------------------------------\n\n");

   /* 고유번호 입력 */
    gotoxy(x,y)  ; 
    gets(membership_number.arr);
    membership_number.len = strlen(membership_number.arr);  //길이 정보 셋팅(문자열이기 때문)
   
   /* 이름 입력 */

    gotoxy(x,y+2)  ;
    gets(membership_name.arr);
    membership_name.len = strlen(membership_name.arr);
    
   /* 가격 입력 */
    gotoxy(x,y+4) ;
    gets(membership_price.arr);
    membership_price.len = strlen(membership_price.arr);
    
    gotoxy(10,19);    
    sprintf(dynstmt,"insert into membership_info values ( %s, '%s', '%s')" , membership_number.arr,membership_name.arr, membership_price.arr);  //따옴표 주의!!

    printf("stmt: %s\n", dynstmt);
    
    
    /* EXEC SQL EXECUTE IMMEDIATE :dynstmt ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 5;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )552;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)dynstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1000;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode == 1403) break;
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


   //EXEC SQL COMMIT WORK ;
   //EXEC SQL CLOSE c_cursor;
    gotoxy(35,20);
    printf("Insert Success\n");
    /* EXEC SQL COMMIT WORK ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 5;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )571;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


    }

    /* EXEC SQL WHENEVER NOT FOUND DO break; */ 
  
}


void add_benefit(){
   titleDraw(); 

   /* EXEC SQL BEGIN DECLARE SECTION; */ 

   /* varchar benefit_point[5]; */ 
struct { unsigned short len; unsigned char arr[5]; } benefit_point;

   /* varchar coupon[5]; */ 
struct { unsigned short len; unsigned char arr[5]; } coupon;

   /* varchar benefit_number[5]; */ 
struct { unsigned short len; unsigned char arr[5]; } benefit_number;


   char dynstmt[1000];
/* EXEC SQL END DECLARE SECTION; */ 

   clrscr();
   titleDraw();

   int count=0;

   int x = 50;
   int y = 12;
   textcolor(5, 0);  
 /* 실행시킬 SQL 문장*/      
   sprintf(dynstmt,"SELECT benefit_point, coupon, benefit_number FROM benefit "); 
   /* EXEC SQL PREPARE S FROM :dynstmt ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )586;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)dynstmt;
   sqlstm.sqhstl[0] = (unsigned int  )1000;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


   /* EXEC SQL DECLARE c_cursor CURSOR FOR S; */ 

   /* EXEC SQL OPEN c_cursor ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )605;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqcmod = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 
   /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 


 

   for (;;)
{

   /* 데이터 입력 */
 
    gotoxy(30,10);
    printf(" 추가할 내용을 입력해주세요.\n");   
    gotoxy(25,11);
    printf(" ------------------------------------\n");
    gotoxy(25,12);
    printf("포인트 :\n");
    gotoxy(25,13);
    printf("\n");
    gotoxy(25,14);
    printf("쿠폰 개수 :\n");
    gotoxy(25,15);
    printf("\n");
    gotoxy(25,16);
    printf("혜택 고유번호:\n");
    gotoxy(25,17);
    printf(" ------------------------------------\n\n");

   /* 고유번호 입력 */
    gotoxy(x,y)  ; 
    gets(benefit_point.arr);
    benefit_point.len = strlen(benefit_point.arr); 
   /* 쿠폰 입력 */

    gotoxy(x,y+2)  ;
    gets(coupon.arr);
    coupon.len = strlen(coupon.arr);
    
   /* 가격 입력 */
    gotoxy(x,y+4) ;
    gets(benefit_number.arr);
    benefit_number.len = strlen(benefit_number.arr);
        
    gotoxy(20,19);
    sprintf(dynstmt,"insert into benefit values ( %s, '%s', '%s')" , benefit_point.arr, coupon.arr,  benefit_number.arr); 
    printf("stmt: %s\n", dynstmt); 
    
 
    
   /* EXEC SQL EXECUTE IMMEDIATE :dynstmt ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )620;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)dynstmt;
   sqlstm.sqhstl[0] = (unsigned int  )1000;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode == 1403) break;
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


   //EXEC SQL COMMIT WORK ;
  // EXEC SQL CLOSE c_cursor;
    gotoxy(35,20);
    printf("Insert Success\n");
    /* EXEC SQL COMMIT WORK ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 5;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )639;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


    }

    /* EXEC SQL WHENEVER NOT FOUND DO break; */ 
  
}


//delete
void delete_advertiser(){
   titleDraw(); 
   /* EXEC SQL BEGIN DECLARE SECTION; */ 

   char dynstmt[1000];

   /* EXEC SQL END DECLARE SECTION; */ 

   clrscr();
   titleDraw();

   char  no[100];
   char  flag = 'n';

   textcolor(5, 0);  

   /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 

   int x = 25;
   int y = 10;

   for (;;)
   {
    gotoxy(x,y);
    printf("삭제할 광고주의 고유번호를 입력하세요 \n") ;   
    gotoxy(x+17, y+2);
    gets(no) ;
    gotoxy(x-10, y+4);
    deldel_customer(no);
    gotoxy(x, y+6);
    printf("위의 투플들을 삭제하시겠습니까? (y/n) ");   

   flag = (char *)getch() ;

   if( flag == 'y' || flag =='Y' ){
       gotoxy(x-10, y+7);
       sprintf(dynstmt,"delete from advertiser_info where advertiser_number = %s ", no);
       printf("stmt:%s\n", dynstmt);
       /* EXEC SQL EXECUTE IMMEDIATE :dynstmt ; */ 

{
       struct sqlexd sqlstm;
       sqlstm.sqlvsn = 13;
       sqlstm.arrsiz = 5;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.stmt = "";
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )654;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)4352;
       sqlstm.occurs = (unsigned int  )0;
       sqlstm.sqhstv[0] = (         void  *)dynstmt;
       sqlstm.sqhstl[0] = (unsigned int  )1000;
       sqlstm.sqhsts[0] = (         int  )0;
       sqlstm.sqindv[0] = (         void  *)0;
       sqlstm.sqinds[0] = (         int  )0;
       sqlstm.sqharm[0] = (unsigned int  )0;
       sqlstm.sqadto[0] = (unsigned short )0;
       sqlstm.sqtdso[0] = (unsigned short )0;
       sqlstm.sqphsv = sqlstm.sqhstv;
       sqlstm.sqphsl = sqlstm.sqhstl;
       sqlstm.sqphss = sqlstm.sqhsts;
       sqlstm.sqpind = sqlstm.sqindv;
       sqlstm.sqpins = sqlstm.sqinds;
       sqlstm.sqparm = sqlstm.sqharm;
       sqlstm.sqparc = sqlstm.sqharc;
       sqlstm.sqpadto = sqlstm.sqadto;
       sqlstm.sqptdso = sqlstm.sqtdso;
       sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
       if (sqlca.sqlcode == 1403) break;
       if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


       gotoxy(x+15, y+8);
       printf("삭제 성공\n");   
       /* EXEC SQL COMMIT WORK ; */ 

{
       struct sqlexd sqlstm;
       sqlstm.sqlvsn = 13;
       sqlstm.arrsiz = 5;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )673;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)4352;
       sqlstm.occurs = (unsigned int  )0;
       sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
       if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 
   }
   else {
       gotoxy(x+8, y+7);
       printf("삭제를 취소합니다.\n");
   }
    
    /* EXEC SQL WHENEVER NOT FOUND DO break; */ 
  
   }
}

void deldel_advertiser(char *no){
/* EXEC SQL BEGIN DECLARE SECTION; */ 

    /* varchar  v_advertiser_name[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } v_advertiser_name;

    /* varchar  v_advertiser_date[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } v_advertiser_date;

    /* varchar  v_advertiser_number[5]; */ 
struct { unsigned short len; unsigned char arr[5]; } v_advertiser_number;

    /* varchar  v_membership_number[5]; */ 
struct { unsigned short len; unsigned char arr[5]; } v_membership_number;


    char dynstmt[1000];
/* EXEC SQL END DECLARE SECTION; */ 

    
    
    /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 

    sprintf(dynstmt,"SELECT * FROM customer_info where customer_number = %s", no) ;

    printf("stmt:%s\n", dynstmt);

    /* EXEC SQL PREPARE S FROM :dynstmt ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 5;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )688;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)dynstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1000;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


    /* EXEC SQL DECLARE c_cursor CURSOR FOR S ; */ 
 
    /* EXEC SQL OPEN c_cursor ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 5;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )707;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 

  
    /* EXEC SQL WHENEVER NOT FOUND do break; */ 

    
    for(;;)
    {
       /* EXEC SQL FETCH c_cursor INTO :v_advertiser_name, :v_advertiser_date, :v_advertiser_number, :v_membership_number; */ 

{
       struct sqlexd sqlstm;
       sqlstm.sqlvsn = 13;
       sqlstm.arrsiz = 5;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )722;
       sqlstm.selerr = (unsigned short)1;
       sqlstm.sqlpfmem = (unsigned int  )0;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)4352;
       sqlstm.occurs = (unsigned int  )0;
       sqlstm.sqfoff = (           int )0;
       sqlstm.sqfmod = (unsigned int )2;
       sqlstm.sqhstv[0] = (         void  *)&v_advertiser_name;
       sqlstm.sqhstl[0] = (unsigned int  )12;
       sqlstm.sqhsts[0] = (         int  )0;
       sqlstm.sqindv[0] = (         void  *)0;
       sqlstm.sqinds[0] = (         int  )0;
       sqlstm.sqharm[0] = (unsigned int  )0;
       sqlstm.sqadto[0] = (unsigned short )0;
       sqlstm.sqtdso[0] = (unsigned short )0;
       sqlstm.sqhstv[1] = (         void  *)&v_advertiser_date;
       sqlstm.sqhstl[1] = (unsigned int  )22;
       sqlstm.sqhsts[1] = (         int  )0;
       sqlstm.sqindv[1] = (         void  *)0;
       sqlstm.sqinds[1] = (         int  )0;
       sqlstm.sqharm[1] = (unsigned int  )0;
       sqlstm.sqadto[1] = (unsigned short )0;
       sqlstm.sqtdso[1] = (unsigned short )0;
       sqlstm.sqhstv[2] = (         void  *)&v_advertiser_number;
       sqlstm.sqhstl[2] = (unsigned int  )7;
       sqlstm.sqhsts[2] = (         int  )0;
       sqlstm.sqindv[2] = (         void  *)0;
       sqlstm.sqinds[2] = (         int  )0;
       sqlstm.sqharm[2] = (unsigned int  )0;
       sqlstm.sqadto[2] = (unsigned short )0;
       sqlstm.sqtdso[2] = (unsigned short )0;
       sqlstm.sqhstv[3] = (         void  *)&v_membership_number;
       sqlstm.sqhstl[3] = (unsigned int  )7;
       sqlstm.sqhsts[3] = (         int  )0;
       sqlstm.sqindv[3] = (         void  *)0;
       sqlstm.sqinds[3] = (         int  )0;
       sqlstm.sqharm[3] = (unsigned int  )0;
       sqlstm.sqadto[3] = (unsigned short )0;
       sqlstm.sqtdso[3] = (unsigned short )0;
       sqlstm.sqphsv = sqlstm.sqhstv;
       sqlstm.sqphsl = sqlstm.sqhstl;
       sqlstm.sqphss = sqlstm.sqhsts;
       sqlstm.sqpind = sqlstm.sqindv;
       sqlstm.sqpins = sqlstm.sqinds;
       sqlstm.sqparm = sqlstm.sqharm;
       sqlstm.sqparc = sqlstm.sqharc;
       sqlstm.sqpadto = sqlstm.sqadto;
       sqlstm.sqptdso = sqlstm.sqtdso;
       sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
       if (sqlca.sqlcode == 1403) break;
       if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



       v_advertiser_name.arr[v_advertiser_name.len] = '\0';
       v_advertiser_date.arr[v_advertiser_date.len] = '\0';
       v_advertiser_number.arr[v_advertiser_number.len] = '\0';
       v_membership_number.arr[v_membership_number.len] = '\0';

       printf("광고주이름:%s 가입날짜:%s 광고주고유번호:%s 멤버십번호:%s \n", v_advertiser_name.arr, v_advertiser_date.arr, v_advertiser_number.arr, v_membership_number.arr);
    }
    /* EXEC SQL CLOSE c_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 5;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )753;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 
}

void delete_customer(){
   titleDraw(); 
   /* EXEC SQL BEGIN DECLARE SECTION; */ 

   char dynstmt[1000];

   /* EXEC SQL END DECLARE SECTION; */ 

   clrscr();
   titleDraw();
   
   char  no[100];
   char  flag = 'n';

   textcolor(5, 0);  

   /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 

   int x = 25;
   int y = 10;
   
   for (;;)
   {
    gotoxy(x,y);
    printf("삭제할 고객 정보의 고유번호를 입력하세요 \n") ;   
    gotoxy(x+17, y+2);
    gets(no) ;
    gotoxy(x-5, y+4);
    deldel_customer(no);
    gotoxy(x, y+6);
    printf("위의 투플들을 삭제하시겠습니까? (y/n) ");   

   flag = (char *)getch() ;

   if( flag == 'y' || flag =='Y' ){
       gotoxy(x-10, y+7);
       sprintf(dynstmt,"delete from customer_info where customer_number = %s ", no);
       printf("stmt:%s\n", dynstmt);
       /* EXEC SQL EXECUTE IMMEDIATE :dynstmt ; */ 

{
       struct sqlexd sqlstm;
       sqlstm.sqlvsn = 13;
       sqlstm.arrsiz = 5;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.stmt = "";
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )768;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)4352;
       sqlstm.occurs = (unsigned int  )0;
       sqlstm.sqhstv[0] = (         void  *)dynstmt;
       sqlstm.sqhstl[0] = (unsigned int  )1000;
       sqlstm.sqhsts[0] = (         int  )0;
       sqlstm.sqindv[0] = (         void  *)0;
       sqlstm.sqinds[0] = (         int  )0;
       sqlstm.sqharm[0] = (unsigned int  )0;
       sqlstm.sqadto[0] = (unsigned short )0;
       sqlstm.sqtdso[0] = (unsigned short )0;
       sqlstm.sqphsv = sqlstm.sqhstv;
       sqlstm.sqphsl = sqlstm.sqhstl;
       sqlstm.sqphss = sqlstm.sqhsts;
       sqlstm.sqpind = sqlstm.sqindv;
       sqlstm.sqpins = sqlstm.sqinds;
       sqlstm.sqparm = sqlstm.sqharm;
       sqlstm.sqparc = sqlstm.sqharc;
       sqlstm.sqpadto = sqlstm.sqadto;
       sqlstm.sqptdso = sqlstm.sqtdso;
       sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
       if (sqlca.sqlcode == 1403) break;
       if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


       gotoxy(x+15, y+8);
       printf("삭제 성공\n");   
       /* EXEC SQL COMMIT WORK ; */ 

{
       struct sqlexd sqlstm;
       sqlstm.sqlvsn = 13;
       sqlstm.arrsiz = 5;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )787;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)4352;
       sqlstm.occurs = (unsigned int  )0;
       sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
       if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 
   }
   else {
       gotoxy(x+8, y+7);
       printf("삭제를 취소합니다.\n");
   }
    
    /* EXEC SQL WHENEVER NOT FOUND DO break; */ 
  
   }
}

void deldel_customer(char *no){
/* EXEC SQL BEGIN DECLARE SECTION; */ 

    /* varchar v_customer_number[5]; */ 
struct { unsigned short len; unsigned char arr[5]; } v_customer_number;

    /* varchar v_customer_name[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } v_customer_name;

    /* varchar v_customer_point [10]; */ 
struct { unsigned short len; unsigned char arr[10]; } v_customer_point;

    /* varchar v_coupon [5]; */ 
struct { unsigned short len; unsigned char arr[5]; } v_coupon;

    /* varchar v_benefit_number[5]; */ 
struct { unsigned short len; unsigned char arr[5]; } v_benefit_number;

    
    char dynstmt[1000];
/* EXEC SQL END DECLARE SECTION; */ 

    
    
    /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 

    sprintf(dynstmt,"SELECT * FROM customer_info where customer_number = %s", no) ;

    printf("stmt:%s\n", dynstmt);

    /* EXEC SQL PREPARE S FROM :dynstmt ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 5;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )802;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)dynstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1000;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


    /* EXEC SQL DECLARE c_cursor CURSOR FOR S ; */ 
 
    /* EXEC SQL OPEN c_cursor ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 5;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )821;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 

  
    /* EXEC SQL WHENEVER NOT FOUND do break; */ 

    
    for(;;)
    {
       /* EXEC SQL FETCH c_cursor INTO :v_customer_number, :v_customer_name, :v_customer_point, :v_coupon, :v_benefit_number; */ 

{
       struct sqlexd sqlstm;
       sqlstm.sqlvsn = 13;
       sqlstm.arrsiz = 5;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )836;
       sqlstm.selerr = (unsigned short)1;
       sqlstm.sqlpfmem = (unsigned int  )0;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)4352;
       sqlstm.occurs = (unsigned int  )0;
       sqlstm.sqfoff = (           int )0;
       sqlstm.sqfmod = (unsigned int )2;
       sqlstm.sqhstv[0] = (         void  *)&v_customer_number;
       sqlstm.sqhstl[0] = (unsigned int  )7;
       sqlstm.sqhsts[0] = (         int  )0;
       sqlstm.sqindv[0] = (         void  *)0;
       sqlstm.sqinds[0] = (         int  )0;
       sqlstm.sqharm[0] = (unsigned int  )0;
       sqlstm.sqadto[0] = (unsigned short )0;
       sqlstm.sqtdso[0] = (unsigned short )0;
       sqlstm.sqhstv[1] = (         void  *)&v_customer_name;
       sqlstm.sqhstl[1] = (unsigned int  )22;
       sqlstm.sqhsts[1] = (         int  )0;
       sqlstm.sqindv[1] = (         void  *)0;
       sqlstm.sqinds[1] = (         int  )0;
       sqlstm.sqharm[1] = (unsigned int  )0;
       sqlstm.sqadto[1] = (unsigned short )0;
       sqlstm.sqtdso[1] = (unsigned short )0;
       sqlstm.sqhstv[2] = (         void  *)&v_customer_point;
       sqlstm.sqhstl[2] = (unsigned int  )12;
       sqlstm.sqhsts[2] = (         int  )0;
       sqlstm.sqindv[2] = (         void  *)0;
       sqlstm.sqinds[2] = (         int  )0;
       sqlstm.sqharm[2] = (unsigned int  )0;
       sqlstm.sqadto[2] = (unsigned short )0;
       sqlstm.sqtdso[2] = (unsigned short )0;
       sqlstm.sqhstv[3] = (         void  *)&v_coupon;
       sqlstm.sqhstl[3] = (unsigned int  )7;
       sqlstm.sqhsts[3] = (         int  )0;
       sqlstm.sqindv[3] = (         void  *)0;
       sqlstm.sqinds[3] = (         int  )0;
       sqlstm.sqharm[3] = (unsigned int  )0;
       sqlstm.sqadto[3] = (unsigned short )0;
       sqlstm.sqtdso[3] = (unsigned short )0;
       sqlstm.sqhstv[4] = (         void  *)&v_benefit_number;
       sqlstm.sqhstl[4] = (unsigned int  )7;
       sqlstm.sqhsts[4] = (         int  )0;
       sqlstm.sqindv[4] = (         void  *)0;
       sqlstm.sqinds[4] = (         int  )0;
       sqlstm.sqharm[4] = (unsigned int  )0;
       sqlstm.sqadto[4] = (unsigned short )0;
       sqlstm.sqtdso[4] = (unsigned short )0;
       sqlstm.sqphsv = sqlstm.sqhstv;
       sqlstm.sqphsl = sqlstm.sqhstl;
       sqlstm.sqphss = sqlstm.sqhsts;
       sqlstm.sqpind = sqlstm.sqindv;
       sqlstm.sqpins = sqlstm.sqinds;
       sqlstm.sqparm = sqlstm.sqharm;
       sqlstm.sqparc = sqlstm.sqharc;
       sqlstm.sqpadto = sqlstm.sqadto;
       sqlstm.sqptdso = sqlstm.sqtdso;
       sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
       if (sqlca.sqlcode == 1403) break;
       if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



       v_customer_number.arr[v_customer_number.len] = '\0';
       v_customer_name.arr[v_customer_name.len] = '\0';
       v_customer_point.arr[v_customer_point.len] = '\0';
       v_coupon.arr[v_coupon.len] = '\0';
       v_benefit_number.arr[v_benefit_number.len] = '\0';

       gotoxy(15, 15);
       printf("고객고유번호:%s 이름:%s 포인트:%s 쿠폰개수:%s 혜택고유번호:%s \n", v_customer_number.arr, v_customer_name.arr, v_customer_point.arr, v_coupon.arr, v_benefit_number.arr);
    }
    /* EXEC SQL CLOSE c_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 5;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )871;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 
} 

void delete_ad(){
   titleDraw(); 
   /* EXEC SQL BEGIN DECLARE SECTION; */ 

   char dynstmt[1000];

   /* EXEC SQL END DECLARE SECTION; */ 

   clrscr();
   titleDraw();
   
   char  no[100];
   char  flag = 'n';

   textcolor(5, 0);   

   /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 

   int x = 25;
   int y = 10;
   
   for (;;)
   {
    gotoxy(x,y);
    printf("삭제할 광고의 고유번호를 입력하세요\n") ;   
    gotoxy(x+17, y+2);
    gets(no) ;
    gotoxy(x-10, y+4);
    deldel_ad(no);
    gotoxy(x, y+6);
    printf("위의 투플들을 삭제하시겠습니까? (y/n)");   

   flag = (char *)getch() ;

   if( flag == 'y' || flag =='Y' ){
       gotoxy(x-10, y+7);
       sprintf(dynstmt,"delete from ad_info where ad_number = %s ", no);
       printf("stmt:%s\n", dynstmt);
       /* EXEC SQL EXECUTE IMMEDIATE :dynstmt ; */ 

{
       struct sqlexd sqlstm;
       sqlstm.sqlvsn = 13;
       sqlstm.arrsiz = 5;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.stmt = "";
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )886;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)4352;
       sqlstm.occurs = (unsigned int  )0;
       sqlstm.sqhstv[0] = (         void  *)dynstmt;
       sqlstm.sqhstl[0] = (unsigned int  )1000;
       sqlstm.sqhsts[0] = (         int  )0;
       sqlstm.sqindv[0] = (         void  *)0;
       sqlstm.sqinds[0] = (         int  )0;
       sqlstm.sqharm[0] = (unsigned int  )0;
       sqlstm.sqadto[0] = (unsigned short )0;
       sqlstm.sqtdso[0] = (unsigned short )0;
       sqlstm.sqphsv = sqlstm.sqhstv;
       sqlstm.sqphsl = sqlstm.sqhstl;
       sqlstm.sqphss = sqlstm.sqhsts;
       sqlstm.sqpind = sqlstm.sqindv;
       sqlstm.sqpins = sqlstm.sqinds;
       sqlstm.sqparm = sqlstm.sqharm;
       sqlstm.sqparc = sqlstm.sqharc;
       sqlstm.sqpadto = sqlstm.sqadto;
       sqlstm.sqptdso = sqlstm.sqtdso;
       sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
       if (sqlca.sqlcode == 1403) break;
       if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


       gotoxy(x+15, y+8);
       printf("삭제 성공\n");   
       /* EXEC SQL COMMIT WORK ; */ 

{
       struct sqlexd sqlstm;
       sqlstm.sqlvsn = 13;
       sqlstm.arrsiz = 5;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )905;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)4352;
       sqlstm.occurs = (unsigned int  )0;
       sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
       if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 
   }
   else {
       gotoxy(x+8, y+7);
       printf("삭제를 취소합니다.\n");
   }
    
    /* EXEC SQL WHENEVER NOT FOUND DO break; */ 
  
   }
}

void deldel_ad(char *no){
/* EXEC SQL BEGIN DECLARE SECTION; */ 

    /* varchar v_ad_number[5]; */ 
struct { unsigned short len; unsigned char arr[5]; } v_ad_number;

    /* varchar v_ad_title[30]; */ 
struct { unsigned short len; unsigned char arr[30]; } v_ad_title;

    /* varchar v_advertiser_number[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } v_advertiser_number;


    char dynstmt[1000];
/* EXEC SQL END DECLARE SECTION; */ 

    
    
    /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 

    sprintf(dynstmt,"select *  from ad_info where ad_number = %s", no) ;

    printf("stmt:%s\n", dynstmt);

    /* EXEC SQL PREPARE S FROM :dynstmt ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 5;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )920;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)dynstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1000;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


    /* EXEC SQL DECLARE c_cursor CURSOR FOR S ; */ 
 
    /* EXEC SQL OPEN c_cursor ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 5;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )939;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 

  
    /* EXEC SQL WHENEVER NOT FOUND do break; */ 

    
    for(;;)
    {
        /* EXEC SQL FETCH c_cursor INTO :v_ad_number, :v_ad_title, :v_advertiser_number; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 5;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )954;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&v_ad_number;
        sqlstm.sqhstl[0] = (unsigned int  )7;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&v_ad_title;
        sqlstm.sqhstl[1] = (unsigned int  )32;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&v_advertiser_number;
        sqlstm.sqhstl[2] = (unsigned int  )12;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode == 1403) break;
        if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



       v_ad_number.arr[v_ad_number.len] = '\0';
       v_ad_title.arr[v_ad_title.len] = '\0';
       v_advertiser_number.arr[v_advertiser_number.len] = '\0';

       gotoxy(12, 15);
       printf("광고 고유 번호:%s 광고 제목:%s 광고자 고유번호:%s  \n", v_ad_number.arr, v_ad_title.arr, v_advertiser_number.arr);
    }
    /* EXEC SQL CLOSE c_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 5;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )981;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 
   
}




//modify
void mod_benefit(){ 
   /* EXEC SQL BEGIN DECLARE SECTION; */ 

   char dynstmt[1000];

   /* EXEC SQL END DECLARE SECTION; */ 



   char  benefit_point[5];
   char  coupon[20];
   char  benefit_number[10];

   textcolor(5, 0);
   /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 


   int x = 15;
   int y = 10;

   for (;;)
   {
    gotoxy(x,y);
    printf("이전에 입력한 고유번호에 해당하는 수정 값을 입력하세요\n");
    gotoxy(x+7,y+3);
    printf("혜택고유번호: ");
    gotoxy(x+30,y+3);
    gets(benefit_number);
    if(benefit_number[0] == '\0' ) {
        printf("%s\n", Bnumber);
        strcpy(benefit_number, Bnumber);
   }
    gotoxy(x+7,y+5);  
    printf("포인트:");
    gotoxy(x+30,y+5);
    gets(benefit_point);
    if( benefit_point[0] == '\0' ){
        printf("%s\n", Bpoint);
        strcpy(benefit_point, Bpoint);
   }
    gotoxy(x+7,y+7);
    printf("쿠폰개수:");
    gotoxy(x+30,y+7);
    gets(coupon);
    if( coupon[0]== '\0' ){
         printf("%s\n", Coupon);
         strcpy(coupon, Coupon);
   }
   sprintf(dynstmt,"update benefit set benefit_point= '%s',  coupon= '%s', benefit_number = '%s' where benefit_number = %s", benefit_point, coupon, benefit_number, Bnumber);
   /* EXEC SQL EXECUTE IMMEDIATE :dynstmt ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )996;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)dynstmt;
   sqlstm.sqhstl[0] = (unsigned int  )1000;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode == 1403) break;
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


   gotoxy(x+15, y+11);
   printf("Update Success\n");
   /* EXEC SQL COMMIT WORK ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1015;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


 }//for

 /* EXEC SQL WHENEVER NOT FOUND DO break; */ 
 
}//modify

void modmod_benefit(){
/* EXEC SQL BEGIN DECLARE SECTION; */ 

    /* varchar benefit_point[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } benefit_point;

    /* varchar coupon[14]; */ 
struct { unsigned short len; unsigned char arr[14]; } coupon;

    /* varchar benefit_number[13]; */ 
struct { unsigned short len; unsigned char arr[13]; } benefit_number;


    char dynstmt[1000];
/* EXEC SQL END DECLARE SECTION; */ 

    
    char no_temp1[10];
     
    /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 

   
    gotoxy(25,10);
    printf("업데이트할 혜택 고유 번호를 입력하세요:");
    fgets(no_temp1, 10, stdin); 
    no_temp1[strlen(no_temp1)-1] = '\0' ;  
   
   
    sprintf(dynstmt,"SELECT *  FROM benefit where benefit_number = %s", no_temp1) ;
   
    /* EXEC SQL PREPARE S FROM :dynstmt ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 5;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1030;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)dynstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1000;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


    /* EXEC SQL DECLARE c_cursor CURSOR FOR S ; */ 
 
    /* EXEC SQL OPEN c_cursor ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 5;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1049;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 

    /* EXEC SQL WHENEVER NOT FOUND do break; */ 

    for(;;)
    {
        /* EXEC SQL FETCH c_cursor INTO :benefit_point, :coupon, :benefit_number ; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 5;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1064;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&benefit_point;
        sqlstm.sqhstl[0] = (unsigned int  )102;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&coupon;
        sqlstm.sqhstl[1] = (unsigned int  )16;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&benefit_number;
        sqlstm.sqhstl[2] = (unsigned int  )15;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode == 1403) break;
        if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	    benefit_point.arr[benefit_point.len] = '\0';
	    coupon.arr[coupon.len] = '\0';
	    benefit_number.arr[benefit_number.len] = '\0';
            gotoxy(22,11);
	    printf("포인트:%s 쿠폰개수:%s 혜택 고유번호:%s \n", benefit_point.arr, coupon.arr, benefit_number.arr);
    }
        strcpy(Bpoint, benefit_point.arr); 
	strcpy(Coupon, coupon.arr);
	strcpy(Bnumber, benefit_number.arr);
    gotoxy(30, 12);
    printf("match tuple no : %d\n", sqlca.sqlerrd[2]);

    /* EXEC SQL CLOSE c_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 5;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1091;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 
}

