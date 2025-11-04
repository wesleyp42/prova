// classe veiculo contendo: modelo, cor ano de fabricação, quilometragem por litro de combustivel
// Wesley schuab vieira
#include <iostream>
#include <string>
using namespace std;
class Veiculo {
private:
    string modelo;
    string cor;
    int anoFabricacao;
    float kmPorLitro;
public:
    // Construtor
    Veiculo(string m, string c, int a, float k) {
        modelo = m;
        cor = c;
        anoFabricacao = a;
        kmPorLitro = k;
    }

    // Métodos para obter informações do veículo
    string getModelo() {
        return modelo;
    }

    string getCor() {
        return cor;
    }

    int getAnoFabricacao() {
        return anoFabricacao;
    }

    float getKmPorLitro() {
        return kmPorLitro;
    }
    void exibirInfo() {
        cout << "Modelo: " << modelo << endl;
        cout << "Cor: " << cor << endl;
        cout << "Ano de Fabricação: " << anoFabricacao << endl;
        cout << "Quilometragem por Litro: " << kmPorLitro << " km/l" << endl;
    }
    // função que ao receber a quantidade de litros abastecidos retorna a distancia que o veiculo pode percorrer
    float calcularDistancia() {
        float litrosAbastecidos = 30.0; // Exemplo de litros abastecidos
        return kmPorLitro * litrosAbastecidos;
    }
};
int main() {
    // Criando um objeto Veiculo
    Veiculo meuCarro("Toyota Corolla", "Prata", 2020, 15.5);
    meuCarro.exibirInfo();
    cout << endl;

    Veiculo carroPaulo("Honda Civic", "Preto", 2018, 14.0);
    carroPaulo.exibirInfo();
    cout << endl;

    Veiculo carroAna("Ford Fiesta", "Vermelho", 2019, 13.5);
    carroAna.exibirInfo();  
    cout << endl;

    Veiculo carroLucas("Chevrolet Onix", "Branco", 2021, 16.0);
    carroLucas.exibirInfo();
    cout << endl;
    
    Veiculo carroMaria("Volkswagen Gol", "Azul", 2017, 12.5);
    carroMaria.exibirInfo();
    cout << endl;
    

    return 0;
}
/*
// codigo em c++ correspondente a interface dessa classe para o qt creator
class Veiculo {
    Q_OBJECT
private:
    QString modelo;
    QString cor;
    int anoFabricacao;
    float kmPorLitro;
public:
    Veiculo(QString m, QString c, int a, float k);
    QString getModelo() const;
    QString getCor() const;
    int getAnoFabricacao() const;
    float getKmPorLitro() const;
    void exibirInfo() const;
    float calcularDistancia(float litrosAbastecidos) const;
};
*/
