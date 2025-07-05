#pragma once

#include "structs.h"

using namespace QPI;

// SC structs

struct Deposit_input
{
    uint64 amount;
};

struct Deposit_output
{
    uint64 newBalance;
};

struct Withdraw_input
{
    uint64 amount;
};

struct Withdraw_output
{
    uint64 remainingBalance;
};

struct Transfer_input
{
    id recipient;
    uint64 amount;
};

struct Transfer_output
{
    uint64 senderBalance;
    uint64 recipientBalance;
};

struct GetBalance_input
{
    id user;
};

struct GetBalance_output
{
    uint64 balance;
};

struct AdminWithdraw_input
{
    id user;
    uint64 amount;
};

struct AdminWithdraw_output
{
    uint64 withdrawnAmount;
};

struct UserBalance
{
    id user;
    uint64 balance;
};
