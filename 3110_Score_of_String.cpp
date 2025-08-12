/**
 * @brief Standart library and usage
 */
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/**
 * @brief Class Soluction for Exercice
 * 
 * @details Convert which caracter of a string to decimal then
 * 
 * @version v0.0.1
 */
class Solution
{
    public:
    string s;
    int length;

    public:
    /**
     * @brief Construtor with parameters
     * @version v0.0.1
     */
    Solution()
    {
        this->s = "";
        this->length = 0;
    }

    /**
     * @brief Read string
     * @details Read a string using standart stdin
     * @version v0.0.1
     */
    string read_String(void)
    {
        if(s.empty())
        {
            cin >> this->s;
        }
        return this->s;
    }

    /**
     * @brief String character counter
     * @details Go into which position of a string and counts it
     *          with the condition to stop when character is '\0'/null
     * @version v.0.01
     */
    int string_length(void)
    {
        int i=0;
        while(s[i]!='\0')
        {
            i=i+1;
            this->length=length+1;
        }
        return this->length;
    }

    
    int score_of_String()
    {
        int soma=0;
        int i=0;

        // Calculo da diferenca do atual decimal representado pelo caractere na posicao 'i'
        // pelo proximo caractere na posicao 'i' + 1, salvando e acumulando a soma destes
        // na variavel soma
        for(int i = 0; i < this->length - 1; i++)
        {
            soma = soma + abs(this->s[i] - this->s[i+1]);
        }
        return soma;
    }
    
};

/**
 * @brief Main function
 * @details
 * @version v0.0.1
 */
int main(void)
{
    // Declaracao de variaveis
    int n=0;
    int soma=0;
    Solution example;

    // Metodos
    example.read_String();
    n=example.string_length();
    soma=example.score_of_String();
    cout << soma << endl;

    return 0;
}
