#! /bin/sh
find . -type f -name "*.sh" -printf '%f\n' | sed -r 's/.{3}$//'
