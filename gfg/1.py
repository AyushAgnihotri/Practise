def fibonacci(n) :
	fib[0]=t1
	fib[1]=t2
	if(fib[n]==-1 and n>1) :
		 fib[n]=(fibonacci(n-1)*fibonacci(n-1))+fibonacci(n-2)
		 return fib[n]
	return fib[n]


t1,t2,n = map(int,input().split())
fib = list([-1]*20)
print(fibonacci(n-1))