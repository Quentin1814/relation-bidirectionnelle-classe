/**
 * @file Individu.h
 * @author Lopistéguy
 * @brief Spécifie une classe Individu en relation réciproque avec sa Voiture.
 * @details Cette classe représente un Individu par son nom prénom.
 * 
 * La classe Individu est liée à la classe Voiture via un pointeur.
 * @version 0.1
 * @date 12/08/22
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef INDIVIDU_H
#define INDIVIDU_H

using namespace std;

#include "Voiture.h" // Utilisée ci-dessous
#include <iostream>

class Voiture; /* Annonce une définition ultérieure de Voiture
                   permet de faire référence aux membres de Voiture dans la classe Individu */
/**
 * @brief Représente un Individu par son nom, prénom et la voiture qu'il conduit.
 * @warning Dans cette implémentation, un Individu conduit au plus une Voiture.
 * @deprecated Utiliser à la place la classe Personne.
 */
class Individu
{
    // ATTRIBUTS
  public:
  /**
   * @brief Le nom de l'individu
   * 
   */
    string nom;
    /**
     * @brief Le prénom de l'individu
     * 
     */
    string prenom;
    /**
     * @brief Lien avec la voiture de l'individu
     * 
     */
    Voiture *maVoiture;

    // MÉTHODES
  public:
    /**
     * @brief Construit un nouvel objet de la classe Individu à partir du nom et du prénom
     * 
     */
    Individu(string = "", string = "");
    // destructeur
    ~Individu();

    // Méthodes usuelles : toString
    /**
     * @brief Retourne l'identité de l'Individu
     * 
     * @return une chaîne sous la forme "nom prénom"
     * @bug Une espace en trop entre le nom et le prénom.
     * @todo Ajouter un paramètre qui permet de choisir entre un retour du type "nom prénom" ou "prénom nom"
     */
    string toString();
    string toStringAndLink(); // Affiche l'identité de l'individu et de sa voiture s'il en a une

    // Méthodes spécifiques
    void majMaVoiture(Voiture* voiture);

    /**
     * @brief Défini la Voiture conduite par l'Individu
     * 
     * @param [in] voiture un pointeur vers un objet de la classe Voiture.
     */
    void setMaVoiture(Voiture* voiture);
    void supprimerLien();
};

#endif // INDIVIDU_H