class TazoDorado
{
    private:
        bool flotando;
    public:
    TazoDorado(){
        this->flotando = false
    }
        void Inicialisar(){
        this->flotando = false
    }
    ~TazoDorado(){
        this -> flotando = false;
    }
    void Flotar(){
        this -> flotando = true;
    }
    bool Flotando(){
        return this->flotando;
    }
};
