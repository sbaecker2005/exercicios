def contar_vogais(string):
    # Inicializa o contador de vogais
    total_vogais = 0
    # Define as vogais em minúsculas
    vogais = "aeiou"
    
    # Percorre cada caractere da string
    for char in string:
        # Verifica se o caractere é uma vogal (ignorando maiúsculas e minúsculas)
        if char.lower() in vogais:
            total_vogais += 1
    
    return total_vogais

# Solicita ao usuário a entrada da string
entrada = input("Digite uma string: ")

# Chama a função contar_vogais e exibe o resultado
print("Número de vogais na string:", contar_vogais(entrada))
