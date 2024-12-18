/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchampio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:38:13 by tchampio          #+#    #+#             */
/*   Updated: 2024/10/14 13:55:09 by tchampio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

// Couleurs pour les résultats des tests
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"

// Prototype de la fonction à tester (ft_isalpha)
int ft_isalpha(int c);

// Fonction main avec les tests
int main() {
    int test_count = 0;
    int pass_count = 0;

    // Test 1: Min valeur possible (-1)
    test_count++;
    if (ft_isalpha(-1) == 0) {
        printf(GREEN "Test 1 (ft_isalpha(-1)): Passed\n" RESET);
        pass_count++;
    } else {
        printf(RED "Test 1 (ft_isalpha(-1)): Failed\n" RESET);
    }

    // Test 2: Min caractère alphabétique 'A'
    test_count++;
    if (ft_isalpha('A') == 1) {
        printf(GREEN "Test 2 (ft_isalpha('A')): Passed\n" RESET);
        pass_count++;
    } else {
        printf(RED "Test 2 (ft_isalpha('A')): Failed\n" RESET);
    }

    // Test 3: Min caractère alphabétique 'a'
    test_count++;
    if (ft_isalpha('a') == 1) {
        printf(GREEN "Test 3 (ft_isalpha('a')): Passed\n" RESET);
        pass_count++;
    } else {
        printf(RED "Test 3 (ft_isalpha('a')): Failed\n" RESET);
    }

    // Test 4: Caractère non alphabétique '1'
    test_count++;
    if (ft_isalpha('1') == 0) {
        printf(GREEN "Test 4 (ft_isalpha('1')): Passed\n" RESET);
        pass_count++;
    } else {
        printf(RED "Test 4 (ft_isalpha('1')): Failed\n" RESET);
    }

    // Test 5: Max caractère alphabétique 'Z'
    test_count++;
    if (ft_isalpha('Z') == 1) {
        printf(GREEN "Test 5 (ft_isalpha('Z')): Passed\n" RESET);
        pass_count++;
    } else {
        printf(RED "Test 5 (ft_isalpha('Z')): Failed\n" RESET);
    }

    // Test 6: Caractère non alphabétique '$'
    test_count++;
    if (ft_isalpha('$') == 0) {
        printf(GREEN "Test 6 (ft_isalpha('$')): Passed\n" RESET);
        pass_count++;
    } else {
        printf(RED "Test 6 (ft_isalpha('$')): Failed\n" RESET);
    }

    // Test 7: Max valeur possible (128, non-alpha)
    test_count++;
    if (ft_isalpha(128) == 0) {
        printf(GREEN "Test 7 (ft_isalpha(128)): Passed\n" RESET);
        pass_count++;
    } else {
        printf(RED "Test 7 (ft_isalpha(128)): Failed\n" RESET);
    }

    // Résultats finaux
    printf("\nRésultats des tests: %d/%d tests réussis.\n", 
		    pass_count, test_count);

    return 0;
}
*/
