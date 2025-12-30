#!/bin/zsh

if [ -z "$1" ]; then
    echo "Usage: cf <filename_without_extension>"
    exit 1
fi

FILE="$1.cpp"

if [ -f "$FILE" ]; then
    echo "$FILE already exists!"
    exit 1
fi

cat << 'EOF' > "$FILE"
#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        // solve here
    }

    return 0;
}
EOF

echo "Created $FILE"
