#Projeto de Simulador de Lava-Rápido em C

O projeto é um simulador interativo de um serviço de lava-rápido, implementado em linguagem C. O programa permite aos Usuários gerenciar e simular um ambiente virtual de lava-rápido, onde Carros são organizados em Filas de Espera para a lavagem. O programa visa emular as operações fundamentais de um lava-rápido real, apresentando um Menu intuitivo para a seleção de Ações.

##Funcionalidades Principais:

**Filas de Espera:**
O programa dispõe de duas Filas de Espera: uma para a Lavação e outra para a Rua.

**Adicionar Carros:**
Os Usuários podem adicionar Carros à Fila de Lavação. Se a Capacidade da Fila de Lavação for ultrapassada, os Carros excedentes são encaminhados para a Fila de Espera na Rua.

**Lavagem Simulada:**
A lavagem do Carro é simulada, seguindo etapas como a aplicação de Sabão, Água e Cera. Mensagens visuais são apresentadas para cada etapa.

**Movimentação de Filas:**
Após a lavagem de um Carro, ele é removido da Fila de Lavação. Se houver Carros na Fila de Espera da Rua, o primeiro Carro é movido para a Fila de Lavação.

**Consulta de Filas:**
Os Usuários podem consultar as Filas para visualizar os Carros aguardando lavagem, tanto na Fila de Lavação quanto na Fila da Rua.

**Interface Visual:**
O programa utiliza cores para aprimorar a experiência visual dos Usuários, criando um ambiente mais atraente no terminal.

**Melhorias Possíveis:**

- Implementação de tratamento de erros e validação de entrada do Usuário.
- Aprimoramento na gestão de memória, liberando memória alocada quando não é mais necessária.
- Uso de estruturas de dados mais eficientes, como Filas Circulares, para o gerenciamento das Filas.
- Introdução de recursos avançados, como a simulação de um sistema de pagamento.

**Observação:**
Este projeto é um exemplo educacional de programação em C e simulação de sistemas simples. Em cenários reais, ele pode ser expandido com recursos adicionais e otimizações para aumentar a robustez e a funcionalidade.
