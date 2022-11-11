#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	std::cout << "accounts:" << _nbAccounts << ";total:"
			<< _totalAmount << ";deposits:"
			<< _totalNbDeposits << ";withdrawals:"
			<< _totalNbWithdrawals << std::endl;
}

Account::Account( int initial_deposit )
{
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	std::cout << "index:" << _accountIndex 
			<< ";amount:" << _amount 
			<< ";created" << std::endl;
	_totalAmount += initial_deposit;
}

Account::~Account( void )
{
	std::cout << "index:" << _accountIndex 
			<< ";amount:" << _amount 
			<< ";closed" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	std::cout << "index:" << _accountIndex 
		<< ";p_amount:" << _amount 
		<< ";deposit:" << deposit
		<< ";amount:" << _amount + deposit
		<< ";nb_deposits:" << ++_nbDeposits << std::endl;
	_totalAmount += deposit;
	++_totalNbDeposits;
	_amount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	std::cout << "index:" << _accountIndex
		<< ";p_amount:" << _amount;
	if (withdrawal > _amount)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return (0);
	}
	else
	std::cout << ";withdrawal:" << withdrawal
			<< ";amount:" << _amount - withdrawal
			<< ";nb_withdrawals:" << ++_nbWithdrawals << std::endl;
	++_totalNbWithdrawals;
	_totalAmount -= withdrawal;
	_amount -= withdrawal;
	return (1);
}

int		Account::checkAmount( void ) const
{
	return (_amount);
}

void	Account::displayStatus( void ) const
{
	std::cout << "index:" << _accountIndex << ";amount:"
			<< _amount << ";deposits:"
			<< _nbDeposits << ";withdrawals:"
			<< _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{

}
