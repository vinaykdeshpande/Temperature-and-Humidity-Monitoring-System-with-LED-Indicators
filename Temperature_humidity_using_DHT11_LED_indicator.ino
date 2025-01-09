#include <DHT11.h>  // Include the DHT11 library

// Define the DHT11 sensor object connected to pin 2
DHT11 dht11(2);

// Define the pins for RED and GREEN LEDs
int REDLED = 4;
int GREENLED = 7;

void setup()
{
  // Initialize serial communication at 9600 baud rate
  Serial.begin(9600);

  // Set a delay for DHT11 sensor reading
  dht11.setDelay(500);

  // Print a welcome message
  Serial.println("Welcome to track Temperature and Humidity");

  // Set LED pins as output
  pinMode(REDLED, OUTPUT);
  pinMode(GREENLED, OUTPUT);
}

void loop()
{
  int temperature = 0;  // Variable to store temperature value
  int humidity = 0;     // Variable to store humidity value
  int error = 0;        // Variable to store error if any
  int result = dht11.readTemperatureHumidity(temperature, humidity); // Read temperature and humidity

  // If the reading is successful, print the values
  if (result == 0)
  {
    Serial.print("Current Temperature: ");
    Serial.print(temperature);
    Serial.print(" C, Current Humidity: ");
    Serial.print(humidity);
    Serial.println(" %");
  }
  else
  {
    // If there's an error in reading, print the error message
    dht11.getErrorString(error);
    Serial.println("Error reading data from DHT11 sensor.");
  }

  // Check if temperature is above 24°C
  if (temperature > 24)
  {
    // If temperature is greater than 24°C, turn on RED LED and turn off GREEN LED
    digitalWrite(GREENLED, LOW);
    digitalWrite(REDLED, HIGH);
  }
  else
  {
    // If temperature is less than or equal to 24°C, turn on GREEN LED and turn off RED LED
    digitalWrite(GREENLED, HIGH);
    digitalWrite(REDLED, LOW);
  }

  // Add a small delay to avoid overwhelming the serial monitor with data
  delay(2000);
}
