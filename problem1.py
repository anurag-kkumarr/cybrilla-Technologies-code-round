n,k = map(int,input().split())
ar = list(map(int,input().split()))


ans = 0

ar.sort(reverse =True)
s = set()
for i in range(n):
    if len(s) == k:
        break
    else:
        ans += ar[i]
        s.add(ar[i])

while i < n and ar[i] == ar[i-1]:
    ans += ar[i]
    i += 1

print(ans)