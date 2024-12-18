/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchampio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 09:39:47 by tchampio          #+#    #+#             */
/*   Updated: 2024/10/15 10:15:31 by tchampio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
/*
#include <stdio.h>
#include <string.h>

// Macros pour les couleurs
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define BOLDWHITE   "\033[1m\033[37m"

// Fonction de test
void test_ft_bzero(void *s, size_t n, const char *expected, int *success_count)
{
    // Utilisation de ft_bzero
    ft_bzero(s, n);

    // Comparaison des résultats
    if (memcmp(s, expected, n) == 0) {
        printf(GREEN "Test passed: ft_bzero(%p, %zu)\n" RESET, s, n);
        (*success_count)++;
    } else {
        printf(RED "Test failed: ft_bzero(%p, %zu)\nExpected: ", s, n);
        for (size_t i = 0; i < n; i++) {
            printf("%02x ", ((unsigned char *)expected)[i]);
        }
        printf("\nGot: ");
        for (size_t i = 0; i < n; i++) {
            printf("%02x ", ((unsigned char *)s)[i]);
        }
        printf("\n" RESET);
    }
}

int main() {
    int success_count = 0;
    int total_tests = 0;

    // Déclaration d'un buffer
    char buffer[50];

    // Test 1 : Remettre à 0 un tampon de 5 octets
    memset(buffer, 'A', sizeof(buffer)); // Remplissage préalable du buffer
    test_ft_bzero(buffer, 5, "\0\0\0\0\0", &success_count); total_tests++;

    // Test 2 : Remettre à 0 un seul octet
    memset(buffer, 'B', sizeof(buffer)); // Remplissage préalable du buffer
    test_ft_bzero(buffer, 1, "\0", &success_count); total_tests++;

    // Test 3 : Remettre à 0 tout le tampon
    memset(buffer, 'C', sizeof(buffer)); // Remplissage préalable du buffer
    char expected_full_zero[50] = {0}; // Un buffer entièrement rempli de zéros
    test_ft_bzero(buffer, sizeof(buffer), expected_full_zero, &success_count);
    total_tests++;

    // Test 4 : Remettre à 0 0 octets (ne doit rien changer)
    memset(buffer, 'D', sizeof(buffer)); // Remplissage préalable du buffer
    test_ft_bzero(buffer, 0, buffer, &success_count); total_tests++; 

    // Résumé des résultats
    printf(BOLDWHITE "\nTotal tests: %d, Success: %d, Failures: %d\n" RESET,
    total_tests, success_count, total_tests - success_count);

    return 0;
}
*/
