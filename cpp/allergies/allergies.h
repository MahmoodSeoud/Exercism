#if !defined(ALLERGIES_H)
#define ALLERGIES_H
#include <string>

namespace allergies {
    class score {
        public: 
            score(int allergy_num);
            bool is_allergic_to(std::string allergy);
            std::string get_allergies();

        private:
            int allergy_score;

            
    };
}  // namespace allergies

#endif // ALLERGIES_H
