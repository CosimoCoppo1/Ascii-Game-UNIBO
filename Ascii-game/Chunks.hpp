class Chunks
{
	protected:
		struct Nodo{
			Nodo *next;
			char chunk[32][16];
			int level; //difficulty
			int id; //numero chunk
		};
		
		Nodo *testa, *coda;
		int AId;                   //numero di chuncks totali
	
	public :
		void Init();
		void Append(char *text, int level);
		void Print();
		char **GetRandom();
	
	
};
