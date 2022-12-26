/*
Write a program to process a collection of scores obtained by students of a class of certain
strength . Your program should count and print the number of students with Grade A ( 80 and
higher), Grade B(65-79), Grade C(40-64) and Grade F(39 and below) . Ensure that the entered scores
must remain in between 0 and 100(inclusive). Test your program on the following data:
-23 567 65 12 89 32 17 45 41 58 60 78 82 88 19 22 70 88 41 89 78 79 72 68 74 59 75 81 44 59 -23 -12
(a) Read the same input from a file and use endfile controlled loop to implement the above program.
Include codes to neglect rest of the line if faulty input is received during data entry. (b) Modify your
program to display the average marks (a real number) for the subject at the end of the run.
*/

#include <stdio.h>
int main(){
    FILE *inp;
    FILE *outp;
    double score, sum = 0;
    int input_status;
    inp = fopen("input.txt", "r");
    outp = fopen("output.txt", "w");
    int c_a = 0, c_b = 0, c_c = 0, c_f = 0, co = 0;
    input_status = fscanf(inp, "%lf", &score);
    while (input_status == 1){
        if (score >= 0 && score <= 100){
            if (score >= 80){
                c_a++;
            }
            else if (score >= 65){
                c_b++;
            }
            else if (score >= 40){
                c_c++;
            }
            else{
                c_f++;
            }
            co++;
            sum += score;
        }
        input_status = fscanf(inp, "%lf", &score);
    }
    fprintf(outp, "A -> %d\nB -> %d\nC -> %d\nF -> %d", c_a, c_b, c_c, c_f);
    fclose(inp);
    fclose(outp);
    printf("Average = %lf", sum / 28);
    return (0);
}