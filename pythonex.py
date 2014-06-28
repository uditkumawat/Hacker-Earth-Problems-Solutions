count=0
total=0
while(True):
	inp=raw_input('Enter a number')

	#handle edge cases
	if(inp=='done'):
		break
	if(len(inp)<1):
		break
	
	try:
		num=float(inp)
	except:
		print('Invalid Input')
		continue
	count=count+1
	total=total+num

print('Average:',total/count)

