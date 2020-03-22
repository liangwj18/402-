#include "./player.hpp"

#define DEBUG 1

int main(){
	Client* client = new Client();
	client->init();
#ifdef DEBUG
	FILE *fp;
	if(client->parameters->num == 0)fp = fopen("log0.txt", "w");
	else fp = fopen("log1.txt", "w");
	client->parameters->Debug(fp);
#endif
	while(true){
		client->stateInfo();
		client->opt->clear();
#ifdef DEBUG
		client->state->Debug(fp);
#endif
		getOperations(client->parameters, client->state, client->opt);
#ifdef DEBUG
		client->opt->Debug(fp);
#endif
		client->sendOpt();
	}
#ifdef DEBUG
	fclose(fp);
#endif
	delete client;
}