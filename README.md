# RegularExpressionToNFA

Fluxo simples do algoritmo

Definicoes:

  Alfabeto = letras como: (a,b,A,C)
  
  Operadores:
  
    "()" - subcadeia
    
    "." - concatenação
    
    "|" - União
    
    "*" - Estrela

1- Leio a Expressao Regular

2 - Converto a expressao de Infix para PostFix

  Usando o algoritmo Shunting-yard algorithm, modificado para expressao regulares
  
  https://en.wikipedia.org/wiki/Shunting-yard_algorithm
  
  
3 - Construindo o NFA

  conforme irei lendo os elementos das pilha em Postfix, irei construindo o NFA conforme a pg. 70-71 do Sipser.
  
  Irei construir conforme uma 5-upla (Q, ε "Épsilon", δ "Delta", q0, F)
  
4 - Printo a estrutura

