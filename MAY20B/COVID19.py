# cook your dish here
#Just in case
#WistfulPeace_7
t=int(input())
for x in range(t):
	ans=[]
	n=int(input())
	line=list(map(int,input().split()))
	count = 0;
	for i in range(len(line)):
		if ((line[i])-(line[i-1])<=2):
			count+=1
		else:
			ans.append(count)
			count=1
	ans.append(count)
	if (len(ans)>1):
		print(str(min(ans))+' '+str(max(ans)))
	else:
		print (str(ans[0])+' '+str(ans[0]))