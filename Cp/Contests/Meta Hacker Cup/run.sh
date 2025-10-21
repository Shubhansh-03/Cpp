#!/bin/bash

# Check if filename is provided
if [ -z "$1" ]; then
  echo "Usage: ./run.sh <filename.cpp>"
  exit 1
fi

# Compile
g++ -std=c++17 -O2 -Wall "$1" -o a.out

# Check if compilation succeeded
if [ $? -ne 0 ]; then
  echo "❌ Compilation failed."
  exit 1
fi

# Run with input/output redirection
if [ -f "input.txt" ]; then
  ./a.out < input.txt > output.txt
  echo "✅ Execution complete. Output written to output.txt"
else
  echo "⚠️ input.txt not found. Running without redirection..."
  ./a.out
fi
