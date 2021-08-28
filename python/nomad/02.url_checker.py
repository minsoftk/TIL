import requests


x = 'y'

while(x == 'y'):
  sort_sites=[]

  print("Welcome to economy scrapper.py!")
  urls = input("Please write a URL or URLS you want to check.(separated by comma)\n")
  
  urls = urls.split(',')
  for i in urls:
    for j in i:
      j.lower()
    if '.' not in i:
      print(i +" is invalid URL!!")
      continue;
    sort_sites.append("https://www."+ i.strip('w.htp:/ '))
    
  
  for i in sort_sites:
    try:
      res = requests.get(i)
      if res.status_code == 200:
        print(i+ " is up!\n")
      else:
        print(i + " is down!\n")
    except:
      print(i + " is down!\n")
      
  while(1):
    x=input("Do you want restart?(y/n)")
    if (x != 'y' and x != 'n'):
      print("invalid answer")
    elif x == 'y':
      break;
    elif x =='n':
      print("okay bye bye~")
      break;
