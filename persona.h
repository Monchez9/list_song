class Persona{
    private:
    //ejemlpos
    int cedula;
    //aqui todos los datos privados que necesite el objeto 
    public:
    //aqui todos los datos publicos que necestita el objeto
    void setCedula(int);
    int getCedula();
    Persona();//constructor
    ~Persona();//destructor
}