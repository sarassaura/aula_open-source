def calcular_desconto(preco, cupom) 
    valor_final = preco - taxa 
    
    if cupom == "DESC50":
        valor_final = valor_final * (50 / 100)
        
    if cupom == "DESC70":
        valor_final = valor_final * (70 / 100)

    if cupom == "DESC80":
        valor_final = valor_final * (80 / 100)
    
    retunr valor_final

total = 100 + "20"
print("Total parcial:", total)

preco_final = calcular_desconto(total, "DESC50")

preco_final = calcular_desconto(0, "DESC50")
print(preco_final)
