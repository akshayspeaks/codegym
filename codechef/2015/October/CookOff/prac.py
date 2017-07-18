strs=['sadjkabscjasncjkasgracefknvfjdkvfdjv', 'graceful', 'gracefully', 'disgraceful']
start=mxlen=0
stop=1
mxterm=''
while start<len(strs[0]) and stop <len(strs[0])+1:
    temp=strs[0][start:stop]
    valid=True
    for ph in strs[1:]:
        if temp not in ph:
            valid=False
            break
    #print(temp," is valid ",valid)
    if not valid:
        start+=1
        if stop<=start:
            stop=start+1
    else:
        if mxlen<len(temp):
            mxlen=len(temp)
            mxterm=temp
        stop+=1
print(mxterm)
