double calculer(double a, double b, char op, bool& erreur) {
    erreur = false;

    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':
            if (b == 0) {
                erreur = true;
                return 0;
            }
            return a / b;
        default:
            erreur = true;
            return 0;
    }
}
