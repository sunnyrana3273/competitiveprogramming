package java;
import java.io.*;
import java.util.*;

public class SpeedingTicket {
    public static void main(String[] args) throws IOException {
        BufferedReader reading = new BufferedReader(new FileReader("speeding.in"));
        PrintWriter printing = new PrintWriter(new BufferedWriter(new FileWriter("speeding.out")));

        StringTokenizer st = new StringTokenizer(reading.readLine());
        int numOfRoadSegments = Integer.parseInt(st.nextToken());
        int numOfBessieSegments = Integer.parseInt(st.nextToken());

        int[] speedLimits = new int[100];
        int currentMile = 0;

        for (int i = 0; i < numOfRoadSegments; i++) {
            st = new StringTokenizer(reading.readLine());
            int length = Integer.parseInt(st.nextToken());
            int limit = Integer.parseInt(st.nextToken());

            for (int j = 0; j < length; j++) {
                speedLimits[currentMile++] = limit;
            }
        }

        int[] travelSpeeds = new int[100];
        currentMile = 0;

        for (int i = 0; i < numOfBessieSegments; i++) {
            st = new StringTokenizer(reading.readLine());
            int length = Integer.parseInt(st.nextToken());
            int speed = Integer.parseInt(st.nextToken());

            for (int j = 0; j < length; j++) {
                travelSpeeds[currentMile++] = speed;
            }
        }

        int max = 0;
        for (int i = 0; i < 100; i++) {
            max = Math.max(max, travelSpeeds[i] - speedLimits[i]);
        }

        printing.println(max);
        printing.close();
        reading.close();
    }
}
