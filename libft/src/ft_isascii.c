/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchampio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:07:15 by tchampio          #+#    #+#             */
/*   Updated: 2024/10/14 15:27:27 by tchampio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <limits.h>

// Macros pour les couleurs
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define BOLDWHITE   "\033[1m\033[37m"

// Fonction de test
void test_ft_isascii(int c, int expected, int *success_count) {
    int result = ft_isascii(c);

    if (result == expected) {
        printf(GREEN "Test passed: ft_isascii(%d) == %d\n" RESET, c, result);
        (*success_count)++;
    } else {
        printf(RED "Test failed: ft_isascii(%d) == %d (expected %d)\n" RESET,
	c, result, expected);
    }
}

int main() {
    int success_count = 0;
    int total_tests = 0;

    // Tests des caractères ASCII (0-127)
    for (int i = 0; i <= 127; i++) {
        // Les valeurs de 0 à 127 doivent retourner 1 pour les caractères ASCII
        if (i >= 0 && i <= 127) {
            test_ft_isascii(i, 1, &success_count);
        } else {
            test_ft_isascii(i, 0, &success_count);
        }
        total_tests++;
    }

    // Tests des caractères en dehors de la plage ASCII
    test_ft_isascii(128, 0, &success_count); total_tests++;
    test_ft_isascii(255, 0, &success_count); total_tests++;
    test_ft_isascii(INT_MAX, 0, &success_count); total_tests++;
    test_ft_isascii(INT_MIN, 0, &success_count); total_tests++;

    // Résumé des résultats
    printf(BOLDWHITE "\nTotal tests: %d, Success: %d, Failures: %d\n" RESET,
    total_tests, success_count, total_tests - success_count);

    return 0;
}
*/
