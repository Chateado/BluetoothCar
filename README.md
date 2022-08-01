# BluetoothCar

Carro desenvolvido em arduino, consiste na utilização do aplicativo "BC RC Car", disponível na Play Store, para controlar o carro de forma remota.

## Payload utilizado

O carro recebe alguns valores pré definidos pelo aplicativos, cujo os pacotes deverão ser tratados pelo programa compilado, segue abaixo a tabela de informações recebidas:

Forward (Ir para a frente): F
Back (Ir para atrás): B
Left (Vira a esquerda): L
Right (Vira para a direita): R

Forward Left (Vira na diagonal para esquerda): G
Forward Right (Vira na diagonal para a direita): I

Back Left (Vira para atrás na diagonal para a esquerda): G
Back Right (Vira para atrás na diagonal para a direita): J

Stop (Para o carro por completo): S

Emergency Stop (Para e corta a energia dos controles por completo): D

## Componentes utilizados

Placa: Arduino Mega 2560 R3

Placa Bluetooth: HC-06

Shield: L293D
