# 🧽 Simulador de Lava-Rápido 🚗

## 📖 Descrição

Este é um projeto acadêmico desenvolvido em **linguagem C**, que simula de forma interativa o funcionamento de um serviço de **lava-rápido**. O programa permite aos usuários gerenciar um ambiente virtual com **filas de carros**, proporcionando uma experiência próxima à de um sistema real.

A aplicação apresenta um **menu intuitivo** para facilitar a navegação e a escolha das ações, como adicionar carros, iniciar lavagem e consultar o estado atual das filas.

---

## ⚙️ Funcionalidades Principais

- 🅿️ **Filas de Espera**  
  O sistema utiliza duas filas:  
  - **Fila de Lavação**  
  - **Fila de Espera na Rua** (caso a fila de lavação esteja cheia)

- 🚘 **Adicionar Carros**  
  Carros são adicionados à fila de lavação. Caso atinja o limite de capacidade, os carros excedentes são enviados para a fila da rua.

- 💦 **Lavagem Simulada**  
  A lavagem do carro passa por etapas simuladas como:
  - Aplicação de sabão  
  - Enxágue com água  
  - Enceramento com cera  
  Cada etapa é apresentada com mensagens visuais no terminal.

- 🔁 **Movimentação entre Filas**  
  Após a lavagem de um carro, ele é removido da fila de lavação. Se houver carros aguardando na fila da rua, o primeiro da fila é movido para a lavação.

- 👀 **Consulta de Filas**  
  Permite visualizar os carros nas duas filas (lavação e rua), facilitando o acompanhamento do processo.

- 🎨 **Interface Visual no Terminal**  
  Uso de cores para tornar a interface mais agradável e informativa.

---

## 💡 Melhorias Futuras

- ✅ Tratamento de erros e validação de entrada do usuário  
- 🧠 Melhor gerenciamento de memória (liberação de alocação dinâmica)  
- 🔄 Uso de **filas circulares** para maior eficiência  
- 💳 Simulação de sistema de pagamento e recibos  
- 🧩 Interface gráfica para versão futura (opcional)

---

> ⚠️ **Observação**: Este projeto tem fins **educacionais**, com o objetivo de demonstrar conceitos de estruturas de dados, filas e simulação em C. Pode ser expandido para fins mais robustos ou aplicações reais com melhorias adicionais.

