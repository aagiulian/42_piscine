#include "ex00/ft_list.h"
#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"
#include "string.h"
void ft_list_push_back(t_list **begin_list, void *data);
void ft_list_push_front(t_list **begin_list, void *data);
int ft_list_size(t_list *begin_list);
t_list *ft_list_last(t_list *begin_list);
t_list *ft_list_push_params(int ac, char **av);
void	ft_list_clear(t_list **begin_list);
t_list *ft_list_at(t_list *begin_list, unsigned int nbr);
void ft_list_reverse(t_list **begin_list);
void ft_list_foreach(t_list *begin_list, void (*f)(void *));

int counter = 0;

void forEach(void *data)
{
	(void)data;
	++counter;
}

int     main(int argc, char **argv)
{
	t_list *list;
	list = NULL;
	
		if (argc != 1)
		{
			printf("I have parameters, using ft_list_push_params.\n");
			list = ft_list_push_params(argc, argv);
		}
		else
		{
			printf("I miss parameters, filling with default data.\n");
			ft_list_push_back(&list, (void*)("hello"));
			ft_list_push_back(&list, (void*)("hello"));
			ft_list_push_back(&list, (void*)("hello"));
			ft_list_push_back(&list, (void*)("hello"));
			ft_list_push_back(&list, (void*)("hello"));
			ft_list_push_back(&list, (void*)("hello"));
			ft_list_push_front(&list, (void*)("First"));
			ft_list_push_back(&list, (void*)("Last"));
		}
	printf("Count: %d\n", ft_list_size(list));
	printf("Every nodes:\n");
	t_list *iterator;
	iterator = list;
	while (iterator)
	{
		printf("\t%s\n", (char*)(iterator->data));
		iterator = iterator->next;
	}
	printf("First node:\n");
	printf("\t%s\n", (char*)list->data);
	printf("Last node:\n");
	printf("\t%s\n", (char*)ft_list_last(list)->data);
	printf("Maintenant je vais liberer la memoire te ta liste :D\n");
	ft_list_clear(&list);
	printf("Bravo si tu as pas deja segfault.\n");
	ft_list_clear(&list);
	printf("HAHA! Si tu as segfault, tes un bizu.\n");
	if (list == NULL)
		printf("Ta liste est bien egale a NULL\n");
	else
		printf("Ta fonction ft_list_clear fonctionne pas. La variable list n'est pas egale a NULL.\n");
	list = NULL;
	ft_list_push_back(&list, (void*)("Je suis 1"));
	ft_list_push_back(&list, (void*)("Je suis 2"));
	ft_list_push_back(&list, (void*)("Je suis 3"));
	ft_list_push_back(&list, (void*)("Je suis 4"));
	ft_list_push_back(&list, (void*)("Je suis 5"));
	ft_list_push_back(&list, (void*)("Je suis 6"));
	if (ft_list_at(list, 7) == NULL && ft_list_at(list, 10) == NULL && strcmp(ft_list_at(list, 2)->data, "Je suis 2") == 0)
		printf("Felicitations ta fonction ft_list_at fonctionne selon mes tests. Bravo!\n");
	else
		printf("Ta fonction ft_list_at ne fonctionne pas. BOUUUUUH\n");
	printf("Je vais maintenant tester si tu sais retourner une chaine.\n");
	ft_list_reverse(&list);
	if (strcmp(ft_list_at(list, 1)->data, "Je suis 6") == 0 && strcmp(ft_list_at(list, 6)->data, "Je suis 1") == 0)
		printf("Bravo, le reverse de ta liste fonctionne !\n");
	else
		printf("Le reverse de ta liste ne fonctionne pas. Niark niark\n");
	counter = 0;
	//ft_list_foreach(list, &forEach);
//	if (counter == 6)
	//	printf("Bravo ta fonction ft_list_foreach fonctionne :D");
//	else
//		printf("HAHAHAHAHAHA ft_list_foreach ne fonctionne pas.");
}
