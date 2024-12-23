def mirror_across_primary_diagonal(matrix):
    n = len(matrix)
    for i in range(n):
        for j in range(i+1,n):
            matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]
    return matrix

def mirror_across_secondary_diagonal(matrix):
    n = len(matrix) - 1
    for i in range(n):
        for j in range(n - i):
            print([i],[j],[n - j],[n - i])
            matrix[i][j], matrix[n - j][n - i] = matrix[n - j][n - i], matrix[i][j]
    return matrix

matrix = [[1, 2, 3],
          [4, 5, 6],
          [7, 8, 9]]

print("Original matrix:")
for row in matrix:
    print(row)

primary_mirrored = mirror_across_primary_diagonal([row[:] for row in matrix])

print("\nMatrix mirrored across the primary diagonal:")
for row in primary_mirrored:
    print(row)

secondary_mirrored = mirror_across_secondary_diagonal([row[:] for row in matrix])

print("\nMatrix mirrored across secondary diagonals:")
for row in secondary_mirrored:
    print(row)
