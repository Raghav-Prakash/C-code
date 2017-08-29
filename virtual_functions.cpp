class Person
{
  public:
    string name;
    int age;

    virtual void getdata() {}
    virtual void putdata() {}
};

class Professor : public Person
{
  public:

    int publications;

    int id;
    static int cur_id;

    void getdata()
    {
      cin >> name >> age >> publications;
      cur_id++;
      id = cur_id;
    }

    void putdata()
    {
      cout << name << " " << age << " " << publications << " " << id << endl;
    }
};
int Professor::cur_id = 0;

class Student : public Person
{
  public:

    int marks[6];

    static int cur_id;
    int id;

    void getdata()
    {
      cin >> name >> age;
      for(int i = 0; i < 6; i++)
      {
        int score;
        cin >> score;

        marks[i] = score;
      }
      cur_id++;
      id = cur_id;
    }

    void putdata()
    {
      cout << name << " " << age << " ";

      int sum = 0;
      for(int i = 0; i < 6; i++)
        sum += marks[i];

      cout << sum << " " << id << endl;
    }
};
int Student::cur_id = 0;
