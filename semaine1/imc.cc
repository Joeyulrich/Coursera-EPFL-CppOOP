#include <iostream>
using namespace std;

/*****************************************************
 * Compléter le code à partir d'ici
 *****************************************************/

class Patient {
	
	public:
	
	void init(double poids, double taille){
		
		if (poids >= 0 && taille >= 0) { masse = poids; hauteur = taille;}
		
		else {
			
		masse = 0.0; 
		hauteur = 0.0;
		}
		
	}
	
	void afficher(){
		cout<< "Patient : "  << masse <<" kg pour "<< hauteur << " m"<< endl;
	}
	
	double poids(){
		return masse;
	}
	
	double taille(){
		return hauteur;
	}
	
	double imc(){
		 
	 if (hauteur > 0) return masse / (hauteur * hauteur);
       
        else return 0.0;
	}
	
		
	private:
	
	double masse;
	
	double hauteur;
	
};
/*******************************************
 * Ne rien modifier après cette ligne.
 *******************************************/

int main()
{
  Patient quidam;
  double poids, taille;
  do {
    cout << "Entrez un poids (kg) et une taille (m) : ";
    cin >> poids >> taille;
    quidam.init(poids, taille);
    quidam.afficher();
    cout << "IMC : " << quidam.imc() << endl;
  } while (poids * taille != 0.0);
  return 0;
}
