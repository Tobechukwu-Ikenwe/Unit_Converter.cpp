#include<iostream>
#include<cmath>
#include<map>
#include<string>

using namespace std;
double convertlength(double, char , char );
double convertWeight(double , char , char );
double convertTemperature(double , char, char);


int main(){
    char unit;
    cout << "Select Unit you want to convert: (L for length, W for weight T for temperature)\n";
    cin >> unit;

    bool valid = (unit == 'L' || unit == 'W' || unit == 'T');
    if(!valid){
        cout << "Please enter a valid unit\n";
        return 1;

    }

    

    if(unit == 'L'){
        char L_unit;
        char L_converted_unit;
        double L_value;
        cout << "Please select current unit: \n";
        cout << "(M for Meters)  (K for Kilometers) (I for Inches) (m for miles)\n";
        cin >> L_unit;
        cout << "Please select value of your unit: \n";
        cin >> L_value;
        cout << "please select unit you would like to convert to: \n";
        cout << "(M for Meters)  (K for Kilometers) (I for Inches) (m for miles)\n";
        cin >> L_converted_unit;

        bool L_valid = ((L_unit == 'M' || L_unit == 'K' || L_unit == 'I' || L_unit == 'm') && (L_converted_unit == 'M' || L_converted_unit == 'K' || L_converted_unit == 'I' || L_converted_unit == 'm'));
        if (!L_valid){
            cout << "Enter Valid unit for length\n";
            return 1;
        }

        if (L_unit == L_converted_unit){
            cout << "Please select a different unit to convert to:\n ";
            return 1;
        }

        double result = convertlength( L_value, L_unit, L_converted_unit);
        cout << "Your New Value is " << result <<  " " << L_converted_unit << "\n";
    }


    //For weight
    if(unit == 'W'){
        char W_unit;
        char W_converted_unit;
        double W_value;
        cout << "Please select current unit: \n";
        cout << "(G for Grams)  (K for Kilograms) (P for Pounds)\n";
        cin >> W_unit;
        cout << "Please select value of your unit: \n";
        cin >> W_value;
        cout << "please select unit you would like to convert to: \n";
        cout << "(G  for Grams)  (K for Kilograms) (P for Pounds)\n";
        cin >> W_converted_unit;

        bool W_valid = ((W_unit == 'G' || W_unit == 'K' || W_unit == 'P') && (W_converted_unit == 'G' || W_converted_unit == 'K' || W_converted_unit == 'P' ));
        if (!W_valid){
            cout << "Enter Valid unit for Weight\n";
            return 1;
        }
        double result =  convertWeight( W_value,  W_unit, W_converted_unit);
        cout << "Your New Value is " << result <<  " " << W_converted_unit << "\n";
    } 


    //For Temperature
    if(unit == 'T'){
        char T_unit;
        char T_converted_unit;
        double T_value;
        cout << "Please select current unit: \n";
        cout << "(C for Celsius)  (F for Fahrenheit) \n";
        cin >> T_unit;
        cout << "Please select value of your unit: \n";
        cin >> T_value;
        cout << "please select unit you would like to convert to: \n";
        cout << "(C for Celsius)  (F for Fahrenheit) \n";
        cin >> T_converted_unit;

        bool T_valid = ((T_unit == 'C' || T_unit == 'F' ) && (T_converted_unit == 'C' || T_converted_unit == 'F' ));
        if (!T_valid){
            cout << "Enter Valid unit for Temperature\n";
            return 1;
        }

        double result = convertTemperature(T_value, T_unit, T_converted_unit);
        cout << "Your New Value is " << result << " " << T_converted_unit << "\n";
}
    
}
double convertlength(double L_value, char L_unit, char L_converted_unit){
     //Create a Map to store the values of conversions from the Unit Meter to all other units
        map<char, double> toMeter = {
            {'M', 1.0},
            {'K', 1000.0},
            {'I', 0.0254},
            {'m', 1609.347}
       
        };

         // create a variable meters to store the value converted to meters
        double meters = L_value * toMeter.at(L_unit);
        //Return the value in the unit we are converting to
        return meters / toMeter.at(L_converted_unit);


}

double convertWeight(double W_value, char W_unit, char W_converted_unit){
    //Create a Map to store the values of conversions from the Unit Grams to all other units
    map<char, double> toGrams = {
        {'G', 1.0},
        {'K', 1000.0},
        {'P', 453.6}
        
    

    };
    // create a variable grams to store the value converted to Grams
    double grams = W_value * toGrams.at(W_unit);
    //Return the value in the unit we are converting to
    return grams / toGrams.at(W_converted_unit);
}



double convertTemperature(double T_value, char T_unit, char T_converted_unit){
    //For Celsius unit selection

    if (T_unit == 'C' && T_converted_unit == 'F'){
        return (9.0/5.0 * T_value) + 32;

    }
    

    //fOR Fahrenheit 
    if (T_unit == 'F' && T_converted_unit == 'C'){
        return (5.0/9.0) * (T_value - 32);
        
    }

       
    }



       
        
