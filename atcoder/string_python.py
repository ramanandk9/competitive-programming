def calc_cost(s,size):
	cost=9;
	count=1
	i=0
	temp=0
	for i in range(0,len(s)-2*size+1,size):
		if s[i:i+size]==s[i+size:i+2*size]:
			count+=1
		else:
			cost+=size
			if count>1:
				cost+=2
			cost+=3
			count=1
			temp+=1
	if count>1:
		cost+=2+size
		if temp>0:
			cost+=3
	elif count==1:
		cost+=2+size
		if temp>0:
			cost+=3
	return cost

def print_func(s,size):
	n=len(s)
	a='print("'
	count=1
	i=0
	temp=0
	for i in range(0,len(s)-2*size+1,size):
		if s[i:i+size]==s[i+size:i+2*size]:
			count+=1
		else:
			a=a+s[i:i+size]+'"'
			if count>1:
				a=a+'*'+str(count)
			a=a+'+'+'"'
			count=1
			temp+=1
	if count>1:
		a+=s[i:i+size]+'"'+'*'+str(count)+')'
	elif count==1:
		a+=s[i:i+size]+'"'+')'
	print(1)
	print(a)

def main():
	n=int(input())
	s=input()
	size=1
	cost=len(s)+9
	for i in range(1,n//2+1,1):
		n_cost=calc_cost(s,i)
		if cost>n_cost:
			cost=n_cost
			size=i
		print(i,' ',n_cost)
	if cost==len(s)+9:
		print('print("'+s+'")')
	else:
		print_func(s,size)

if __name__=='__main__':
	main()