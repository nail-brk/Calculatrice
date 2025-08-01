<!DOCTYPE html>
<html lang="fr">
<head>
  <meta charset="UTF-8">
  <title>🧮 Calculatrice</title>
  <style>
    body {
      font-family: Arial, sans-serif;
      background: #f3f4f6;
      display: flex;
      justify-content: center;
      align-items: center;
      height: 100vh;
    }
    .container {
      text-align: center;
      background: white;
      padding: 30px;
      border-radius: 10px;
      box-shadow: 0 4px 10px rgba(0,0,0,0.1);
    }
    input, select, button {
      margin: 10px;
      padding: 10px;
      font-size: 1rem;
    }
  </style>
</head>
<body>
  <div class="container">
    <h1>🧮 Calculatrice</h1>
    <input type="number" id="num1" placeholder="Nombre 1">
    <select id="operateur">
      <option value="+">➕</option>
      <option value="-">➖</option>
      <option value="*">✖️</option>
      <option value="/">➗</option>
    </select>
    <input type="number" id="num2" placeholder="Nombre 2">
    <button onclick="calculer()">Calculer</button>
    <p id="resultat"></p>
  </div>

  <script>
    function calculer() {
      const a = parseFloat(document.getElementById("num1").value);
      const b = parseFloat(document.getElementById("num2").value);
      const op = document.getElementById("operateur").value;
      let res;

      if (op === "/" && b === 0) {
        document.getElementById("resultat").innerText = "❌ Division par zéro !";
        return;
      }

      switch (op) {
        case "+": res = a + b; break;
        case "-": res = a - b; break;
        case "*": res = a * b; break;
        case "/": res = a / b; break;
      }

      document.getElementById("resultat").innerText = `✅ Résultat : ${res}`;
    }
  </script>
</body>
</html>