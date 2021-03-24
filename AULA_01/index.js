const fs = require('fs');
const path = require('path');

;(async() => {
    const inst = fs.readFileSync(path.resolve(__dirname, 'text.txt'),'utf-8');
    console.clear();
    const text = 
`Olá professor!
Me chamo Caio
Estou estudando nodejs há algum tempo 
E queria testar um pouco da minha logica por isso que te mandei essa aplicação
Poderia ter feito uma simples uma simples instrução no nodepad ? Poderia 
Mas sempre tem aquele aluno que é exibido, e eu sou um deles desculpe! 
Caso não queira perder o seu tempo vendo esses textos, vc podera acessar o text.txt, e poder ter acesso direto as instruções,
    
Não foi embora ainda ? Belezinha vamos começar 

${inst}`;
    let i = 0;
    let textRender = '';
    
    setInterval(() => {
        if(i >= text.length)
            return clearInterval();
        console.clear();
        textRender = `${textRender}${text[i]}`;
        console.log(textRender);
        i ++;
    },50); 
})();

