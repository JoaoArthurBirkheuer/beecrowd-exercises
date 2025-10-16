while True:
    try:
        N = int(input())
        carnes = {}
        for _ in range(N):
            nome, di = input().split()
            di = int(di)
            carnes[di] = nome
        carnes_ordenadas = [carnes[di] for di in sorted(carnes)]
        print(' '.join(carnes_ordenadas))
    except EOFError:
        break