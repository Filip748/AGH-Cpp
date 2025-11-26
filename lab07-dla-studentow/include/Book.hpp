#ifndef BOOK_HPP
#define BOOK_HPP

#include <string>

class Book {
private:
    std::string m_title;
    std::string m_author;
    int m_year;
    int m_catalogNumber;
    bool m_isBorrow;
    int m_borrowCount;
    double m_wearLevel;
public:
    Book(std::string title, std::string author, int year, int catalog);

    ~Book();

    bool borrowBook();
    void returnBook();
    void repair();

    inline int getCatalogNumber() const{
        return m_catalogNumber;
    }
    
    inline std::string getTitle() const {
        return m_title;
    }
    inline int getBorrowCount() const {
        return m_borrowCount;
    }
    inline double getWearLevel() const {
        return m_wearLevel;
    }
    inline bool borrowed() const {
        return m_isBorrow;
    }

    void showPublic() const;
    void showSecret() const;
};


#endif