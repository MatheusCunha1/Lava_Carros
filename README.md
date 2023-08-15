Projeto de Simulador de Lava-Rápido em C

O projeto é um simulador interativo de serviço de lava-rápido implementado em linguagem C. O programa oferece aos usuários a oportunidade de gerenciar e simular um ambiente de lava-rápido, onde carros são adicionados a filas de espera para lavagem. O programa visa replicar as operações básicas de um lava-rápido real e apresenta um menu intuitivo para a seleção de ações.

Funcionalidades Principais:

Filas de Espera: O programa possui duas filas de espera: uma para a lavação e outra para a rua.
Adicionar Carros: Os usuários podem adicionar carros à fila de lavação. Se a capacidade da fila de lavação for excedida, os carros excedentes são colocados na fila de espera na rua.
Lavagem Simulada: O processo de lavagem é simulado, dividido em etapas como aplicação de sabão, água e cera. Mensagens visuais são exibidas para cada etapa.
Movimentação de Filas: Após a lavagem de um carro, ele é removido da fila de lavação. Se houver carros na fila de espera na rua, o primeiro carro é movido para a fila de lavação.
Consulta de Filas: Os usuários podem consultar as filas para ver os carros aguardando lavagem, tanto na fila de lavação quanto na fila da rua.
Interface Visual: O programa utiliza cores para melhorar a experiência visual do usuário, criando um ambiente mais atraente no terminal.
Melhorias Possíveis:

Implementação de manipulação de erros e validação de entrada do usuário.
Aprimoramento da gestão de memória, liberando memória alocada quando não for mais necessária.
Uso de estruturas de dados mais eficientes para gerenciar as filas, como filas circulares.
Introdução de recursos avançados, como um sistema de pagamento simulado.
Nota: Este projeto serve como um exemplo educacional de programação em C e simulação de sistemas simples. Em cenários reais, ele pode ser expandido com recursos adicionais e otimizações para torná-lo mais robusto e funcional.
