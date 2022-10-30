#include "ex01.h"

class Contact {
    private:
        string f_name;
        string l_name;
        string n_name;
        string phone_number;
        string d_secret;

    void set_first_name(string _f_name)
    {
        this->f_name = _f_name;
    }

    void set_last_name(string _l_name)
    {
        this->l_name = _l_name;
    }

    void set_n_name(string _n_name)
    {
        this->n_name = _n_name;
    }

    void set_phone_number(string _phone_number)
    {
        this->phone_number = _phone_number;
    }

    void set_d_secret(string _d_secret)
    {
        this->d_secret = _d_secret;
    }

    public:
    void add(string _f_name, string _l_name, string _n_name, string _ph_n,
            string _d_secret)
    {
        set_first_name(_f_name);
        set_last_name(_l_name);
        set_phone_number(_ph_n);
        set_n_name(_n_name);
        set_d_secret(_d_secret);
    }

    void print_f_name()
    {
        if (f_name.size() < 10) {
            cout << this->f_name << "|";
            return ;
        }
        for (int i = 0; i < 9; ++i)
        {
            cout << this->f_name[i];
        }
        cout << ".|";
    }

    void print_d_secret()
    {
        if (_d_secret.size() < 10) {
            cout << this->_d_secret << "|";
            return ;
        }
        for (int i = 0; i < 9; ++i)
        {
            cout << this->_d_secret[i];
        }
        cout << ".|";
    }

    void print_phone_number()
    {
        if (phone_number.size() < 10) {
            cout << this->phone_number << "|";
            return ;
        }
        for (int i = 0; i < 9; ++i)
        {
            cout << this->phone_number[i];
        }
        cout << ".|";
    }

    void print_l_name()
    {
        if (l_name.size() < 10) {
            cout << this->l_name << "|";
            return ;
        }
        for (int i = 0; i < 9; ++i)
        {
            cout << this->l_name[i];
        }
        cout << ".|";
    }

    void print_n_name()
    {
        if (n_name.size() < 10) {
            cout << this->n_name << "|";
            return ;
        }
        for (int i = 0; i < 9; ++i)
        {
            cout << this->n_name[i];
        }
        cout << ".|";
    }

}
