/**
 * \file ItemFactory.hpp
 *
 * \author Dralagen
 * \version 1.0
 * \date 22/11/2013
 */
#ifndef ITEMFACTORY_HPP
#define ITEMFACTORY_HPP

#include "Casque.hpp"
#include "Conso.hpp"
#include "Dague.hpp"
#include "Epee.hpp"
#include "Hache.hpp"
#include "Jambe.hpp"
#include "Torse.hpp"
/**
 * \brief Type des differentes factory concretes
 * */
enum ITEM_FACTORIES
{
	FORCEF,
	VIEF,
	CHANCEF
};
/**
 * \class ItemFactory
 * \brief Factory abstraite pour la creation des factory concretes
 */
class ItemFactory
{
	public:
		/*
		 * \brief Renvoie un pointeur vers un Casque pour que 
		 * la factory concrete connaisse l'objet a creer
		 * \return Casque* Pointeur vers Casque
		 * */
		virtual Casque* GetCasque() = 0;
		/*
		 * \brief Renvoie un pointeur vers un Torse pour que 
		 * la factory concrete connaisse l'objet a creer
		 * \retun Torse* Pointeur vers Torse
		 * */
		virtual Torse* GetTorse() = 0;
		/*
		 * \brief Renvoie un pointeur vers Jambe pour que 
		 * la factory concrete connaisse l'objet a creer
		 * \return Jambe* Pointeur vers Jambe
		 * */
		virtual Jambe* GetJambe() = 0;
		/*
		 * \brief Renvoie un pointeur vers un Consomable pour que 
		 * la factory concrete connaisse l'objet a creer
		 * \return Conso* Pointeur vers Conso
		 * */
		virtual Conso* GetConso() = 0;
		/*
		 * \brief Renvoie un pointeur vers une Epee pour que 
		 * la factory concrete connaisse l'objet a creer
		 * \return Epee* Pointeur vers Epee
		 * */
		virtual Epee* GetEpee() = 0;
		/*
		 * \brief Renvoie un pointeur vers une Dague pour que 
		 * la factory concrete connaisse l'objet a creer
		 * \return Dague* Pointeur vers Dague
		 * */
		virtual Dague* GetDague() = 0;
		/*
		 * \brief Renvoie un pointeur vers une Hache pour que 
		 * la factory concrete connaisse l'objet a creer
		 * \return Hache* Pointeur vers Hache
		 * */
		virtual Hache* GetHache() = 0;
		/**
		 * \brief Methode qui creer une factory concrete en fonction
		 * du type passe en parametre
		 * \param ITEM_FACTORIES type de la factory
		 * \return ItemFactory* Pointeur vers une factory concrete
		 * */
		static ItemFactory* CreateFactory(ITEM_FACTORIES factory);
};

#include "ForceFactory.hpp"
#include "VieFactory.hpp"
#include "ChanceFactory.hpp"

#endif /* ITEMFACTORY_HPP */
