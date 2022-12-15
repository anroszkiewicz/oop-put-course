package exercise1;

public class Main 
{
    public static void main(String[] args)
    {
        Forecast forecast = new Forecast.Fake();
        Weather today = new Weather(forecast, -4, "cloudy");
        Weather tonight = today.WeatherAtNight(10);
        assert "1.2345".equals(tonight.toString());
        System.out.print("here");
    }
}
