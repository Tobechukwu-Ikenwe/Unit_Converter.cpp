#include<iostream>
#include<cmath>

#include<string>

using namespace std;

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

        bool L_valid = ((L_unit == 'M' || L_unit == 'K' || L_unit == 'I' || L_unit == 'm') || (L_converted_unit == 'M' || L_converted_unit == 'K' || L_converted_unit == 'I' || L_converted_unit == 'm'));
        if (!L_valid){
            cout << "Enter Valid unit for length\n";
            return 1;
        }

        if (L_unit == L_converted_unit){
            cout << "Please select a different unit to convert to:\n ";
            return 1;
        }

        //For meter unit selection

        if (L_unit == 'M' && L_converted_unit == 'K'){
            double L_converted_value;
            L_converted_value = L_value / 1000;
            cout << "Your new value is " << L_converted_value << "Km\n";

        }

        if (L_unit == 'M' && L_converted_unit == 'I'){
            double L_converted_value;
            L_converted_value = L_value * 39.37;
            cout << "Your new value is " << L_converted_value << "In\n";
            
        }

         if (L_unit == 'M' && L_converted_unit == 'm'){
            double L_converted_value;
            L_converted_value = L_value * 0.00062137;
            cout << "Your new value is " << L_converted_value << "miles\n";
            
        }

        //for kilometer unit selection

         if (L_unit == 'K' && L_converted_unit == 'M'){
            double L_converted_value;
            L_converted_value = L_value * 1000;
            cout << "Your new value is " << L_converted_value << "m\n";

        }

        if (L_unit == 'K' && L_converted_unit == 'I'){
            double L_converted_value;
            L_converted_value = L_value * 39,370.87;
            cout << "Your new value is " << L_converted_value << "In\n";
            
        }

         if (L_unit == 'K' && L_converted_unit == 'm'){
            double L_converted_value;
            L_converted_value = L_value * 0.62137;
            cout << "Your new value is " << L_converted_value << "miles\n";
            
        }

        //For Inches
               if (L_unit == 'I' && L_converted_unit == 'M'){
            double L_converted_value;
            L_converted_value = L_value * 0.0254;
            cout << "Your new value is " << L_converted_value << "m\n";

        }

        if (L_unit == 'I' && L_converted_unit == 'K'){
            double L_converted_value;
            L_converted_value = L_value * 0.0000254;
            cout << "Your new value is " << L_converted_value << "km\n";
            
        }

         if (L_unit == 'I' && L_converted_unit == 'm'){
            double L_converted_value;
            L_converted_value = L_value * 0.0000157828;
            cout << "Your new value is " << L_converted_value << "miles\n";
            
        }

        //For miles
            if (L_unit == 'm' && L_converted_unit == 'M'){
            double L_converted_value;
            L_converted_value = L_value * 1609.344;
            cout << "Your new value is " << L_converted_value << "m\n";

        }

        if (L_unit == 'm' && L_converted_unit == 'K'){
            double L_converted_value;
            L_converted_value = L_value * 1.609344;
            cout << "Your new value is " << L_converted_value << "km\n";
            
        }

         if (L_unit == 'm' && L_converted_unit == 'I'){
            double L_converted_value;
            L_converted_value = L_value * 63360;
            cout << "Your new value is " << L_converted_value << "inches\n";
            
        }




        
        
        

    }

    if(unit == 'W'){
        char W_unit;
        char W_converted_unit;
        double W_value;
        cout << "Please select current unit: \n";
        cout << "(G for Grams)  (K for Kilograms) (P for Pounds)\n";
        cin >> W_unit;
        cout << "please select unit you would like to convert to: \n";
        cout << "(G  for Grams)  (K for Kilograms) (P for Pounds)\n";
        cin >> W_converted_unit;

        bool W_valid = ((W_unit == 'G' || W_unit == 'K' || W_unit == 'P') || (W_converted_unit == 'G' || W_converted_unit == 'K' || W_converted_unit == 'P' ));
        if (!W_valid){
            cout << "Enter Valid unit for Weight\n";
            return 1;
        }

              //For Grams unit selection

        if (W_unit == 'G' && W_converted_unit == 'K'){
            double W_converted_value;
            W_converted_value = W_value / 1000;
            cout << "Your new value is " << W_converted_value << "Kg\n";

        }

        if (W_unit == 'G' && W_converted_unit == 'P'){
            double W_converted_value;
            W_converted_value = W_value * 0.00220462;
            cout << "Your new value is " << W_converted_value << "lbs\n";
            
        }

        

        //for Pounds unit selection

         if (W_unit == 'P' && W_converted_unit == 'G'){
            double W_converted_value;
            W_converted_value = W_value * 453.6;
            cout << "Your new value is " << W_converted_value << "g\n";

        }

        if (W_unit == 'P' && W_converted_unit == 'K'){
            double W_converted_value;
            W_converted_value = W_value * 2.20462;
            cout << "Your new value is " << W_converted_value << "Kg\n";
            
        }


        //For Kilograms
            if (W_unit == 'K' && W_converted_unit == 'G'){
            double W_converted_value;
            W_converted_value = W_value * 1000;
            cout << "Your new value is " << W_converted_value << "g\n";

        }

        if (W_unit == 'K' && W_converted_unit == 'P'){
            double W_converted_value;
            W_converted_value = W_value /2.20462;
            cout << "Your new value is " << W_converted_value << "lbs\n";
            
        }

    
       

    }

    if(unit == 'T'){
        char T_unit;
        char T_converted_unit;
        double T_value;
        cout << "Please select current unit: \n";
        cout << "(C for Celsius)  (F for Fahrenheit) \n";
        cin >> T_unit;
        cout << "please select unit you would like to convert to: \n";
        cout << "(C for Celsius)  (F for Fahrenheit) \n";
        cin >> T_converted_unit;

        bool T_valid = ((T_unit == 'C' || T_unit == 'F' ) || (T_converted_unit == 'C' || T_converted_unit == 'F' ));
        if (!T_valid){
            cout << "Enter Valid unit for Temperature\n";
            return 1;
        }

            //For Celsius unit selection

        if (T_unit == 'C' && T_converted_unit == 'F'){
            double T_converted_value;
            T_converted_value = (9/5 * T_value) + 32;
            cout << "Your new value is " << T_converted_value << "F\n";

        }
        

        //fOR Fahrenheit 
        if (T_unit == 'F' && T_converted_unit == 'C'){
            double T_converted_value;
            T_converted_value = (5/9 * T_value) - 32;
            cout << "Your new value is " << T_converted_value << "C\n";
            
        }

       
    }



};
