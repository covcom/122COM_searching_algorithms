def duplicates( values ):
	# COMPLETE ME

	return False

if __name__ == '__main__':
	# === print user instructions ======
	print( "Enter a series of numbers, one at a time." )

	# === get user input ======
	inputs = []
	while not duplicates(inputs):
		inpt = int(input(''))
		inputs.append( inpt )

	# === confirm to the user what they entered ======
	print( "You entered :", ', '.join( inputs ) )
