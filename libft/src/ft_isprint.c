/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchampio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:07:15 by tchampio          #+#    #+#             */
/*   Updated: 2024/10/14 15:30:57 by tchampio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <limits.h>

// Prototype de la fonction ft_isprint que tu devras implémenter
int ft_isprint(int c);

// Macros pour les couleurs
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define BOLDWHITE   "\033[1m\033[37m"

// Fonction de test
void test_ft_isprint(int c, int expected, int *success_count) {
    int result = ft_isprint(c);

    if (result == expected) {
        printf(GREEN "Test passed: ft_isprint(%d) == %d\n" RESET, c, result);
        (*success_count)++;
    } else {
        printf(RED "Test failed: ft_isprint(%d) == %d (expected %d)\n" RESET,
			c, result, expected);
    }
}

int main() {
    int success_count = 0;
    int total_tests = 0;

    // Tests des caractères imprimables (32-126)
    for (int i = 0; i < 128; i++) {
        if (i >= 32 && i <= 126) {
            // Les valeurs de 32 à 126 doivent retourner 1 (imprimables)
            test_ft_isprint(i, 1, &success_count);
        } else {
            // Les autres valeurs doivent retourner 0 (non imprimables)
            test_ft_isprint(i, 0, &success_count);
        }
        total_tests++;
    }

    // Cas extrêmes avec limites des entiers
    test_ft_isprint(INT_MAX, 0, &success_count); total_tests++;
    test_ft_isprint(INT_MIN, 0, &success_count); total_tests++;

    // Résumé des résultats
    printf(BOLDWHITE "\nTotal tests: %d, Success: %d, Failures: %d\n" RESET,
		    total_tests, success_count, total_tests - success_count);

    return 0;
}
*/
