# Josephus problem

- **Josephus problem :** 
- There is a group of N people in Circle numbered 1, 2, …. N
- Someone is a master of the game.
- He starts from Person #1. Count K. Then remove this person from the circle.
- He keeps doing so till only 1 person remains. This is the winner.
    - `Input : 4 2`
- Means we have people: 1, 2, 3, 4. Master starts at 1
- Count 2 persons (2 removed), start from 3
- Count 2 persons (4 removed), start from 1
- Count 2 persons (3 removed), 1 is winner
    - People removed in order : `>> 2 4 3 1`