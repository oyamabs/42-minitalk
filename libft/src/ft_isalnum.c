/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchampio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:56:25 by tchampio          #+#    #+#             */
/*   Updated: 2024/10/14 15:03:40 by tchampio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
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
void test_ft_isalnum(int c, int expected, int *success_count) {
    int result = ft_isalnum(c);

    if (result == expected) {
        printf(GREEN "Test passed: ft_isalnum(%d) == %d\n" RESET, c, result);
        (*success_count)++;
    } else {
        printf(RED "Test failed: ft_isalnum(%d) == %d (expected %d)\n" RESET,
	c, result, expected);
    }
}

int main() {
    int success_count = 0;
    int total_tests = 0;

    // Tests des chiffres (0-9)
    for (int i = '0'; i <= '9'; i++) {
        test_ft_isalnum(i, 1, &success_count);
        total_tests++;
    }

    // Tests des lettres minuscules (a-z)
    for (int i = 'a'; i <= 'z'; i++) {
        test_ft_isalnum(i, 1, &success_count);
        total_tests++;
    }

    // Tests des lettres majuscules (A-Z)
    for (int i = 'A'; i <= 'Z'; i++) {
        test_ft_isalnum(i, 1, &success_count);
        total_tests++;
    }

    // Tests des caractères non alphanumériques (symboles et autres)
    test_ft_isalnum('!', 0, &success_count); total_tests++;
    test_ft_isalnum('@', 0, &success_count); total_tests++;
    test_ft_isalnum('[', 0, &success_count); total_tests++;
    test_ft_isalnum('`', 0, &success_count); total_tests++;
    test_ft_isalnum('~', 0, &success_count); total_tests++;
    
    // Tests des caractères non imprimables (0-31)
    for (int i = 0; i <= 31; i++) {
        test_ft_isalnum(i, 0, &success_count);
        total_tests++;
    }

    // Cas extrêmes avec limites des entiers
    test_ft_isalnum(INT_MAX, 0, &success_count); total_tests++;
    test_ft_isalnum(INT_MIN, 0, &success_count); total_tests++;

    // Résumé des résultats
    printf(BOLDWHITE "\nTotal tests: %d, Success: %d, Failures: %d\n" RESET,
    total_tests, success_count, total_tests - success_count);

    return 0;
}
*/
