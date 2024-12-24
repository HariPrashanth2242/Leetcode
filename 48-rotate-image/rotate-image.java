class Solution {
    public void rotate(int[][] matrix) {
        int N = matrix.length;
        int temp,i,j;

        for( i = 0;i<N;i++){
            for(j = i;j<N;j++){
                temp = matrix[i][j];
                matrix[i][j]= matrix[j][i];
                matrix[j][i] = temp;
            }
        }

        for(i = 0;i<N;i++){
            for(j =0;j<N/2;j++){
                temp = matrix[i][j];
                matrix[i][j] = matrix[i][N-1-j];
                matrix[i][N-1-j]=temp;
            }
        }
    }

    }
