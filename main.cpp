#include <cstdio>
int main (){

    int score;
    printf( "Enter your score: ");
    scanf( "%d", &score);

    char grade;
    if(score >= 70){
        grade = 'A';
    } else if (score >= 60){
        grade = 'B';
    } else if (score >= 50){
        grade = 'C';
    } else if (score >= 40){
        grade = 'D';
    } else if (score <= 30){
        grade = 'E';
    } else {
        grade = 'F';
    }


printf( "Grade for students :%c\n", grade);

    return 0;

}