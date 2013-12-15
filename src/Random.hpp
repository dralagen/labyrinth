/**
 * \file Random.hpp
 * \brief Singleton de gestion de nombre aléatoire
 * \author Dralagen
 * \version 1.1
 * \date 15/12/2013
 */

#ifndef RANDOM_HPP
#define RANDOM_HPP

#include <cstdlib>

/**
 * \class Random
 * \brief Gestion des nombres aléatoire
 *
 * Utilise rand() du C initialise lui même la seed
 *
 * Appelle lui même srand() a là 1er utilisation
 *
 */
class Random
{
	public:
		/**
		 * \brief Récupère l'instance de la classe Random
		 *
		 * Instancie la classe Random si besoin
		 *
		 * /!\ fait le test si Random est instancié a chaque appel
		 *
		 * \return Instance de la classe Random
		 */
		static Random* getInstance() {
			if (s_instance == 0) {
				Random();
			}
			return s_instance;
		}


		/**
		 * \brief Récupère un nombre aléatoire avec rand()
		 *
		 * Instancie la classe Random si besoin
		 *
		 * /!\ fait le test si Random est instancié a chaque appel
		 *
		 * \return un entier aléatoire entre 0 et RAND_MAX
		 */
		static int getRandom() {
			if (s_instance == 0) {
				Random();
			}
			return rand();
		}

		/**
		 * \brief Récupère un nombre aléatoire avec rand()
		 *
		 * \return un entier aléatoire entre 0 et RAND_MAX
		 */
		int getRand();

		virtual ~Random ();

	private:
		static Random *s_instance; ///< pointeur vers l'instance de Random

		Random();
};

#endif /* RANDOM_HPP */

