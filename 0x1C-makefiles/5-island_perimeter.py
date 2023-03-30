#!/usr/bin/python3
"""
Module 5
"""

def island_perimeter(grid):
    """
    Returns perimeter of the island described in Grid
    Grid is a list of integers where:
        0 represents water zone
        1 represents land zone
        one cell is a square with side length = 1
        grid cells are connected horizontally or vertically, not diagonally
        grid is rectangular with max side length = 100
        Grid is completely surrounded by water with inside one or no islands
        there are no lakes - all water is connected to each other
    """
    p = 0
    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                return