#include <stdio.h>
#define SIZE 3
void inputMatrix(int matrix[SIZE][SIZE]) {
int i;
int j;
for (i = 0; i < SIZE; i++) {
for (j = 0; j < SIZE; j++) {
scanf("%d", &matrix[i][j]);
}
}
}
int sumUpperTriangular(int matrix[SIZE][SIZE]) {
int sum = 0;
int i;
int j;
for (i = 0; i < SIZE; i++) {
for (j = i; j < SIZE; j++) {
if (i == j) break;
sum += matrix[i][j];
}
}
return sum;
}
int main() {
int matrix[SIZE][SIZE];
printf("Enter the matrix elements:\n");
inputMatrix(matrix);
int sum = sumUpperTriangular(matrix);
printf("Sum of upper triangular elements: %d\n", sum);
return 0;
}
