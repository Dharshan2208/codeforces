#!/bin/zsh

# Delete all executables
find . -type f -perm -111 -not -name "*.*" -delete

echo "Cleaned all C++ compiled files"
