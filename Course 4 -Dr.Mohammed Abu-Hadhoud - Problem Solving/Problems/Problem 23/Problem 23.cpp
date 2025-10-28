#include <iostream> 
#include <string>    
using namespace std; 
struct stTaskDuration
{
    int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSecond;
};
stTaskDuration ReadTaskDuration()
{
    stTaskDuration TaskDuration;
    cout << "Please Enter Number Of Days : ";
    cin >> TaskDuration.NumberOfDays;
    cout << "\nPlease Enter Number Of Hours : ";
    cin >> TaskDuration.NumberOfHours;
    cout << "\nPlease Enter Number Of Mintues : ";
    cin >> TaskDuration.NumberOfMinutes;
    cout << "\nPlease Enter Number Of Seconds : ";
    cin >> TaskDuration.NumberOfSecond;
    cout << "\n\n\n";
    return TaskDuration;

}
int TaskDurationInSecond(stTaskDuration TaskDuration)
{
    int Vr = 0;
    Vr = TaskDuration.NumberOfSecond;
    Vr += TaskDuration.NumberOfMinutes * 60;
    Vr += TaskDuration.NumberOfHours * 60 * 60;
    Vr += TaskDuration.NumberOfDays * 60 * 60 * 24;

    return Vr;
}
int main()
{
   
    cout << TaskDurationInSecond(ReadTaskDuration());


}