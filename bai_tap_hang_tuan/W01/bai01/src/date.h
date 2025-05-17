class Date
{
    private:
        int day, month, year; 
    public: 
        Date(int d, int m, int y);
        void input();
        void output();
        void increase1Days();
        void decrease1Days();
        void increaseNDays();
        void increaseNDays();
        int cmpDays();
};