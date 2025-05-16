FROM ubuntu:22.04

# Éviter les interactions avec l'utilisateur pendant l'installation
ENV DEBIAN_FRONTEND=noninteractive

# Mettre à jour le système et installer les outils essentiels
RUN apt-get update && apt-get install -y \
    build-essential \
    wget \
    gcc \
    g++ \
    gdb \
    nasm \
    vim \
    nano \
    git \
    make \
    cmake \
    pkg-config \
    binutils \
    man-db \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*

# Configurer GCC pour la compilation croisée x86_64
RUN apt-get update && apt-get install -y \
    gcc-multilib \
    g++-multilib \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*

RUN wget -q https://raw.githubusercontent.com/bata24/gef/dev/install.sh -O- | sed -e 's/pip3 install/pip3 install --break-system-packages/g' | sh

WORKDIR /app

CMD ["/bin/bash"] 