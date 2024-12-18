/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchampio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:36:45 by tchampio          #+#    #+#             */
/*   Updated: 2024/10/14 15:53:37 by tchampio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (*s)
	{
		s++;
		len++;
	}
	return (len);
}
/*
#include <stdio.h>
#include <string.h>
#include <limits.h>

// Prototype de la fonction ft_strlen que tu devras implémenter
size_t ft_strlen(const char *s);

// Macros pour les couleurs
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define BOLDWHITE   "\033[1m\033[37m"

// Fonction de test
void test_ft_strlen(const char *s, size_t expected, int *success_count) {
    size_t result = ft_strlen(s);

    if (result == expected) {
        printf(GREEN "Test passed: ft_strlen(\"%s\") == %zu\n" RESET, s, result);
        (*success_count)++;
    } else {
        printf(RED "Test failed: ft_strlen(\"%s\") == %zu (expected %zu)\n"
	RESET, s, result, expected);
    }
}

int main() {
    int success_count = 0;
    int total_tests = 0;

    // Tests de chaînes avec des longueurs différentes
    test_ft_strlen("", 0, &success_count); total_tests++; 
    test_ft_strlen("a", 1, &success_count); total_tests++;
    test_ft_strlen("Hello", 5, &success_count); total_tests++; 
    test_ft_strlen("Hello, World!", 13, &success_count); total_tests++; 

    // Tests de chaînes avec des caractères spéciaux
    test_ft_strlen("12345", 5, &success_count); total_tests++; 
    test_ft_strlen("!@#$%^&*()", 10, &success_count); total_tests++; 
    test_ft_strlen(" \t\n\r", 4, &success_count); total_tests++; 

    // Tests de longues chaînes
    const char long_string[] = "This is a long string to test the
function ft_strlen properly.";
    test_ft_strlen(long_string, strlen(long_string), &success_count);
    total_tests++;

    // Résumé des résultats
    printf(BOLDWHITE "\nTotal tests: %d, Success: %d, Failures: %d\n" RESET,
    total_tests, success_count, total_tests - success_count);

    return 0;
}
*/
