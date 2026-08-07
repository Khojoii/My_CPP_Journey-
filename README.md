# My C++ Journey

A concise, day-by-day record of learning C++ with small examples and notes. The original detailed notes have been split into per-day documents under practice/days/. Examples and code live under practice/days/<day-number>/. 

Quick links

- practice/README.md — index of day folders and example programs

How to build an example (from repository root):

Compile a single example with g++:

```
g++ -std=c++17 practice/days/day-8/Sales_item_read_write_item.cpp -o read_write
./read_write
```

Or compile from the example folder (headers are next to sources):

```
cd practice/days/day-8
g++ -std=c++17 Sales_item_read_write_item.cpp -o read_write
./read_write
```

No special environment variables are required.
