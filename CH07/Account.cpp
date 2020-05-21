class Account {
public:
    static double rate() {return interestRate; }
    static void rate(double);
    void calculate() {amount += amount * interestRate; }
private:
    static constexpr int period = 30;
    double daily_tbl[period];
    static double interestRate;
    static double initRate();
    double amount;
};