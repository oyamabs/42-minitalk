/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchampio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:17:04 by tchampio          #+#    #+#             */
/*   Updated: 2024/10/21 09:44:05 by tchampio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;

	if (n == 0 || dest == src)
		return (dest);
	if (src < dest)
	{
		i = n;
		while (i > 0)
		{
			i--;
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

// Prototype de la fonction ft_memmove que tu devras implémenter
void *ft_memmove(void *dest, const void *src, size_t n);

// Macros pour les couleurs
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define BOLDWHITE   "\033[1m\033[37m"

// Fonction de test
void test_ft_memmove(void *dest, const void *src, size_t n,
const void *expected, int *success_count) {
    // Utilisation de ft_memmove
    ft_memmove(dest, src, n);

    // Comparaison des résultats
    if (memcmp(dest, expected, n) == 0) {
        printf(GREEN "Test passed: ft_memmove(%p, %p, %zu)\n" RESET,
	dest, src, n);
        (*success_count)++;
    } else {
        printf(RED "Test failed: ft_memmove(%p, %p, %zu)\nExpected: ",
	dest, src, n);
        for (size_t i = 0; i < n; i++) {
            printf("%02x ", ((unsigned char *)expected)[i]);
        }
        printf("\nGot: ");
        for (size_t i = 0; i < n; i++) {
            printf("%02x ", ((unsigned char *)dest)[i]);
        }
        printf("\n" RESET);
    }
}

int main() {
    int success_count = 0;
    int total_tests = 0;

    // Déclaration des buffers
    char buffer1[50], buffer2[50];

    // Test 1 : Copier une petite chaîne de caractères
    memset(buffer1, 0, sizeof(buffer1)); // Nettoyage du buffer
    const char *src1 = "Hello";
    test_ft_memmove(buffer1, src1, strlen(src1) + 1, src1, &success_count);
    total_tests++; // Copie de "Hello" avec '\0'

    // Test 2 : Copier une chaîne vide
    memset(buffer1, 0, sizeof(buffer1)); // Nettoyage du buffer
    const char *src2 = "";
    test_ft_memmove(buffer1, src2, 1, src2, &success_count);
    total_tests++; // Copie de la chaîne vide

    // Test 3 : Copier un tableau de chiffres
    memset(buffer1, 0, sizeof(buffer1)); // Nettoyage du buffer
    const char src3[] = {1, 2, 3, 4, 5};
    const char expected3[] = {1, 2, 3, 4, 5};
    test_ft_memmove(buffer1, src3, sizeof(src3), expected3, &success_count);
    total_tests++; // Copie du tableau {1, 2, 3, 4, 5}

    // Test 4 : Cas de chevauchement (src avant dest)
    memset(buffer1, 0, sizeof(buffer1)); // Nettoyage du buffer
    const char overlap_src1[] = "Overlap Test";
    memcpy(buffer1, overlap_src1, sizeof(overlap_src1)); 
    test_ft_memmove(buffer1 + 5, buffer1, strlen(overlap_src1) + 1,
    buffer1 + 5, &success_count);
    total_tests++; // Chevauchement : src est avant dest

    // Test 5 : Cas de chevauchement (dest avant src)
    memset(buffer1, 0, sizeof(buffer1)); // Nettoyage du buffer
    memcpy(buffer1, overlap_src1, sizeof(overlap_src1)); 
    test_ft_memmove(buffer1, buffer1 + 5, 10, buffer1, &success_count);
    total_tests++; // Chevauchement : dest est avant src

    // Test 6 : Copier 0 octets (ne doit rien changer)
    strcpy(buffer2, "No change");
    test_ft_memmove(buffer2, "Nothing", 0, "No change", &success_count);
    total_tests++; // Copier 0 octets, doit rester inchangé

    // Résumé des résultats
    printf(BOLDWHITE "\nTotal tests: %d, Success: %d, Failures: %d\n" RESET,
		    total_tests, success_count, total_tests - success_count);

    return 0;
}
*/
