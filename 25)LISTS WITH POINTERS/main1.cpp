#include <iostream>
#include <string>

using namespace std;

class User
{
private:
    int userId[2];
    string name;
    int age;
    double height;
    string gender;
    double shoeSize;

public:
    User *next;
    User() {} // default constructor

    User(int id1, int id2, string name, int age, double height, string gender, double shoeSize)
        : userId{id1, id2}, name{name}, age{age}, height{height}, gender{gender}, shoeSize{shoeSize}
    {
        next = NULL;
    }

    void setUserId(int id1, int id2)
    {
        userId[0] = id1;
        userId[1] = id2;
    }

    void setName(string name)
    {
        this->name = name;
    }

    void setAge(int age)
    {
        this->age = age;
    }

    void setHeight(double height)
    {
        this->height = height;
    }

    void setGender(string gender)
    {
        this->gender = gender;
    }

    void setShoeSize(double shoeSize)
    {
        this->shoeSize = shoeSize;
    }

    int *getUserId()
    {
        return userId;
    }

    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }

    double getHeight()
    {
        return height;
    }

    string getGender()
    {
        return gender;
    }

    double getShoeSize()
    {
        return shoeSize;
    }

    string getDemographic()
    {
        if (age >= 0 && age <= 2)
        {
            return "infant";
        }
        else if (age >= 3 && age <= 5)
        {
            return "toddler";
        }
        else if (age >= 10 && age <= 12)
        {
            return "child";
        }
        else if (age >= 13 && age <= 19)
        {
            return "teenager";
        }
        else
        {
            return "adult";
        }
    }
};

class Shoe
{
private:
    int id;
    double size, width;
    string style, brand, color, demographic;

public:
    Shoe *next;
    int static nextID;

    Shoe() {} // default constructor

    Shoe(double size, double width, string style, string brand, string color, string demographic)
        : size{size}, width{width}, style{style}, brand{brand}, color{color}, demographic{demographic}
    {
        nextID++;
        id = nextID;

        next = NULL;
    }

    void setSize(double size)
    {
        this->size = size;
    }

    void setWidth(double width)
    {
        this->width = width;
    }

    void setStyle(string style)
    {
        this->style = style;
    }

    void setBrand(string brand)
    {
        this->brand = brand;
    }

    void setColor(string color)
    {
        this->color = color;
    }

    void setDemographic(string demographic)
    {
        this->demographic = demographic;
    }

    double getSize()
    {
        return size;
    }

    double getWidth()
    {
        return width;
    }

    string getStyle()
    {
        return style;
    }

    string getBrand()
    {
        return brand;
    }

    string getColor()
    {
        return color;
    }

    string getDemographic()
    {
        return demographic;
    }

    int getID()
    {
        return id;
    }
};

int Shoe::nextID = 0;

void create_node_user(User *&head)
{
    string name, stdId, gender;
    int age, idNum1, idNum2;
    double height, shoeSize;
    cout << "Enter your Student ID (22k-1234): ";
    cin >> stdId;
    idNum1 = (int)stoi(stdId.substr(0, 2));
    idNum2 = (int)stoi(stdId.substr(4, 4));
    // cout << "Id is " << idNum1 << " and " << idNum2 << endl;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Gender: ";
    cin >> gender;
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter Height: ";
    cin >> height;
    cout << "Enter Shoe Size: ";
    cin >> shoeSize;
    User *n = new User(idNum1, idNum2, name, age, height, gender, shoeSize);

    if (head == NULL)
    {
        head = n;
        return;
    }

    User *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n; // by constructor n->next may NULL hay
}

void output_list_User(User *head)
{
    User *current = head;
    while (current != NULL)
    {
        int *userIdPtr = current->getUserId();
        cout << "User ID: " << userIdPtr[0] << "," << userIdPtr[1] << endl;
        cout << "user Name: " << current->getName() << endl;
        cout << "user Gender: " << current->getGender() << endl;
        cout << "user Age: " << current->getAge() << endl;
        cout << "user Height: " << current->getHeight() << endl;
        cout << "user shoeSize: " << current->getShoeSize() << endl;
        cout << "--------------------------------------------" << endl;
        current = current->next; // current = (*current).next;
    }
}

void create_node_shoe(Shoe *&head)
{

    double size, width;
    string style, brand, color, demographic;
    cout << "Enter Size Of Shoe: ";
    cin >> size;
    cout << "Enter Width Of Shoe: ";
    cin >> width;
    cout << "Enter Style(running shoes, sneakers, stiletto,etc.): ";
    cin >> style;
    cout << "Enter Brand: ";
    cin >> brand;
    cout << "Enter Color: ";
    cin >> color;
    cout << "Enter Demographic(infant, toddler, child, adult): ";
    cin >> demographic;

    Shoe *n = new Shoe(size, width, style, brand, color, demographic);

    if (head == NULL)
    {
        head = n;
        return;
    }

    Shoe *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n; // by constructor n->next may NULL hay
}

void output_list_Shoe(Shoe *head)
{
    Shoe *current = head;
    while (current != NULL)
    {
        cout << "Shoe ID: " << current->getID() << endl;
        cout << "Shoe Size: " << current->getSize() << endl;
        cout << "Shoe width: " << current->getWidth() << endl;
        cout << "Shoe Style: " << current->getStyle() << endl;
        cout << "Shoe Brand: " << current->getBrand() << endl;
        cout << "Shoe Color: " << current->getColor() << endl;
        cout << "Shoe Demographic: " << current->getDemographic() << endl;
        cout << "--------------------------------------------" << endl;
        current = current->next; // current = (*current).next;
    }
}

User *chk_user(User *head)
{
    User *current = head;
    int idNum1, idNum2;
    string std_id;
    cout << "Enter ID(22k-1234)" << endl;
    cin >> std_id;
    idNum1 = (int)stoi(std_id.substr(0, 2));
    idNum2 = (int)stoi(std_id.substr(4, 4));
    while (current != NULL)
    {
        int *userIdPtr = current->getUserId();
        // cout << "User ID: " << userIdPtr[0] << "," << userIdPtr[1] << endl;
        if (userIdPtr[0] == idNum1 && userIdPtr[1] == idNum2)
        {
            cout << "Log In Successful" << endl;
            return current;
        }
        current = current->next; // current = (*current).next;
    }
    return 0;
}

int update_user(User *logged)
{
    User *current = logged;
    int opt, temp2;
    string temp;
    int *userIdPtr;
    while (true)
    {
        userIdPtr = current->getUserId();
        cout << "User ID: " << userIdPtr[0] << "," << userIdPtr[1] << endl;
        cout << "user Name: " << current->getName() << endl;
        cout << "user Gender: " << current->getGender() << endl;
        cout << "user Age: " << current->getAge() << endl;
        cout << "user Height: " << current->getHeight() << endl;
        cout << "user shoeSize: " << current->getShoeSize() << endl;
        cout << "--------------------------------------------" << endl;
        cout << "To Update:\n\t1. Name\n\t2. Gender\n\t3. Age\n\t4. Height\n\t5. Shoe Size\n\t6. Back" << endl;
        cin >> opt;
        switch (opt)
        {
        case 1:
            cout << "Enter your Name" << endl;
            cin >> temp;
            current->setName(temp);
            break;
        case 2:
            cout << "Enter your Gender" << endl;
            cin >> temp;
            current->setGender(temp);
            break;
        case 3:
            cout << "Enter your Age" << endl;
            cin >> temp;
            current->setAge(temp2);
            break;
        case 4:
            cout << "Enter your Height" << endl;
            cin >> temp;
            current->setHeight(temp2);
            break;
        case 5:
            cout << "Enter your shoeSize" << endl;
            cin >> temp;
            current->setShoeSize(temp2);
            break;
        case 6:
            cout << "Exit" << endl;
            return 0;
            break;

        default:
            cout << "invalid Option" << endl;
            break;
        }
    }

    return 0;
}

int update_shoe(Shoe *head)
{
    Shoe *current = head;
    int opt, temp2;
    string temp;
    cout << "Enter Shoe ID" << endl;
    cin >> temp2;
    while (current != NULL)
    {
        if (current->getID() == temp2)
        {
            while (true)
            {
                cout << "Shoe ID: " << current->getID() << endl;
                cout << "Shoe Size: " << current->getSize() << endl;
                cout << "Shoe width: " << current->getWidth() << endl;
                cout << "Shoe Style: " << current->getStyle() << endl;
                cout << "Shoe Brand: " << current->getBrand() << endl;
                cout << "Shoe Color: " << current->getColor() << endl;
                cout << "Shoe Demographic: " << current->getDemographic() << endl;
                cout << "--------------------------------------------" << endl;
                cout << "To Update:\n\t1. Size\n\t2. Width\n\t3. Style\n\t4. Brand\n\t5. Color\n\t6. Demographic\n\t7. Back" << endl;
                cin >> opt;
                switch (opt)
                {
                case 1:
                    cout << "Enter Size" << endl;
                    cin >> temp2;
                    current->setSize(temp2);
                    break;
                case 2:
                    cout << "Enter Width" << endl;
                    cin >> temp2;
                    current->setWidth(temp2);
                    break;
                case 3:
                    cout << "Enter Style(running shoes, sneakers, stiletto,etc.)" << endl;
                    cin >> temp;
                    current->setStyle(temp);
                    break;
                case 4:
                    cout << "Enter Brand" << endl;
                    cin >> temp;
                    current->setBrand(temp);
                    break;
                case 5:
                    cout << "Enter Color" << endl;
                    cin >> temp;
                    current->setColor(temp);
                    break;
                case 6:
                    cout << "Enter Demographic(infant, toddler, child, adult)" << endl;
                    cin >> temp;
                    current->setDemographic(temp);
                    break;
                case 7:
                    cout << "Exit" << endl;
                    return 0;
                    break;

                default:
                    cout << "invalid Option" << endl;
                    break;
                }
            }

            break;
        }
        current = current->next; // current = (*current).next;
    }
    return 0;
}

void see_shoe_by_user(Shoe *head, User *logged)
{
    User *current = logged;
    Shoe *current2 = head;
    int count = 0;
    while (current2 != NULL)
    {
        if (current->getDemographic() == current2->getDemographic())
        {
            cout << "Shoe ID: " << current2->getID() << endl;
            cout << "Shoe Size: " << current2->getSize() << endl;
            cout << "Shoe width: " << current2->getWidth() << endl;
            cout << "Shoe Style: " << current2->getStyle() << endl;
            cout << "Shoe Brand: " << current2->getBrand() << endl;
            cout << "Shoe Color: " << current2->getColor() << endl;
            cout << "Shoe Demographic: " << current2->getDemographic() << endl;
            cout << "--------------------------------------------" << endl;
            count++;
        }
        current2 = current2->next;
    }

    if (count == 0)
    {
        cout << "According To User Detail...No Shoe Found" << endl;
    }
}

int specific_user(User *head)
{
    User *current = head;
    int idNum1, idNum2;
    string std_id;
    cout << "Enter ID(22k-1234)" << endl;
    cin >> std_id;
    idNum1 = (int)stoi(std_id.substr(0, 2));
    idNum2 = (int)stoi(std_id.substr(4, 4));
    while (current != NULL)
    {
        int *userIdPtr = current->getUserId();
        if (userIdPtr[0] == idNum1 && userIdPtr[1] == idNum2)
        {
            cout << "User ID: " << userIdPtr[0] << "," << userIdPtr[1] << endl;
            cout << "user Name: " << current->getName() << endl;
            cout << "user Gender: " << current->getGender() << endl;
            cout << "user Age: " << current->getAge() << endl;
            cout << "user Height: " << current->getHeight() << endl;
            cout << "user shoeSize: " << current->getShoeSize() << endl;
            cout << "--------------------------------------------" << endl;
            break;
        }
        current = current->next; // current = (*current).next;
    }
    return 0;
}

int specific_shoe(Shoe *head)
{
    Shoe *current = head;
    int opt, temp2;
    cout << "Enter Shoe ID" << endl;
    cin >> temp2;
    while (current != NULL)
    {
        if (current->getID() == temp2)
        {
            cout << "Shoe ID: " << current->getID() << endl;
            cout << "Shoe Size: " << current->getSize() << endl;
            cout << "Shoe width: " << current->getWidth() << endl;
            cout << "Shoe Style: " << current->getStyle() << endl;
            cout << "Shoe Brand: " << current->getBrand() << endl;
            cout << "Shoe Color: " << current->getColor() << endl;
            cout << "Shoe Demographic: " << current->getDemographic() << endl;
            cout << "--------------------------------------------" << endl;
            break;
        }
        current = current->next; // current = (*current).next;
    }
    return 0;
}

int main()
{
    User *headUser = NULL;

    Shoe *headShoe = NULL;

    bool flag1;

    User *login_session;

    int opt;
    while (true)
    {
        cout << "Enter Your Choice\n1. User\n2. Shoe\n3. Exit" << endl;
        cin >> opt;
        switch (opt)
        {
        case 1:
            cout << "User" << endl;
            flag1 = true;
            while (flag1)
            {
                cout << "1.Create user\n2.login user\n3.Back" << endl;
                cin >> opt;
                switch (opt)
                {
                case 1:
                    cout << "Create User" << endl;
                    create_node_user(headUser);
                    break;

                case 2:

                    login_session = chk_user(headUser);
                    if (login_session != 0)
                    {
                        flag1 = true;
                        while (flag1)
                        {
                            cout << "Enter Your Choice\n1. See profile & Update User\n2. See Shoes According To your Data\n3. See Shoes List\n4. Logout" << endl;
                            cin >> opt;
                            switch (opt)
                            {
                            case 1:
                                cout << "Update User" << endl;
                                update_user(login_session);
                                break;
                            case 2:
                                cout << "See Shoes According To your Data" << endl;
                                see_shoe_by_user(headShoe, login_session);
                                break;
                            case 3:
                                cout << "See Shoes List" << endl;
                                output_list_Shoe(headShoe);
                                break;
                            case 4:
                                cout << "Exit" << endl;
                                login_session = NULL;
                                flag1 = false;
                                break;
                            default:
                                cout << "Invalid option" << endl;
                                break;
                            }
                        }
                    }
                    else
                    {
                        cout << "No User Found" << endl;
                    }
                    break;
                case 3:
                    cout << "Back" << endl;
                    flag1 = false;

                    break;
                default:
                    cout << "Invalid option" << endl;
                    break;
                }
            }

            break;
        case 2:
            cout << "Shoes" << endl;
            flag1 = true;
            while (flag1)
            {
                cout << "Enter Your Choice\n1. Create Shoe\n2. Update Shoe\n3. See All users\n4. See Specific User\n5. See Shoes List\n6. See Specific Shoes\n7. Back" << endl;
                cin >> opt;
                switch (opt)
                {
                case 1:
                    cout << "Create Shoe" << endl;
                    create_node_shoe(headShoe);
                    break;
                case 2:
                    cout << "Update Shoe" << endl;
                    update_shoe(headShoe);
                    break;
                case 3:
                    cout << "See All users" << endl;
                    output_list_User(headUser);
                    break;
                case 4:
                    cout << "See Specific User" << endl;
                    specific_user(headUser);
                    break;
                case 5:
                    cout << "See Shoes List" << endl;
                    output_list_Shoe(headShoe);
                    break;
                case 6:
                    cout << "See Specific Shoes" << endl;
                    specific_shoe(headShoe);
                    break;
                case 7:
                    cout << "Back" << endl;
                    flag1 = false;
                    break;

                default:
                    cout << "Invalid option" << endl;
                    break;
                }
            }
            break;

        case 3:
            cout << "Exit" << endl;
            return 0;
            break;

        default:
            cout << "Invalid option" << endl;
            break;
        }
    }

    return 0;
}
