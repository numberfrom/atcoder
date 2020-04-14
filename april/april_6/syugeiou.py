N = int(input())
S = input()

accessory = ["b"]

ans = 0

procedure = 1
while len(S) != len(accessory) and len(S) > len(accessory):
    if procedure == 1:
        accessory.append("c")
        accessory.reverse()
        accessory.append("a")
        accessory.reverse()

        procedure = 2

    elif procedure == 2:
        accessory.append("a")
        accessory.reverse()
        accessory.append("c")
        accessory.reverse()

        procedure = 3

    elif procedure == 3:
        accessory.append("b")
        accessory.reverse()
        accessory.append("b")
        accessory.reverse()

        procedure = 1

    ans += 1

if len(S) != len(accessory) or S.count("a")+S.count("b")+S.count("c") != len(S):
    print("-1")

else:
    print(ans)
