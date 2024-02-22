#!/usr/bin/python3
""" Module that contains the island_perimeter function """


def island_perimeter(grid):
    """ Function that returns the perimeter of island described in grid """
    perimeter = 0
    rows_num = len(grid)
    if grid != []:
        columns_num = len(grid[0])
    for i in range(rows_num):
        for j in range(columns_num):
            if grid[i][j] == 1:
                if (i - 1) == -1 or grid[i - 1][j] == 0:
                    perimeter += 1
                if (i + 1) == rows_num or grid[i + 1][j] == 0:
                    perimeter += 1
                if (j - 1) == -1 or grid[i][j - 1] == 0:
                    perimeter += 1
                if (j + 1) == columns_num or grid[i][j + 1] == 0:
                    perimeter += 1
    return perimeter
