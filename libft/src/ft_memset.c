/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchampio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:56:53 by tchampio          #+#    #+#             */
/*   Updated: 2024/10/14 17:27:38 by tchampio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Prototype de la fonction ft_memset que tu devras implémenter
void *ft_memset(void *s, int c, size_t n);

// Macros pour les couleurs
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define BOLDWHITE   "\033[1m\033[37m"

// Fonction de test
void test_ft_memset(void *s, int c, size_t n, const char *expected,
int *success_count) {
    // Utilisation de ft_memset
    ft_memset(s, c, n);

    // Comparaison des résultats
    if (memcmp(s, expected, n) == 0) {
        printf(GREEN "Test passed: ft_memset(%p, %d, %zu)\n" RESET, s, c, n);
        (*success_count)++;
    } else {
        printf(RED "Test failed: ft_memset(%p, %d, %zu)\nExpected: %s,
Got: ", s, c, n, expected);
        for (size_t i = 0; i < n; i++) {
            printf("%02x ", ((unsigned char *)s)[i]);
        }
        printf("\n" RESET);
    }
}

int main() {
    int success_count = 0;
    int total_tests = 0;

    // Tests de ft_memset
    char buffer[50];

    // Test 1 : Remplir un tampon avec un seul caractère
    memset(buffer, 0, sizeof(buffer)); // Reset buffer
    test_ft_memset(buffer, 'A', 5, "AAAAA", &success_count);
    total_tests++;

    // Test 2 : Remplir avec un caractère null
    memset(buffer, 0, sizeof(buffer)); // Reset buffer
    test_ft_memset(buffer, '\0', 5, "\0\0\0\0\0", &success_count);
    total_tests++;

    // Test 3 : Remplir une partie du tampon
    memset(buffer, 0, sizeof(buffer)); // Reset buffer
    test_ft_memset(buffer, 'B', 3, "BBB", &success_count);
    total_tests++;

    // Test 4 : Remplir avec un caractère à la limite de l'ASCII
    memset(buffer, 0, sizeof(buffer)); // Reset buffer
    test_ft_memset(buffer, 255, 4, "\xFF\xFF\xFF\xFF", &success_count);
    total_tests++;

    // Test 5 : Remplir tout le tampon
    memset(buffer, 0, sizeof(buffer)); // Reset buffer
    test_ft_memset(buffer, 'C', sizeof(buffer),
    "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", &success_count);
    total_tests++;

    // Test 6 : Remplir 0 octets
    memset(buffer, 0, sizeof(buffer)); // Reset buffer
    test_ft_memset(buffer, 'D', 0, "", &success_count);
    total_tests++; 

    // Résumé des résultats
    printf(BOLDWHITE "\nTotal tests: %d, Success: %d, Failures: %d\n" RESET,
		total_tests, success_count, total_tests - success_count);

    return 0;
}
*/
