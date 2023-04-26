SERV = server
CLIE = client

server: Server.c
	gcc -o server Server.c

client: Client.c
	gcc -o client Client.c

clean:
	 rm -rf server *.o $(SERV)
	  rm -rf client *.o $(CLIE)
        
