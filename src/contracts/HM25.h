using namespace QPI;

struct HM252
{
};

struct HM25 : public ContractBase
{
public:
    struct proc01_input{};
    struct proc01_output{};
    struct proc02_input{};
    struct proc02_output{};
    struct proc03_input{};
    struct proc03_output{};
    struct proc04_input{};
    struct proc04_output{};
    struct proc05_input{};
    struct proc05_output{};

    struct func01_input{};
    struct func01_output
    {
        uint64 var1;
    };
    
private:
    uint64 var1;
    uint64 var2;
    uint64 var3;
    uint64 var4;
    uint64 var5;

    PUBLIC_PROCEDURE(proc01)
        state.var1++;
   _

    PUBLIC_PROCEDURE(proc02)
        state.var2++;
   _

    PUBLIC_PROCEDURE(proc03)
        state.var3++;
   _

    PUBLIC_PROCEDURE(proc04)
        state.var4++;
   _

    PUBLIC_PROCEDURE(proc05)
        state.var5++;
   _

    PUBLIC_FUNCTION(func01)
        output.var1 = state.var1;
    _

    REGISTER_USER_FUNCTIONS_AND_PROCEDURES

        REGISTER_USER_PROCEDURE(proc01, 1);
        REGISTER_USER_PROCEDURE(proc02, 2);
        REGISTER_USER_PROCEDURE(proc03, 3);
        REGISTER_USER_PROCEDURE(proc04, 4);
        REGISTER_USER_PROCEDURE(proc05, 5);

        REGISTER_USER_FUNCTION(func01, 1);
    _

    INITIALIZE
        state.var1 = 1;
        state.var2 = 2;
        state.var3 = 3;
        state.var4 = 4;
        state.var5 = 5;
    _
};
