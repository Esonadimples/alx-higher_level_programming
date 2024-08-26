#!/usr/bin/python3
""" Python module that takes in an argument and displays
all values in the states table of hbtn_0e_0_usa
where name matches the argument.
"""

import sys
import MySQLdb

if __name__ == '__main__':
    db = MySQLdb.connect(
        host='localhost',
        port=3306,
        user=sys.argv[1],
        passwd=sys.argv[2],
        db=sys.argv[3]
    )

    cur = db.cursor()

    cur.execute("""
        SELECT cities.id, cities.name, states.name
        FROM cities
        LEFT JOIN states ON states.id = cities.state_id
        ORDER BY cities.id ASC""")

    selected_rows = cur.fetchall()

    for row in selected_rows:
        print(row)

    # close the cursor and database connection
    cur.close()
    db.close()
