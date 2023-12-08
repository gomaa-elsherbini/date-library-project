#include <iostream>
#include <ctime>
#include "clsDate.h"
using namespace std;





int main()
{
	clsDate Date1;// 8/12/2023
	clsDate Date2("1/9/2022");
	clsDate Date3(11,2, 2022);
	clsDate Date4(250, 2020);


	clsDate p1SDate(1, 2, 2022);
	clsDate p1EDate(10, 2, 2022);
	
	clsDate p2SDate(25,1,  2022);
	clsDate p2EDate(5, 2, 2022);
	
	
	//Date4.Print();

	//cout<<Date3.IsWithinPeriod(p1SDate, p1EDate);
	//cout<<clsDate::IsDateWithinPeriod(p1SDate, p1EDate, Date3);
	//cout<<clsDate::periodLengthInDays(p1SDate, p1EDate);
	//cout<<clsDate::IsPeriod1OverlapPeriod2(p1SDate, p1EDate,p2SDate, p2EDate );
	cout<<clsDate::CountOverlapDays(p1SDate, p1EDate,p2SDate, p2EDate );
	cout << "\n";
	//cout<<Date3.ConvertDateToString('-');



	/*(Date2.IncreaseDateByXWeeks(2)).Print();
	cout << "\n";
	(clsDate::IncreaseDateByXWeeks(Date3, 2)).Print();
	*/

	/*(Date2.IncreaseDateByOneWeek()).Print();
	cout << "\n";
	(clsDate::IncreaseDateByOneWeek(Date3)).Print();
	*/

	/*(clsDate::IncreaseDateByOneDay(Date3)).Print();
	cout << "\n";
	(Date2.IncreaseDateByOneDay()).Print();*/


	/*cout<<clsDate::IsDayIsLastDay(Date3);
	cout << "\n";
	cout<< Date2.IsDayIsLastDay();
	*/

	/*cout<< Date2.IsEqualDate(Date2);
	cout << "\n";
	cout<<clsDate::IsDate1EqualDate2(Date3, Date3);
*/

	/*cout<< Date2.IsBeforeDate(Date3);
	cout << "\n";
	cout<<clsDate::IsDate1BeforeDate2(Date3, Date2);
	*/
	/*(Date3.AddDaysToDate(1)).Print();
	cout << "\n";
	(clsDate::AddDaysToDate(Date3, 1)).Print();
	
	*/
	/*cout<<Date3.DaysFromBeginningOfYear()<<endl;
	cout<<clsDate::DaysFromBeginningOfYear(2023, 2, 28);*/


	/*cout<<Date3.NameOfMonth()<<endl;
	cout<<clsDate::NameOfMonth(12);*/




	/*Date3.PrintMonthCalender();
	clsDate::PrintMonthCalender(2023, 12);
*/

	/*cout << Date3.NameOfDay()<<endl;
	cout << clsDate::NameOfDay(2023, 12, 10);
*/

	/*cout << Date3.OrderOfDay()<<endl;
	cout << clsDate::OrderOfDay(2022, 12, 20);*/

	/*cout << Date3.NumberOfSecondsInMonth()<<endl;
	cout << clsDate::NumberOfSecondsInMonth(2022, 12);
*/

	/*cout << Date3.NumberOfMinutesInMonth()<<endl;
	cout << clsDate::NumberOfMinutesInMonth(2022, 12);*/

	/*cout << Date3.NumberOfHoursInMonth()<<endl;
	cout << clsDate::NumberOfHoursInMonth(2022, 12);*/

	/*cout << Date3.NumberOfDaysInMonth() << endl;
	cout << clsDate::NumberOfDaysInMonth(Date3.Year(), Date3.Month()) << endl;*/

	/*cout << Date3.NumberOfSecondsInYear()<<endl;
	cout << clsDate::NumberOfSecondsInYear(2022)<<endl;*/

	/*cout << Date3.NumberOfMinutesInYear() << endl;
	cout << clsDate::NumberOfMinutesInYear(2022);*/





	/*cout << Date3.NumberOfHoursInYear()<<endl;
	cout << clsDate::NumberOfHoursInYear(2020)<<endl;*/

	/*cout << Date3.NumberOfDaysInYear() << endl;
	cout << clsDate::NumberOfDaysInYear(2020);*/

	/*cout << Date4.IsLeapYear();
	cout << endl;
	cout << clsDate::IsLeapYear(2020);*/
	
	

	system("pause>0");
	return 0;
}