const fs = require('fs');
const input = fs.readFileSync('/dev/stdin', 'utf8');
const lines = input.trim().split('\n');

let index = 0;

while (true) {
    // Ler valores N (alumni) e D (dinners)
    const [N, D] = lines[index++].split(' ').map(Number);

    if (N === 0 && D === 0) break; // Encerrar ao encontrar 0 0

    // Inicializar array de frequência para todos os alumni
    let attendance = new Array(N).fill(1);

    // Processar as próximas D linhas para atualizações
    for (let i = 0; i < D; i++) {
        const dinner = lines[index++].split(' ').map(Number);
        attendance = attendance.map((attended, j) => attended & dinner[j]);
    }

    // Verificar se existe pelo menos um alumni que participou de todos os jantares
    const result = attendance.includes(1) ? 'yes' : 'no';
    console.log(result);
}