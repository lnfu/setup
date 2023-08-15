#!/bin/bash

install() {
	while read -r package; do
		if [ -n "$package" ]; then
			sudo apt-get install -y "$package"
		fi
	done < "$1"
}

if [ -f "list" ]; then
	echo "Installing packages from the 'list' file..."
	install "list"
	echo "Package installation completed."
else
	echo "Error: 'list' file not found!"
fi
