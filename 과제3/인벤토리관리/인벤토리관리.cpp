#include <iostream>

using namespace std;

template <typename T>	//정해진 모양을 찍어내는 함수
class Inventory
{
		private : 
			T* pitems;		//템플릿 아이템 주소값 가르킴
			int capacity;
			int size;

		public :
			Inventory(int capacity = 10)	//생성자
				: capacity(capacity > 0 ? capacity : 1), size(0) //최소값 공간 1 / 0보다 큰지 체크 size(0) 아무것도 담고 있지 않음.
			{
				pitems = new T[capacity];		//공간 주소값 복사
			}

			~Inventory()	//소멸자
			{
				delete[] pitems;	//[]로 생성 했으면 닫아줄때도 []로 해줘야됨.
				pitems = nullptr;	//nullptr초기화 될때 사용되는 값
			}
			
			//아이템 추가
			void AddItem(const T& item)
			{
				if (size < capacity)
				{
					pitems[size] = item;
					++size;	//+1
				}
				else
				{
					cout << "인벤토리가 꽉 찼습니다.!" << endl;
				}
			}

			//마지막 아이템 제거
			void RemoveLastItem()
			{
				if (size > 0)
				{
					--size;	//-1
				}
				else
				{
					cout << "인벤토리가 비어있습니다." << endl;
				}
			}

			int getSize() const	//값을 가져올때 사용하는 겟터
			{
				return size;
			}

			int getCapacity() const
			{
				return capacity;
			}

			//인벤 상태 출력
			void printAllitems() const
			{
				if (size == 0)
				{
					cout << "인벤토리가 비어있습니다." << endl;
					return;
				}

				for (int i = 0; i < size; ++i)
				{
					pitems[i].printinfo();
				}
			}
};

class Item
{
	private :
		string name;

	public :
		Item(string name = "Unknown") : name(name)	//문자열을 사용하고 인자가 주어지지 않을때 Unknown
		{
		}
		void printinfo() const
		{
			cout << "아이템 이름 : " << name << endl;
		}
};

int main()
{
	Inventory<Item> inven(3); //인벤토리 3칸

		inven.AddItem(Item("포션"));
		inven.AddItem(Item("소드"));
		inven.AddItem(Item("실드"));
		inven.AddItem(Item("보우"));

		cout << "현재 아이템 개수 : " << inven.getSize() << "/" << inven.getCapacity() << endl;

		inven.printAllitems();

		inven.RemoveLastItem();
		cout << "마지막 아이템 제거 후 : " << endl;
		inven.printAllitems();

		return 0;
}
