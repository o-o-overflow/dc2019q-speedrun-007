#!/bin/sh -e

RESULT=$(python -c "print('a'*1024 + 'n')" | nc -q 1 "$1" "$2")
echo "$RESULT" | grep "I'm not crying, you're crying..."
echo "$RESULT" | grep "Whatever, let's do this."
echo "$RESULT" | grep "Changes you'd like to make (y/n)?"
echo "$RESULT" | grep "So cool."
echo "$RESULT" | grep "L8R."

