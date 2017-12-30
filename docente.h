#ifndef DOCENTE_H
  #define DOCENTE_H

  typedef struct _docente{
    //Basic info given on the file
    long id;
    char* name;

    //Info used during the processing
    int totalPoints;

    struct _docente* next;
    struct _docente* prev;
    struct _docente* last;
  }docente;

  docente* createDocente(long id, char* nome);
  void destroyDocente(docente* docenteToDestroy);

  void addDocente(docente** docenteList, long id, char* name);
  void destroyAllDocente(docente** docentes);
#endif
