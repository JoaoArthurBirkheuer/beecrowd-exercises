while True:
    nVagoes = int(input())
    if nVagoes == 0:
        break
    
    while True:
        saida = input().strip()
        if saida == "0":
            break
        
        saida = list(map(int, saida.split()))
        entrada = list(range(1, nVagoes + 1))
        estacao = []
        j = 0
        possivel = True
        
        for vagon in entrada:
            estacao.append(vagon)
            
            while estacao and j < len(saida) and estacao[-1] == saida[j]:
                estacao.pop()
                j += 1
        
        # Verifica se todos os elementos de saida foram encontrados
        if j == len(saida):
            print("Yes")
        else:
            print("No")
    print("")
