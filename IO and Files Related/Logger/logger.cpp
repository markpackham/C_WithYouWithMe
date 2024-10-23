#include <stdio.h>
// Used to get current time
#include <time.h>

void logData(const char *filename, const char *sensorData)
{
    FILE *fptr = fopen(filename, "a");
    if (fptr == NULL)
    {
        printf("Error opening file\n");
        return;
    }

    // Get current time
    time_t now = time(NULL);
    fprintf(fptr, "%s %s\n", ctime(&now), sensorData);
    fclose(fptr);
}

void readLogData(const char *filename)
{
    FILE *fptr = fopen(filename, "r");
    if (fptr == NULL)
    {
        printf("Error opening file\n");
        return;
    }
    char line[256];
    while (fgets(line, sizeof(line), fptr))
    {
        printf("%s", line);
    }
    fclose(fptr);
}

int main()
{
    const char *filename = "log.txt";

    logData(filename, "Temperature: 25.3C");
    logData(filename, "Humidity: 60%");

    printf("Log data:\n");

    readLogData(filename);

    return 0;
}