# Définition des couleurs pour l'affichage
BOLD = \033[1m
GREEN = \033[0;32m
YELLOW = \033[0;33m
BLUE = \033[0;34m
RED = \033[0;31m
MAGENTA = \033[0;35m
CYAN = \033[0;36m
COLOUR_RESET = \033[0m

# Dossier des fichiers objets
ODIR = obj

# Nom de l'exécutable
NAME = phonebook

# Fichiers sources et headers
SRCS =	main.cpp \
		Contact.cpp \
		Phonebook.cpp \
		ADD_utils.cpp \

HEADERS = header.hpp

# Fichiers objets
OFILES =	$(ODIR)/main.o \
			$(ODIR)/Contact.o \
			$(ODIR)/Phonebook.o \
			$(ODIR)/ADD_utils.o

# Compilateur et options
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

.PHONY: all clean fclean re

# Règle principale
all: $(NAME)

# Compilation des fichiers objets
$(ODIR)/%.o: %.cpp $(HEADERS)
	@mkdir -p $(ODIR)
	@echo "$(YELLOW)$(BOLD)💾 Compilation de $<...$(COLOUR_RESET)"
	$(CC) $(CFLAGS) -c $< -o $@

# Edition de liens pour créer l'exécutable
$(NAME): $(OFILES)
	@echo "$(YELLOW)$(BOLD)🔗 Edition des liens: $@$(COLOUR_RESET)"
	$(CC) $(CFLAGS) $(OFILES) -o $(NAME)
	@echo "$(GREEN)$(BOLD)🎊 Compilation terminée avec succès ! 🎊$(COLOUR_RESET)"

# Suppression des fichiers objets
clean:
	@echo "$(RED)$(BOLD)🧹 Suppression des fichiers objets...$(COLOUR_RESET)"
	@rm -rf $(ODIR)
	@echo "$(GREEN)$(BOLD)✔️ Fichiers objets supprimés !$(COLOUR_RESET)"

# Suppression de l'exécutable et des fichiers objets
fclean: clean
	@echo "$(RED)$(BOLD)🗑️ Suppression de l'exécutable $(NAME)...$(COLOUR_RESET)"
	@rm -f $(NAME)
	@echo "$(GREEN)$(BOLD)✨ Nettoyage terminé ! ✨$(COLOUR_RESET)"

# Recompile tout proprement
re: fclean all
