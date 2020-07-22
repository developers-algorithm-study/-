inp = input().split('-')
if inp[1][0] == '1':
    print("19" + inp[0][:2] + "/" + inp[0][2:4] + "/" + inp[0][4:] + " M")
elif inp[1][0] == '2':
    print("19" + inp[0][:2] + "/" + inp[0][2:4] + "/" + inp[0][4:] + " F")
elif inp[1][0] == '3':
    print("20" + inp[0][:2] + "/" + inp[0][2:4] + "/" + inp[0][4:] + " M")
else:
    print("20" + inp[0][:2] + "/" + inp[0][2:4] + "/" + inp[0][4:] + " F")
