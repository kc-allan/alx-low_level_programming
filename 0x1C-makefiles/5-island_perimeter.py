#!/usr/bin/python3
"""Creates a function that returns the perimeter of a grid"""


def island_perimeter(grid):
	"""Returns the perimeter of the grid"""
	perimeter = 0
	for row in range(len(grid)):
		for col in range(len(grid[row])):
			if grid[row][col] == 1:
				if grid[row-1][col] == 0:
					perimeter += 1
				if grid[row][col-1] == 0:
					perimeter += 1
				if grid[row+1][col] == 0:
					perimeter += 1
				if grid[row][col+1] == 0:
					perimeter += 1				

	return perimeter