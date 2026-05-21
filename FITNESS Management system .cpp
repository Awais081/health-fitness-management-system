
#include <iostream>
using namespace std;

int main()
{
    int choice;
    char repeat;

    // Patient basic info
    string name;
    int age;

    cout << "========================================\n";
    cout << " HEALTH & FITNESS MANAGEMENT SYSTEM \n";
    cout << "========================================\n";

    cout << "\nEnter Patient Name: ";
    cin >> name;
    cout << "Enter Age: ";
    cin >> age;

    do
    {
        cout << "\n----------- MAIN MENU -----------";
        cout << "\n1. BMI Diagnosis";
        cout << "\n2. Blood Pressure Diagnosis";
        cout << "\n3. Blood Sugar Diagnosis";
        cout << "\n4. ECG Diagnosis";
        cout << "\n5. Doctor Appointment";
        cout << "\n6. Recheck Reminder";
        cout << "\n7. Health Cost Estimation";
        cout << "\n8. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        // -------- BMI --------
        case 1:
        {
            float weight, height, bmi;
            cout << "\nEnter Weight (kg): ";
            cin >> weight;
            cout << "Enter Height (meters): ";
            cin >> height;

            bmi = weight / (height * height);
            cout << "BMI: " << bmi << endl;

            if (bmi < 18.5)
                cout << "Diagnosis: Underweight\n";
            else if (bmi < 25)
                cout << "Diagnosis: Normal\n";
            else if (bmi < 30)
                cout << "Diagnosis: Overweight\n";
            else
                cout << "Diagnosis: Obese\n";
            break;
        }

        // -------- BP --------
        case 2:
        {
            int sys, dia;
            cout << "\nEnter Systolic BP: ";
            cin >> sys;
            cout << "Enter Diastolic BP: ";
            cin >> dia;

            if (sys < 90 || dia < 60)
                cout << "BP Status: Low Blood Pressure\n";
            else if (sys <= 120 && dia <= 80)
                cout << "BP Status: Normal Blood Pressure\n";
            else
                cout << "BP Status: High Blood Pressure\n";
            break;
        }

        // -------- Sugar --------
        case 3:
        {
            int sugar;
            cout << "\nEnter Blood Sugar Level (mg/dL): ";
            cin >> sugar;

            if (sugar < 140)
                cout << "Sugar Status: Normal\n";
            else if (sugar <= 199)
                cout << "Sugar Status: Pre-Diabetic\n";
            else
                cout << "Sugar Status: Diabetic\n";
            break;
        }

        // -------- ECG --------
        case 4:
        {
            int heartRate;
            cout << "\nEnter Heart Rate (beats per minute): ";
            cin >> heartRate;

            if (heartRate < 60)
                cout << "ECG Result: Low Heart Rate\n";
            else if (heartRate <= 100)
                cout << "ECG Result: Normal Heart Rate\n";
            else
                cout << "ECG Result: High Heart Rate (Attention Required)\n";
            break;
        }

        // -------- Appointment --------
        case 5:
        {
            int day;
            cout << "\nDoctor Appointment Booking\n";
            cout << "Available Days (1-7): ";
            cin >> day;

            if (day >= 1 && day <= 7)
                cout << "Appointment Booked Successfully\n";
            else
                cout << "Invalid Day Selection\n";
            break;
        }

        // -------- Reminder --------
        case 6:
        {
            int days;
            cout << "\nEnter days after which recheck is needed: ";
            cin >> days;

            cout << "Reminder Set! Please recheck after ";
            cout << days << " days.\n";
            break;
        }

        // -------- Cost --------
        case 7:
        {
            int tests;
            int total = 0;

            cout << "\nHealth Services Cost Estimation\n";
            cout << "Enter number of tests done: ";
            cin >> tests;

            while (tests > 0)
            {
                total += 500; // per test cost
                tests--;
            }

            cout << "Estimated Total Cost: Rs. " << total << endl;
            break;
        }

        case 8:
            cout << "\nThank you for using the system.\n";
            return 0;

        default:
            cout << "\nInvalid Choice!\n";
        }

        cout << "\nDo you want to continue? (Y/N): ";
        cin >> repeat;

    } while (repeat == 'Y' || repeat == 'y');

    return 0;
}
