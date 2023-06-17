sudo mkdir -p /usr/share/fonts/truetype/ttf-monaco && \
sudo wget http://www.gringod.com/wp-upload/software/Fonts/Monaco_Linux.ttf -O - > temp && \
sudo mv temp /usr/share/fonts/truetype/ttf-monaco/Monaco_Linux.ttf && \
sudo fc-cache
