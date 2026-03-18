#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nombreAlumno, Materia;
    double promedio, descuentoEr, error, nError, nota1, nota2, nota3, respuestaExp, RespuestaDoc, bonificacionExp, bonificacionDoc, notaNeta;
    bool notaValida1, notaValida2;

    error = 0.5;

    cout << "Ingrese el nombre del alumno" << endl;
    getline(cin, nombreAlumno);

    cout << "Ingrese la Asignatura" << endl;
    getline(cin, Materia);



do{
    cout << "Ingrese la nota - 1" << endl;
    cin >> nota1;

    cout << "Ingrese la nota - 2" << endl;
    cin >> nota2;

    cout << "Ingrese la nota - 3" << endl;
    cin >> nota3;

    notaValida1 = nota1 < 0 || nota2 < 0 || nota3 < 0;
    notaValida2 = nota1 > 10 || nota2 > 10  || nota3 > 10;

}while(notaValida1 || notaValida2);

    promedio = (nota1 + nota2 +nota3)/3;
    notaNeta = promedio;


    cout << "Ingresar el numero de errores cometidos" << endl;
    cin >> nError;

    descuentoEr = (nError*error);

    cout << "El alumno realizo la exposicion: si - 1 | no - 2" << endl;
    cin >> respuestaExp;

    bonificacionExp = 0;
    bonificacionDoc = 0;
    if(respuestaExp == 1){

        bonificacionExp = bonificacionExp + 0.5;

    }

    cout << "El alumno subio toda la documentacion: si - 1 | no - 2" << endl;
    cin >> RespuestaDoc;

    if(respuestaExp == 1){

    bonificacionDoc = bonificacionDoc + 0.5;

    }

    promedio = promedio - descuentoEr + bonificacionDoc + bonificacionExp;


    bool excelente, aprobado, recuperacion, reprobado;

    excelente = promedio <= 10 && promedio >=9;
    aprobado = promedio <= 8.99 && promedio >=7;
    recuperacion = promedio <= 6.99 && promedio >=5;
    reprobado = promedio < 5;

    string estado = "";

    if(excelente){
        estado = "excelente";
    }

        if(aprobado){
        estado = "aprobado";
    }


        if(recuperacion){
        estado = "recuperacion";
    }

        if(reprobado){
        estado = "reprobado";
    }


    cout << "El promedio del Alumno: " << nombreAlumno << " es - " << promedio << endl;
    cout << "Estado: " << estado << endl;
    cout << "Ajustes aplicados: Errores: " << descuentoEr << " Documentacion: " << bonificacionDoc << " Exposicion: " << bonificacionExp << endl;
    if (bonificacionDoc == 0){
        cout << "Observacion: Buen producto, Mala formalidad";
    }

    return 0;
}
