#include <iostream>
#include <vector>   //배열과 달리 컨테이너 크기 조절 가능
#include <string>
//using namespace std; 를 안쓰려면 변수 앞에std:: 붙여야됨.
class PotionRecipe      //레시피 클래스
{
public:
    std::string potionName;
    std::vector<std::string> ingredients;

    PotionRecipe(const std::string& name, const std::vector<std::string>& ingredients) //const로 읽기만 가능하게 
        : potionName(name), ingredients(ingredients)
    {
    }
};

class AlchemyWorkshop       //연금술 공방 클래스
{
    private:
    std::vector<PotionRecipe> recipes; 

    public:
    void addRecipe(const std::string& name, const std::vector<std::string>& ingredients) 
    {
        recipes.push_back(PotionRecipe(name, ingredients));  //push_back : vector 컨테이너에 새로 추가
        std::cout << ">> 새로운 레시피 '" << name << "' 이(가) 추가되었습니다." << std::endl;
    }

    void displayAllRecipes() const  //레시피 출력 함수 / 읽기만 해야되서 const
    {
        if (recipes.empty())
        {
            std::cout << "아직 등록된 레시피가 없습니다." << std::endl;
            return;
        }

        std::cout << "\n--- [ 전체 레시피 목록 ] ---" << std::endl;
        for (size_t i = 0; i < recipes.size(); ++i) //컨테이너 사이즈를 전부 둘러보기위해 size붙임
        {
            std::cout << "- 물약 이름: " << recipes[i].potionName << std::endl;
            std::cout << " > 필요 재료 : ";

            for (size_t j = 0; j < recipes[i].ingredients.size(); ++j)  
            {
                std::cout << recipes[i].ingredients[j];     //레시피와 재료 호출해서 출력 
                if (j < recipes[i].ingredients.size() - 1)
                {
                    std::cout << ", ";
                }
            }
            std::cout << std::endl;
        }
        std::cout << "------------------------------\n";
    }
    // 검색 함수
    void searchbyName(const std::string& name) const    //이름도 읽기만 해야됨으로 const
    {
        for (const auto& recipe : recipes)     //auto는 자료형 크기 정할수 없어서 클래스나 맴버변수로 사용 불가 /자동 추론
        {
            if(recipe.potionName == name)
            {
                std::cout << "\n[검색 결과]" << std::endl;
                std::cout << " : " << recipe.potionName << std::endl;
                std::cout << "> 필요 재료 : ";
                for (size_t j = 0; j < recipe.ingredients.size(); ++j)
                {
                    std::cout << recipe.ingredients[j];
                    if (j < recipe.ingredients.size() - 1) std::cout << ", "; //-1이 아니라면 찾은 것, -1이라면 못 찾은 것
                }
                std::cout << std::endl;
                return;
            }
        }
        std::cout << ">> '" << name << "' 이름의 레시피를 찾을 수 없습니다." << std::endl;
    }
    //재료 검색
    void searchByIngredient(const std::string& ingredient) const
    {
        bool found = false;
        std::cout << "\n[검색 결과: '" << ingredient << "' 포함]" << std::endl;
        for (const auto& recipe : recipes)
        {
            for (const auto& ing : recipe.ingredients)
            {
                if (ing == ingredient)
                {
                    std::cout << "물약 이름: " << recipe.potionName << std::endl;
                    found = true;
                    break;
                }
            }
        }
        if (!found)
        {
            std::cout << ">> 해당 재료를 포함한 레시피가 없습니다." << std::endl;
        }
    }
};

int main() 
{
    AlchemyWorkshop myworkshop;

    while (true)
    {
        std::cout << "\n연금술 공방 관리 시스템" << std::endl;
        std::cout << "1. 레시피 추가" << std::endl;
        std::cout << "2. 모든 레시피 출력" << std::endl;
        std::cout << "3. 물약 이름으로 검색" << std::endl;
        std::cout << "4. 재료로 검색" << std::endl;
        std::cout << "5. 종료" << std::endl;
        std::cout << "선택 : ";

        int choice;
        std::cin >> choice;

        if (std::cin.fail()) 
        {
            std::cout << "잘못된 입력입니다. 숫자를 입력해주세요." << std::endl;
            std::cin.clear();   //입력값 초기화
            std::cin.ignore(10000, '\n');   //입력 10000만큼 무시
            continue;
        }

        if (choice == 1) 
        {
            std::string name;
            std::cout << "물약 이름: ";
            std::cin.ignore(); // 버퍼 정리
            std::getline(std::cin, name);   //문자열 입력받아 변수에 저장

            std::vector<std::string> ingredients_input;
            std::string ingredient;
            std::cout << "필요한 재료들을 입력하세요. (입력 완료 시 '끝' 입력)" << std::endl;

            while (true) 
            {
                std::cout << "재료 입력: ";
                std::getline(std::cin, ingredient);

                if (ingredient == "끝")  //끝 1번 레시피 등록 입력 시 반복 종료
                    break;

                ingredients_input.push_back(ingredient);
            }

            if (!ingredients_input.empty()) 
            {
                myworkshop.addRecipe(name, ingredients_input);
            }
            else 
            {
                std::cout << ">> 재료가 입력되지 않아 레시피 추가를 취소합니다." << std::endl;
            }
        }
        else if (choice == 2) 
        {
            myworkshop.displayAllRecipes();
        }
        else if (choice == 3) 
        {
            std::string name;
            std::cout << "검색할 물약 이름: ";
            std::cin.ignore();
            std::getline(std::cin, name);   
            myworkshop.searchbyName(name);
        }
        else if (choice == 4)
        {
            std::string ingredient;
            std::cout << "검색할 재료 이름: ";
            std::cin.ignore();
            std::getline(std::cin, ingredient);
            myworkshop.searchByIngredient(ingredient);
        }
        else if (choice == 5)
        {
            std::cout << "공방 문을 닫습니다..." << std::endl;
            break;
        }
        else 
        {
            std::cout << "잘못된 선택입니다. 다시 시도하세요." << std::endl;
        }
    }

    return 0;
}
