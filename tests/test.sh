#!/bin/sh
testcount=4
for i in $(seq $testcount); do
  if ../program $(cat test$i.input) 2>&1 | diff -q - test$i >/dev/null; then
    response="Passed"
  else
    response="Failed"
  fi
  echo "$response test $i"
done
