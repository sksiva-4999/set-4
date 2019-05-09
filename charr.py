n=input()
d=0
for i in n:
	if not( i.isalpha() or i.isdigit() or i==" "): 
		d+=1
print(d)
