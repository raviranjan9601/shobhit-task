#include <stdio.h>
    int main(){
        float mark1 = 55, mark2 = 75, mark3 = 85;
        float sum, percentage, average;

        sum= mark1 + mark2 + mark3;
        average= sum / 3;
        percentage= (sum / 300)*100;
        
        printf("Total of 3 subjects:- %.2f\n", sum);
        printf("Percentage of 3 subjects: %.2f%%\n", percentage);
        //printf("Percentage of 3 subjects:- %.2f\n", percentage);
        printf("Average of 3 Subject:- %.2f\n", average);
        
        return 0;   
    }