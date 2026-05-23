# GUIA DE USO DO CÓDIGO
    - Na rasp torne o **init.sh** executável com um comando no terminal: `chmod +x /home/pi/projetos/init.sh`. **OU** adicione o script dentro da variável `$PATH`
    - para a rasp iniciar automáticamente, é preciso digitar no terminal os seguintes comandos: `crontab -e` e depois `@reboot /home/pi/projetos/init.sh`
    - **ALERTA:** antes de colocar no autostart, **teste o shellscript.** Como?
        - dentro da pasta do código, com o .sh já sendo executável, digite: `init.sh`.
        - caso funcione, **execute** o autostart
