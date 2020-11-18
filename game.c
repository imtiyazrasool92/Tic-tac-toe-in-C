#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define size 3
int countMove = 0;
char board[size][size];

void playX();
void playO();
void moveO();
void moveX();
int check(int);
void draw();
int checkWinner(char);
void winner(char);

int main(){

    int input;
    while(1){
        printf("1 : Play with X\n");
        printf("2 : Play with O\n");
        printf("3 : Exit\n");
        printf("Enter Choice : ");
        scanf("%d",&input);
        if(input==1){
            system("clear");
            playX();
        } else if(input==2){
            system("clear");
            playO();
        } else if(input==3){
            system("clear");
            printf("Exit... !");
            break;
        } else {
            printf("Wrong Input\n");
            sleep(1);
            }
        system("clear");
        break;
        }
        draw();
}

void playX(){

    srand(time(0));
    int r=0;
    int x=0;

     while(1){
        draw();
        while(1){
            printf("Enter Move : ");
            scanf("%d",&x);
            if(check(x)==0){
                break;
            }
            printf("Wrong Input");      
        }
        moveX(x);
        if(countMove>4){
            if(checkWinner('x')==1){
                winner('x');
            }
        }
        system("clear");
        draw();
        if(countMove==9){
            break;
        }
          sleep(1);
        while(1){
            r=1+rand()%9;
            if(check(r)==0){
                break;
            }
        }
        moveO(r);
       if(countMove>4){
            if(checkWinner('o')==1){
                winner('o');
            }
        }
        system("clear");
    }

}

void playO(){

    srand(time(0));
    int r=0;
    int x=0;
    
     while(1){
        draw();
        sleep(1);
        while(1){
            r=1+rand()%9;
            if(check(r)==0){
                break;
            }
        }
        moveX(r);
        if(countMove>4){
            if(checkWinner('x')==1){
                winner('x');
            }
        }
        system("clear");
        draw();
         if(countMove==9){
            break;
        }
        while(1){
            printf("Enter Move : ");
            scanf("%d",&x);
            if(check(x)==0){
                break;
            }
            printf("Wrong Input");      
        }
        moveO(x);
          if(countMove>4){
            if(checkWinner('o')==1){
                winner('o');
            }
        }
        system("clear");
    }

}

void draw(){
    for(int i=0;i<=20;i++){
        printf("-");
    }
    printf("\n");
    printf("   %c   |   %c   |  %c \n",board[0][0],board[0][1],board[0][2]);
    for(int i=0;i<=20;i++){
        printf("-");
    }
    printf("\n");
    printf("   %c   |   %c   |  %c \n",board[1][0],board[1][1],board[1][2]);
     for(int i=0;i<=20;i++){
        printf("-");
    }
    printf("\n");
    printf("   %c   |   %c   |  %c \n",board[2][0],board[2][1],board[2][2]);
}

void moveX(int key){
        switch (key)
        {
        case 1:
        board[0][0]='x';
        countMove++;
            break;
        case 2:
        board[0][1]='x';
        countMove++;
            break;
        case 3:
        board[0][2]='x';
        countMove++;
            break;  
        case 4:
        board[1][0]='x';
        countMove++;
            break;
        case 5:
        board[1][1]='x';
        countMove++;
            break;
        case 6:
        board[1][2]='x';
        countMove++;
            break;    
        case 7:
        board[2][0]='x';
        countMove++;
            break;
        case 8:
        board[2][1]='x';
        countMove++;
            break;
        case 9:
        board[2][2]='x';
        countMove++;
            break;      
        }
}

void moveO(int key){
        switch (key)
        {
        case 1:
        board[0][0]='o';
        countMove++;
            break;
        case 2:
        board[0][1]='o';
        countMove++;
            break;
        case 3:
        board[0][2]='o';
        countMove++;
            break;  
        case 4:
        board[1][0]='o';
        countMove++;
            break;
        case 5:
        board[1][1]='o';
        countMove++;
            break;
        case 6:
        board[1][2]='o';
        countMove++;
            break;    
        case 7:
        board[2][0]='o';
        countMove++;
            break;
        case 8:
        board[2][1]='o';
        countMove++;
            break;
        case 9:
        board[2][2]='o';
        countMove++;
            break;      
        }
}

int check(int key){
        switch (key)
        {
            case 1:
            if(board[0][0]!='x'&&board[0][0]!='o'){
                return 0;
            } else {
                return 1;
            }
            break;
            case 2:
            if(board[0][1]!='x'&&board[0][1]!='o'){
                return 0;
            } else {
                return 1;
            }
            break;
             case 3:
            if(board[0][2]!='x'&&board[0][2]!='o'){
                return 0;
            } else {
                return 1;
            }
            break;
             case 4:
            if(board[1][0]!='x'&&board[1][0]!='o'){
                return 0;
            } else {
                return 1;
            }
            break;
             case 5:
            if(board[1][1]!='x'&&board[1][1]!='o'){
                return 0;
            } else {
                return 1;
            }
            break;
             case 6:
            if(board[1][2]!='x'&&board[1][2]!='o'){
                return 0;
            } else {
                return 1;
            }
            break;
             case 7:
            if(board[2][0]!='x'&&board[2][0]!='o'){
                return 0;
            } else {
                return 1;
            }
            break;
             case 8:
            if(board[2][1]!='x'&&board[2][1]!='o'){
                return 0;
            } else {
                return 1;
            }
            break;
             case 9:
            if(board[2][2]!='x'&&board[2][2]!='o'){
                return 0;
            } else {
                return 1;
            }
            break;
        }
}

int checkWinner(char c){
    if(c==board[0][0]&&c==board[0][1]&&c==board[0][2]){
        return 1;
    } else if(c==board[1][0]&&c==board[1][1]&&c==board[1][2]){
        return 1;
    } else if(c==board[2][0]&&c==board[2][1]&&c==board[2][2]){
        return 1;
    }else if(c==board[0][0]&&c==board[1][0]&&c==board[2][0]){
        return 1;
    }else if(c==board[0][1]&&c==board[1][1]&&c==board[2][1]){
        return 1;
    } else if(c==board[0][2]&&c==board[1][2]&&c==board[2][2]){
        return 1;
    } else if(c==board[0][2]&&c==board[1][1]&&c==board[2][0]){
        return 1;
    } else if(c==board[0][0]&&c==board[1][1]&&c==board[2][2]){
        return 1;
    } else {
        return 0;
    }
}

void winner(char w){
    system("clear");
    draw();
    printf("%c is winner",w);
    exit(0);
}
