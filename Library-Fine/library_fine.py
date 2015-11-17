import os
import sys
import re

def main():
	returnDay, returnMonth, returnYear = map( (int), input().split() )
	day, month, year = map( (int), input().split() )

	# 	Calculate fine
	if year < returnYear:
		fine = 10000
	elif year > returnYear:
		fine = 0
	elif month < returnMonth:
		fine = 500 * ( returnMonth - month )
	elif month > returnMonth:
		fine = 0
	elif day < returnDay:
		fine = 15 * ( returnDay - day )
	else:
		fine = 0

	print( fine )

if __name__ == "__main__":
	main()
