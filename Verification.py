while 1:
    try:
        max_l = []
        num = list(map(int, input()))
        num_cpy = num.copy()
        for i in range(2):
            max_l.append(max(num))
            num.pop(num.index(max(num)))
        max_l = max_l[0]**2 + max_l[1]**2
        # print("max_l >>", max_l)
        if (num_cpy[6]*100 + num_cpy[7]*10 + num_cpy[8]) == max_l:
            print("Good Morning!")
        else:
            print("SPY!")   
    except EOFError:
        break
