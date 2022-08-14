#include <iostream>
#include <random>
#include <conio.h>
#include <stdlib.h>
#include <Windows.h>
using namespace std;

bool print;
bool gameover;
int head_x, head_y, fruit_x, fruit_y;
const int height = 20;
const int width = 50;
int tail_x[100], score = 0;
int tail_y[100];
int ntail = 0;
enum direction
{
    stop,
    fd,
    bk,
    rt,
    lt
};
direction dir;

void setup()
{
    gameover = false;
    dir = stop;
    head_x = width / 2;
    head_y = height / 2;
label1:
    fruit_x = rand() % width;
    if (fruit_x == 0)
        goto label1;
label2:
    fruit_y = rand() % height;
    if (fruit_y == 0)
        goto label2;
}
void draw()
{
    system("cls");
    for (int i = 0; i < width; i++)
    {
        cout << "#";
    }
    cout << endl;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width + 2; j++)
        {
            if (j == 0)
            {
                cout << "#";
            }

            else if (j == width - 1)
            {
                cout << "#";
            }
            else if (i == fruit_y && j == fruit_x)
            {
                cout << "*";
            }
            else if (i == head_y && j == head_x)
            {
                cout << "O";
            }
            else
            {
                print = false;
                for (int k = 0; k < ntail; k++)
                {
                    if (tail_x[k] == j && tail_y[k] == i)
                    {
                        cout << "o";
                        print = true;
                    }
                }
                if (!print)
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    for (int i = 0; i < width; i++)
    {
        cout << "#";
    }
    cout << endl;
}
void input()
{
    while (kbhit())
    {
        switch (getch())
        {
        case ('w'):
            dir = fd;
            break;
        case ('a'):
            dir = lt;
            break;
        case ('d'):
            dir = rt;
            break;
        case ('s'):
            dir = bk;
            break;
        case ('x'):
            gameover = true;
            break;
        }
    }
}
void logic()
{
    int prev_x = tail_x[0];
    int prev_y = tail_y[0];
    int prev_2x, prev_2y;
    tail_x[0] = head_x;
    tail_y[0] = head_y;
    for (int i = 1; i < ntail; i++)
    {
        if (head_x == tail_x[i] && head_y == tail_y[i])
        {
            gameover = true;
            cout << "Gameover!!" << endl;
            cout << "your score: " << score;
        }
        prev_2x = tail_x[i];
        prev_2y = tail_y[i];
        tail_x[i] = prev_x;
        tail_y[i] = prev_y;
        prev_x = prev_2x;
        prev_y = prev_2y;
    }

    switch (dir)
    {
    case fd:
        Sleep(30);
        head_y--;
        break;
    case bk:
        Sleep(30);
        head_y++;
        break;
    case rt:
        head_x++;
        break;
    case lt:
        head_x--;
        break;
    default:
        break;
    }
    if (fruit_x == head_x && fruit_y == head_y)
    {
    label3:
        fruit_x = rand() % width;
        if (fruit_x == 0)
            goto label3;
    label4:
        fruit_y = rand() % height;
        if (fruit_y == 0)
            goto label4;
        ntail++;
        score += 10;
    }
    if (head_x == width || head_y == height || head_x < 0 || head_y < 0)
    {
        gameover = true;
        cout << "Gameover!!" << endl;
        cout << "your score: " << score;
    }
}
int main(int argc, char const *argv[])
{
    setup();
    while (!gameover)
    {

        draw();
        input();
        logic();
        Sleep(80);
    }

    return 0;
}
