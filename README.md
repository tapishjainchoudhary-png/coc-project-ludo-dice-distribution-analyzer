# 🎲 COC Project — Ludo Dice Distribution Analyzer 

The project simulates rolling two dice one million times using C programming to generate a probability distribution of all possible sums (2 to 12) and compares these simulated results with their theoretical probabilities.

---

## 📘 Project Overview  

In games like Ludo, the outcome of rolling two dice can vary —  
some totals (like 7) appear more often than others (like 2 or 12).  

This project demonstrates this behavior through a simulation, proving that the distribution of outcomes aligns with mathematical probability theory.

---

## 💻 Concepts Used  

### C Programming Concepts
- for loops  
- arrays  
- functions  
- rand() and srand() for randomization  
- printf() for formatted output  

### Mathematics Concepts
- Probability Distribution  
- Comparison of Simulated vs. Theoretical results  
- Random Sampling (Stochastic Modeling)  

---

## ⚙️ How to Compile  

Use GCC to compile the program:  
gcc main.c -o ludo -lm
---

## ▶️ How to Run  

./ludo
---

## 📊 Example Output  

Sum |   Count   |  Simulated Probability %  | Theoretical Probability %
----|-----------|---------------------------|--------------------------
  2 |      27760 |       2.78%              |   2.78%
  3 |      55490 |       5.55%              |   5.56%
  4 |      83260 |       8.33%              |   8.33%
  5 |     111050 |      11.10%              |  11.11%
  6 |     138870 |      13.89%              |  13.89%
  7 |     166740 |      16.67%              |  16.67%
  8 |     138920 |      13.89%              |  13.89%
  9 |     110950 |      11.10%              |  11.11%
 10 |      83230 |       8.32%              |   8.33%
 11 |      55580 |       5.56%              |   5.56%
 12 |      27750 |       2.78%              |   2.78%
---

## 🧮 Formula Reference  

Theoretical probability of each sum =  
\[
P(sum) = \frac{\text{Number of ways to get that sum}}{36} \times 100
\]

| Sum | Ways | Probability (%) |
|------|------|-----------------|
| 2 | 1 | 2.78 |
| 3 | 2 | 5.56 |
| 4 | 3 | 8.33 |
| 5 | 4 | 11.11 |
| 6 | 5 | 13.89 |
| 7 | 6 | 16.67 |
| 8 | 5 | 13.89 |
| 9 | 4 | 11.11 |
| 10 | 3 | 8.33 |
| 11 | 2 | 5.56 |
| 12 | 1 | 2.78 |

---

## 📈 Conclusion  

✅ The simulated probabilities match closely with the theoretical distribution.  
✅ Confirms that random dice outcomes follow predictable probability laws.  
✅ Demonstrates how C programming and mathematics work together for analytical modeling.  

---

## 🧑‍💻 Author  

Tapish Kumar Jain  
_First Year, JECRC Foundation_  
_Clash of Coders — Marvel Cart Club_  

