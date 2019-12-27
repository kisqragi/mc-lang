extern printdln(x)
def testloop() {
    for i = 1, i < 3, 1 in {
        printdln(i)
        printdln(i*10)
        printdln(i*100)
    }
}
