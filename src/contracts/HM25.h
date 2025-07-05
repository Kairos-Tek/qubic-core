using namespace QPI;

struct HM252
{
};

struct HM25 : public ContractBase
{
public:
    struct _input{};
    struct proc01_output{};
    struct proc02_output{};
    struct proc03_output{};
    struct proc04_output{};
    struct proc05_output{};

    struct func01_input{};
    struct func01_output
    {
        uint64 var1;
    };
    
private:
    uint64 lastMilestone;

    PUBLIC_PROCEDURE(proc01)
        state.var1++;
   _

    PUBLIC_FUNCTION(func01)
        output.var1 = state.var1;
    _

    REGISTER_USER_FUNCTIONS_AND_PROCEDURES

        REGISTER_USER_PROCEDURE(proc01, 1);

        REGISTER_USER_FUNCTION(func01, 1);
    _

    INITIALIZE
        state.var1 = 0;
    _
};
