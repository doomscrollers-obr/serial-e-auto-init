# Serial-e-Auto-Init

## Descrição

Projeto de estudo sobre integração entre a Raspberry Pi e o Arduino utilizando comunicação serial.

A Raspberry executa automaticamente um serviço configurado no `systemd`, responsável por iniciar um Shell Script (`init.sh`). Esse script executa um código Python que estabelece comunicação serial com o Arduino.

Durante a execução, comandos são enviados pela serial para controlar o estado de um LED conectado ao Arduino, permitindo ligar e desligar o LED diretamente pela Raspberry Pi.

---

## Tecnologias utilizadas

- Raspberry Pi
- Arduino
- Python 3
- Shell Script (`.sh`)
- systemd
- Comunicação Serial (USB/TTY)

---

## Funcionamento

1. A Raspberry Pi inicia.
2. O `systemd` executa o serviço configurado.
3. O serviço inicia o `init.sh`.
4. O Shell Script executa o código Python.
5. O Python estabelece comunicação serial com o Arduino.
6. Comandos são enviados para ligar e desligar o LED.

---

## Objetivo do projeto

Estudar:

- Automação de inicialização no Linux
- Serviços com `systemd`
- Shell Script
- Comunicação serial entre dispositivos
- Integração entre hardware e software embarcado

---

## Estrutura básica

```text
comunicacao-serial-e-auto-init/
│
├── init.sh
├── comunicacao-serial/
│   └── led.py
└── README.md
```
