userInput = input()
cards = []
score = 0
bonusScore = 0



for i in userInput:
    cards.append(i)
    
for i in cards:
    if i == 'T':
        score += 1
    elif i == 'C':
        score += 1
    elif i == 'G':
        score += 1
    if "TCG" in userInput or "GCT" in userInput or "CGT" in userInput or "TGC" in userInput or "CTG" in userInput:
        bonusScore += 1
    if bonusScore % 3 == 0:
        score += 7

print(score + bonusScore)