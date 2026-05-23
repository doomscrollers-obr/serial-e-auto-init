# GUIA DE USO DO CÓDIGO

## 1. Tornar o shell script executável

Na Raspberry Pi, execute no terminal:

```bash
chmod +x /home/serafim/Downloads/comunicacao-serial-e-auto-init/init.sh
```

---

## 2. Conteúdo do `init.sh`

O arquivo deve conter:

```bash
#!/bin/bash
sleep 5

/usr/bin/python3 /home/serafim/Downloads/comunicacao-serial-e-auto-init/comunicacao-serial/led.py
```

---

## 3. Criar o serviço systemd

Crie o arquivo de serviço:

```bash
sudo nano /etc/systemd/system/meuscript.service
```

Conteúdo:

```ini
[Unit]
Description=Meu Script Python

[Service]
Type=simple
ExecStart=/home/serafim/Downloads/comunicacao-serial-e-auto-init/init.sh
User=serafim

[Install]
WantedBy=multi-user.target
```

---

## 4. Recarregar o systemd

Após criar ou editar o serviço:

```bash
sudo systemctl daemon-reload
```

---

## 5. Iniciar o serviço

```bash
sudo systemctl start meuscript.service
```

---

## 6. Verificar status

```bash
sudo systemctl status meuscript.service
```

Se estiver funcionando corretamente, aparecerá:

```text
Active: active (running)
```

---

## 7. Parar o serviço

```bash
sudo systemctl stop meuscript.service
```

---

## 8. Reiniciar o serviço

```bash
sudo systemctl restart meuscript.service
```

---

## 9. Ativar inicialização automática

Para iniciar automaticamente quando a Raspberry ligar:

```bash
sudo systemctl enable meuscript.service
```

---

## ALERTA

Antes de ativar o serviço automático, teste o shell script manualmente.

Execute:

```bash
/home/serafim/Downloads/comunicacao-serial-e-auto-init/init.sh
```

Caso funcione normalmente, então o serviço também deverá funcionar corretamente.
