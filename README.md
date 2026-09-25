# 🧠 IST-One: Neural Network from Scratch in C++

![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![AI](https://img.shields.io/badge/AI-No_External_Libraries-brightgreen?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Completed-blue?style=for-the-badge)

A lightweight, multi-layer perceptron (MLP) built completely **from scratch in C++ without any third-party Machine Learning frameworks or libraries** (No PyTorch, No TensorFlow). 

Designed and developed by **Alexey Makarenko**.

---

## 🚀 Key Features

* **Zero External Dependencies:** Built using purely standard C++ libraries (`<iostream>`, `<cmath>`, `<cstdlib>`).
* **Custom Tokenizer:** Built-in natural language processing engine for tokenizing Russian words into numerical IDs and decoding outputs.
* **Non-Linear Activation:** Implements **ReLU** (Rectified Linear Unit) activation functions (`std::max(0.0, x)`) for hidden layers.
* **Evolutionary / Mutation Learning Algorithm:** Uses stochastic weight and bias mutations (genetic hill-climbing search) to optimize parameters across 20+ million generations.
* **Interactive CLI Interface:** Real-time console interface for trained chatbot interaction.

---

## 📐 Architecture Overview

The network processes text sequences token-by-token through a 3-layer fully connected architecture:

1. **Input Layer:** 3 Nodes (Tokenized Input Context)
2. **Hidden Layers:** Custom weights ($w$, $wo$, $wu$) and biases ($b$, $bo$, $bu$) with ReLU activations
3. **Output Layer:** 3 Nodes (Predicted Response Tokens)

---

## 🛠️ How to Run

### Prerequisites
* Any C++ Compiler (`g++`, `clang`, or MSVC)

### Build and Execution
```bash
# 1. Clone the repository
git clone [https://github.com/AlMatCod/IST-One.git](https://github.com/AlMatCod/IST-One.git)

# 2. Compile the source code
g++ -O3 istonenew.cpp -o IST-One

# 3. Run the AI
./IST-One
```

### 📩 Contact & Socials

* Author: Alexey Makarenko (AlMatCod)
* Email: makarenko05062010@gmail.com

### Made with love
