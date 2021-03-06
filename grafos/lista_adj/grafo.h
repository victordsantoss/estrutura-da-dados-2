typedef struct grafo Grafo;

Grafo *cria_Grafo (int nro_vertices, int grau_max, int eh_ponderado);
void libera_Grafo (Grafo *gr);

int insere_Aresta (Grafo *gr, int orig, int dest, int eh_digrafo, float peso);
int remove_Aresta (Grafo *gr, int orig, int dest, int eh_digrafo);

void busca_em_profundidade (Grafo *gr, int ini, int *visitado);
void auxiliar_busca_em_profundidade (Grafo *gr, int ini, int *visitado, int cont);
void busca_em_largura (Grafo *gr, int ini, int *visitado);
void busca_menor_caminho (Grafo *gr, int ini, int *ant, float *dist);
int procura_menor_distancia (float *dist, int *visitado, int NV);
void imprime_Grafo(Grafo *gr);
