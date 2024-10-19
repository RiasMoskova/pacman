class TazoDorado
{
    private:
     bool flotando;
    public:
    TazoDorado(){

    }
    ~TazoDorado(){
        this -> flotando = false;
    }
    void flotar(){
        this -> flotando = true;
    }
};
