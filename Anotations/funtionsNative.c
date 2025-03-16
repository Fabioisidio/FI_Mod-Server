// Função que retorna a instância principal do jogo
GetGame();

// Função que retorna a instância do UIManager, que gerencia a interface do usuário
GetUIManager();

// Função que retorna o menu atualmente aberto no jogo
GetMenu();

// Função que verifica se o personagem do jogador está vivo
player.IsAlive();

// Função que verifica se o personagem do jogador está inconsciente
player.IsUnconscious();

// Função que substitui a velocidade de movimento do jogador
player.GetInputController().OverrideMovementSpeed(run, speed);

// Função que substitui o ângulo de movimento do jogador
player.GetInputController().OverrideMovementAngle(run, angle);

// Função que retorna o controlador de entrada do jogador (para verificar teclas pressionadas)
player.GetInputController();

// Função que envia um RPC para o servidor ou outro jogador (comunicação entre cliente e servidor)
GetGame().RPCSingleParam(player, FI_RPC_AUTORUN, new Param3<int, int, bool>(speed, angle, run), true);

// Função que retorna a API de entrada do usuário (para verificar teclas pressionadas)
GetUApi();

// Função que retorna o objeto de entrada relacionado ao nome da tecla fornecida
GetUApi().GetInputByName(keyCheck);

// Constante que representa a tecla "+" no teclado numérico
KeyCode.KC_ADD;

// Constante que representa a tecla "W" (movimento para frente)
KeyCode.KC_W;

// Constante que representa a tecla "S" (movimento para trás)
KeyCode.KC_S;

// Constante que representa a tecla "A" (movimento para a esquerda)
KeyCode.KC_A;

// Constante que representa a tecla "D" (movimento para a direita)
KeyCode.KC_D;

// Constante que representa a tecla "ESC" (Escape)
KeyCode.KC_ESCAPE;

// Função que verifica se a tecla pressionada corresponde a um valor específico
CheckKeyPress(int key);

// Função que verifica se uma tecla está sendo segurada
CheckKeyHold(string keyCheck);

// Função que inicializa o AutoRun para o jogador com uma velocidade, ângulo e estado
InitAutoRun(PlayerBase player, int speed, int angle, int run);

// Função que define as teclas responsáveis por parar a corrida automática
SetCheckStopKeys();

// Função que verifica se a tecla "Shift" (Turbo) está sendo segurada
CheckKeyHold("UATurbo");

// Função que verifica se a tecla "Ctrl" (Walk/Run Temp) está sendo segurada
CheckKeyHold("UAWalkRunTemp");

// Função que percorre todas as teclas armazenadas em 'inputs' e verifica se a tecla de parar foi pressionada
CheckStopKeyPress(PlayerBase player, int key);

// Função que verifica se o AutoRun deve ser ativado ou desativado com base nas condições do jogador
CorridaAutomatica(PlayerBase player, int key);

// Constante que define o estado de "inatividade" no movimento do jogador (parado)
DayZPlayerConstants.MOVEMENTIDX_IDLE;

// Constante que define o estado de "corrida" no movimento do jogador
DayZPlayerConstants.MOVEMENTIDX_RUN;

// Constante que define o estado de "sprint" no movimento do jogador (corrida rápida)
DayZPlayerConstants.MOVEMENTIDX_SPRINT;

// Constante que define o estado de "caminhada" no movimento do jogador
DayZPlayerConstants.MOVEMENTIDX_WALK;
