#include <iostream>
#include <map>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <string>

class FakeCantor {
 private:
  std::map<std::string, float> rates{{"USD", 1.0366f},
                                     {"GBP", 0.87063f},
                                     {"CHF", 0.9881f},
                                     {"JPY", 145.12f}};
 public:
  FakeCantor() = default;
  float EuroToRate(const std::string &currency) {
    return rates[currency];
  };
};

class Currency {
 public:
  virtual Currency *AddedCurrency(float value, std::string currency) = 0;
  virtual Currency *SubtractedCurrency(float value, std::string currency) = 0;
  virtual std::string Abbreviation() = 0;
  virtual std::string Symbol() = 0;
  virtual std::string Balance() = 0;
  virtual float DollarExchangeRate() = 0;
};

class Euro : public Currency {
  // TODO: implement class
    private:
        std::string abbreviation="EUR";
        std::string symbol="€";
        std::string balance="0";
        float dollarExchangeRate;
        FakeCantor fc;

    public:
        Euro(float rate)
        {
            this->dollarExchangeRate=rate;
        }
        Euro *AddedCurrency(float value, std::string currency)
        {
            float currentbalance=atof(this->balance.c_str());
            float rate;
            float updatedbalance;
            if(currency!="EUR") rate=fc.EuroToRate(currency);
            else rate=1;
            updatedbalance=currentbalance+value/rate;
            this->balance=std::to_string(updatedbalance);
            return this;
        }
        Euro *SubtractedCurrency(float value, std::string currency)
        {
            float currentbalance=atof(this->balance.c_str());
            float rate;
            float updatedbalance;
            if(currency!="EUR") rate=fc.EuroToRate(currency);
            else rate=1;
            if(currentbalance-value/rate>=0) updatedbalance=currentbalance-value/rate;
            this->balance=std::to_string(updatedbalance);
            return this;
        }
        std::string Abbreviation()
        {
            return this->abbreviation;
        }
        std::string Symbol()
        {
            return this->symbol;
        }
        std::string Balance()
        {
            return this->balance;
        }
        float DollarExchangeRate()
        {
            return this->dollarExchangeRate;
        }
};

int main() {
  // TODO: showcase usage

  FakeCantor MyCantor;
  float rate=MyCantor.EuroToRate("USD");
  Euro EuroCurrency(rate);

  std::cout<<EuroCurrency.Abbreviation()<<std::endl;
  std::cout<<EuroCurrency.Symbol()<<std::endl;
  std::cout<<EuroCurrency.Balance()<<std::endl;
  std::cout<<EuroCurrency.DollarExchangeRate()<<std::endl;

  EuroCurrency.AddedCurrency(10,"EUR");
  std::cout<<EuroCurrency.Balance()<<std::endl;

  EuroCurrency.SubtractedCurrency(10,"JPY");
  std::cout<<EuroCurrency.Balance()<<std::endl;

  return 0;
}
