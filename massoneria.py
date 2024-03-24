def ask_question(question):
    while True:
        answer = input(question).lower()
        if answer in ["sì", "si"]:
            return True
        elif answer == "no":
            return False
        else:
            print("Risposta non valida. Per favore, rispondi con 'sì' o 'no'.")


def main():
    score = 0

    print("Benvenuto al quiz per scoprire quanto potresti essere adatto per essere un massone!\n")

    # Domande del quiz
    if ask_question("Credi in Dio? (sì/no): \n"):
        score += 15

    if ask_question("Ti consideri una persona altruista? (sì/no): \n"):
        score += 10

    if not ask_question("Sei una persona chiusa e riservata? (sì/no): \n"):
        score += 10

    if not ask_question("Preferisci lavorare da solo piuttosto che in gruppo? (sì/no): \n"):
        score += 10

    if ask_question("Credi nell'importanza della fratellanza e della solidarietà? (sì/no): \n"):
        score += 10

    if not ask_question("Hai una mente chiusa riguardo alle nuove idee e concetti? (sì/no): \n"):
        score += 10

    if ask_question("Ti piace discutere di argomenti filosofici o spirituali? (sì/no): \n"):
        score += 10

    if not ask_question("Sei disposto a seguire le regole e i protocolli stabiliti? (sì/no): \n"):
        score += 10

    if ask_question("Sei disposto a impegnarti attivamente nella tua comunità? (sì/no): \n"):
        score += 10

    if ask_question("Ti piace vestirti con tuniche nere tenebrose? (sì/no): \n"):
        score += 15

    # Limita il punteggio massimo a 100
    score = min(score, 100)

    # Calcolo del risultato in percentuale
    percentuale_massoneria = (score / 100) * 100

    # Stampa del risultato
    print(f"\n\nSei {percentuale_massoneria:.0f} percento massone.")

if __name__ == "__main__":
    main()
