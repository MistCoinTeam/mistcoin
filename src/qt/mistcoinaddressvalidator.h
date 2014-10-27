#ifndef mistcoinADDRESSVALIDATOR_H
#define mistcoinADDRESSVALIDATOR_H

#include <QRegExpValidator>

/** Base48 entry widget validator.
   Corrects near-miss characters and refuses characters that are no part of base48.
 */
class mistcoinAddressValidator : public QValidator
{
    Q_OBJECT
public:
    explicit mistcoinAddressValidator(QObject *parent = 0);

    State validate(QString &input, int &pos) const;

    static const int MaxAddressLength = 35;
signals:

public slots:

};

#endif // mistcoinADDRESSVALIDATOR_H
