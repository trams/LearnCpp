#include <memory>

class DontDeleteMe
{
public:
    friend class std::auto_ptr<DontDeleteMe>;
private:
    ~DontDeleteMe()
    {
    }
};

int main()
{
    std::auto_ptr<DontDeleteMe> obj(new DontDeleteMe());

    return 0;
}
