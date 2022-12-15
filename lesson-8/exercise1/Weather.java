package exercise1;

public class Weather 
{
    private final Forecast forecast;
    private final float temperature;
    private final String description;

    public Weather(Forecast forecast, float temperature, String description)
    {
        this.forecast=forecast;
        this.temperature=temperature;
        this.description=description;
    }

    public Weather WeatherAtNight(float howMuchColder)
    {
        float newTemperature = this.temperature-howMuchColder;
        return new Weather(this.forecast, newTemperature, description);
    }

    public String toString()
    {
        return Float.toString(this.temperature);
    }
}
