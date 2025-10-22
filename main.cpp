class Led {
  private:
    byte pin;
  
  public:
    Led(byte p) {
      pin = p;
      pinMode(pin, OUTPUT);
    }

    void ligar() {
      digitalWrite(pin, HIGH);
    }

    void desligar() {
      digitalWrite(pin, LOW);
    }

    void setEstado(bool estado) {
      digitalWrite(pin, estado ? HIGH : LOW);
    }
};

class Botao {
  private:
    byte pin;
  
  public:
    Botao(byte p) {
      pin = p;
      pinMode(pin, INPUT);
    }

    bool pressionado() {
      return digitalRead(pin);
    }
};

// Criação dos objetos globais
Led led(13);
Botao botao(12);

void setup() {
  // setup vazio porque as classes já configuram os pinos
}

void loop() {
  bool estadoBotao = botao.pressionado();
  led.setEstado(estadoBotao);
}