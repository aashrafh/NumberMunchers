f = open("player.txt", "r")
arr = []
for x in f:
	for color in x.split(', '):
		arr.append(color)
ans = []
for color in arr:
	new_color = color[2:]
final_ans = ', '.join(ans)
wf = open("final_player.txt", "a")
wf.write(final_ans)
wf.close()