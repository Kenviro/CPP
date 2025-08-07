# Définition des couleurs pour l'affichage
BOLD         = \033[1m
GREEN        = \033[0;32m
YELLOW       = \033[0;33m
BLUE         = \033[0;34m
RED          = \033[0;31m
MAGENTA      = \033[0;35m
CYAN         = \033[0;36m
COLOUR_RESET = \033[0m

# Répertoires
SRC_DIR = src
INC_DIR = includes
ODIR = obj

# Nom de l'exécutable
NAME = ArrayTemplate

# Recherche automatique des .cpp et .hpp/.h
SRCS = $(shell find $(SRC_DIR) -type f -name "*.cpp")
HEADERS = $(shell find $(INC_DIR) -type f \( -name "*.hpp" -o -name "*.h" \))

# Génération automatique des .o à partir des .cpp
OFILES = $(SRCS:$(SRC_DIR)/%.cpp=$(ODIR)/%.o)

# Compilateur et options
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -I$(INC_DIR)

# Règle principale
all: $(NAME)

# Compilation des fichiers objets
$(ODIR)/%.o: $(SRC_DIR)/%.cpp $(HEADERS)
	@mkdir -p $(dir $@)
	@echo "$(YELLOW)$(BOLD) Compilation de $<...$(COLOUR_RESET)"
	@$(CC) $(CFLAGS) -c $< -o $@

# Edition de liens
$(NAME): $(OFILES)
	@echo "$(YELLOW)$(BOLD) Edition des liens: $@$(COLOUR_RESET)"
	@$(CC) $(CFLAGS) $(OFILES) -o $(NAME)
	@echo "$(GREEN)$(BOLD) Compilation terminée avec succès ! $(COLOUR_RESET)"

# Nettoyage des objets
clean:
	@echo "$(RED)$(BOLD) Suppression des fichiers objets...$(COLOUR_RESET)"
	@rm -rf $(ODIR)
	@echo "$(GREEN)$(BOLD) Fichiers objets supprimés !$(COLOUR_RESET)"

# Nettoyage total
fclean: clean
	@echo "$(RED)$(BOLD) Suppression de l'exécutable $(NAME)...$(COLOUR_RESET)"
	@rm -f $(NAME)
	@echo "$(GREEN)$(BOLD) Nettoyage terminé ! $(COLOUR_RESET)"

# Recompile proprement
re: fclean all

# Compilation avec debug
debug: CFLAGS += -g
debug: re

# Affiche les fichiers utilisés
show:
	@echo "$(MAGENTA)Sources : $(SRCS)$(COLOUR_RESET)"
	@echo "$(CYAN)Objets  : $(OFILES)$(COLOUR_RESET)"
	@echo "$(BLUE)Headers : $(HEADERS)$(COLOUR_RESET)"

.PHONY: all clean fclean re debug show
