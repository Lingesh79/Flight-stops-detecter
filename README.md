# Flight-stops-detecter
This problem we create a linked list from source to destination of a flight based on number of stops mentioned by the user.Implemented in C.

PROBLEM STATEMENT

The details of flights such as its number,destination,travel duration is given ina text file.Implement a programme using appropriate data structures to compute:

1.Suggest direct flight from a given source to destination.

2.Suggest 1 stop and 2 stop flights from a gien source to destination with total travel time.

ASSUMPTIONS MADE

There exists only one flight in the file.

The stops are entered by the user of his own choice.

Data structure used are Structures,Files and Linked Lists.

ALGORITHM

Step 1: Start.

Step 2:Input the flight details such as flight number,source, destination,time of flight to reach destination and write onto a file.

Step 3: for zero stops print path as source node to destination node.

Step 4: for one stop print path as source node to stop node(entered by user) and then to destination node.

Step 5: for two stops print path from source node to stop1 node to stop2 node (both stops are entered by user)and to destination node.

Step 6: stop.

NOTE:The source and the destination node data is collected from the file in which the data is written in step 2.
