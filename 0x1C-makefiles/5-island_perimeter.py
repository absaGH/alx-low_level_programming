#!/usr/bin/python3
"""Defines a function that returns island perimeter"""


def island_perimeter(grid):
    """Return the perimiter of an island represented in grid"""
    w = len(grid[0])
    h = len(grid)
    edges = 0
    perm = 0

    for i in range(h):
        for j in range(w):
            if grid[i][j] == 1:
                perm += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return perm * 4 - edges * 2
