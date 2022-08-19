class Solution(object):
    def rotate(self, matrix):
        firstM = matrix.copy()
        secondM = matrix.copy()

        #Intialize new matrix dimensions
        rowmax = secondM.shape[0] - 1
        colmax = secondM.shape[1] - 1

        # Iterate Through Image Matrix
        for row in range(rowmax):
            for col in range(colmax):
                secondM[row][colmax - col] = firstM[row][col]
