Labyrinth RPG
=============

Install
-------

Télécharger les fichiers sources avec l'une de ces commande :

Sources récente avec _git_ :

```
git clone git://github.com/dralagen/labyrinth.git
git clone git://dralagen.fr/labyrinth.git
```

Sources de la version 1.0 avec _wget_ :

```
wget https://github.com/dralagen/labyrinth/archive/v1.0.zip
wget http://git.dralagen.fr/?p=labyrinth.git;a=snapshot;h=v1.0;sf=tgz
```

Puis compiler :

```
cd labyrinth/src
make
```

Launch
------

```
./laby
```
ou
```
./laby width height "Name"
```

Par default _width_ = _height_ = 8 avec _width_ et _height_ correspond au nombre de salle en largeur et en hauteur.

Limite:

* minimum : 2x2 mais labyrinthe impossible a finir.
* optimale : entre 8x8 et 12x12.
* maxium : aucune sauf que l'affichage se fait mal si l'on dépasse la largeur de ton terminal.

