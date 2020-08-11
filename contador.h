#ifndef CONTADOR_H
#define CONTADOR_H

#include <QObject>

class Contador : public QObject
{
    Q_OBJECT
public:
    explicit Contador(QObject *parent = nullptr);
    int getvalor();

public slots:
    void setValor(int valor);

signals:
    void valorCambiado(int nuevoValor);

private:
    int m_valor;
};

#endif // CONTADOR_H
