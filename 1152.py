#백준 1152번 문제 - (단어의 개수) 

def Word_Count(str):
  words = str.strip().split(' ')
  words = [word for word in words if word != ""]
  return len(words)

str = input()
print(Word_Count(str))