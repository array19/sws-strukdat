// initialize data structure

#include <iostream>

using namespace std;

struct csi
{
    int num;
    string nama, badge;
    string role[3];
}csi1, csi2;




int main()
{
    // first way
    csi1.num = 1;
    csi1.nama = "jedi";
    csi1.badge = "aks";
    csi1.role[0] = "cry";
    csi1.role[1] = "rev";
    csi1.role[2] = "pwn";

    

    // second way 
    csi2 = {2, "arai", "aks", {"web", "foren"}};

    // third way
    csi csi3 = {3, "patsac", "aks", {"cry", "rev"}};
    //print out
    cout << csi1.num << endl;
    cout << csi1.nama << endl;
    cout << csi1.badge << endl;
    int n = 3;
    for (int i=0; i<n; i++)
      cout << csi1.role[i] << endl;

    // array of struct
    csi anggotabaru[3];

    cout << "\n\n\n";
    cout << csi2.badge << endl;;
  return 0;
}