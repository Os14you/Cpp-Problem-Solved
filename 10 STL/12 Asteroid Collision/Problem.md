# Asteroid Collision

- We are given an array `Asteroids` of integers representing **asteroids in a row** .
- For each asteroid, **the** absolute **value** represents its **size** , and **the sign** represents its **direction** **( positive means right, negative means left ).** Each asteroid moves at the **same speed**.
- Find out the state of the asteroids after all collisions . **If two asteroids** meet, the **smaller** one will **explode**. If both are the **same size** ,**both will explode** . Two asteroids in the **same direction** **will never meet**.
- **Input** **→** **[ 5 , 10 , -5 ]**
- **Output →** **[ 5 , 10 ]** → 10 meets -5 and the smaller (-5) explode .