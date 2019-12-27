extern printcleand(x)
extern println()
def testloop()
    for i = 1, i < 9, 1 in
        for j = 1, j < 10, 1 in
            if (j < 10) then
                printcleand(i * j)
            else
                println()
