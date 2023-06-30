# Anki
rm -rf temp
mkdir temp
cd temp
wget https://github.com/ankitects/anki/releases/download/2.1.65/anki-2.1.65-linux-qt6.tar.zst
tar xaf anki-2.1.65-linux-qt6.tar.zst
cd anki-2.1.65-linux-qt6
./install.sh
cd ../..
rm -rf temp
