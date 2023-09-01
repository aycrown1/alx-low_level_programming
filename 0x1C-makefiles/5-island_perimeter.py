#!/usr/bin/python3

"""
Module: island_perimeter

This module provides a function to calculate the perimeter of an island
described in a grid.

Grid cells are represented as follows:
- 0 represents a water zone.
- 1 represents a land zone.
- One cell is a square with a side length of 1.
- Grid cells are connected horizontally/vertically (not diagonally).
- The grid is rectangular, with a width and height that don't exceed 100.
- The grid is completely surrounded by water,
and there is one island (or nothing).
- The island doesn't have "lakes"
(water inside that isn't connected to the water around the island).
"""
def island_perimeter(grid):


    """
    Calculate the perimeter of the island described in the grid.

    Args:
        grid (list of list of int):
    Grid representing the island, where 0 is water and 1 is land.

    Returns:
        int: The perimeter of the island.
    """

    if not grid:
        return 0

    perimeter = 0
    rows, cols = len(grid), len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter
