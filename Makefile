SERV = Server.c
CLIE = Client.c

server: Server.c
	gcc -o server Server.c

client: client.c
	gcc -o client Client.c

clean:
	rm -rf Server *.o $(SERV)
	 rm -rf server *.o $(SERV)
	  rm -rf client *.o $(CLIE)
        
