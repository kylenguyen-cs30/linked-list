echo starts

echo compile 
g++ -std=c++11 -g linked-list.cpp -o DEBUG

echo START DEBUG SESSION
lldb DEBUG

echo END DEBUG SESSION

echo remove
rm DEBUG

echo terminated
