def isAnagram(string1,string2):
  if len(string1)!=len(string2):
    return 0
  string1 = sorted(string1)
  string2 = sorted(string2)
  for i in range(0, len(string1)):
    if string1[i] != string2[i]:
      return 0
  return("Yes")

if __name__=="__main__":
  t = int(input().strip());
  for i in range(t):
    string1 = input().strip();
    string2 = input().strip();
    answer = isAnagram(string1,string2);
    if (answer):
      print("Yes");
    else:
      print("No");
