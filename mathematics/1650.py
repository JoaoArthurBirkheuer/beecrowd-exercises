import sys

def count_chessboards(n, m, c):
    total_boards = (n - 7) * (m - 7)
    
    # Contando quantos desses tabuleiros têm canto inferior direito branco
    # O padrão de cores segue uma alternância baseada em (n, m)
    if (n % 2) == (m % 2):  # Mesmo tipo de paridade
        white_boards = (total_boards + c) // 2
    else:  # Paridades diferentes
        white_boards = (total_boards + (1 - c)) // 2

    return white_boards

def main():
    input_data = sys.stdin.read().strip().split("\n")
    
    for line in input_data:
        n, m, c = map(int, line.split())
        if n == 0 and m == 0 and c == 0:
            break
        print(count_chessboards(n, m, c))

if __name__ == "__main__":
    main()
