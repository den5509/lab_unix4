FROM ubuntu

COPY ./src/ /src/
COPY init.sh /

RUN mkdir /src/bin && chmod 755 /init.sh
RUN apt update && apt install -y make gcc

WORKDIR /src

ENTRYPOINT /init.sh ; /bin/bash
