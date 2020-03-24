/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Please write your names here>
 * 
 * Date: 2020-02
 */

#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;

#include <string>
using namespace std;



TEST_CASE("Test replacement of p and b") {
    string text = "xxx happy yyy";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "Happi xxx yyy";
    CHECK(find(text, "happi") == string("Happi"));
    CHECK(find(text, "Happi") == string("Happi"));
    CHECK(find(text, "HAPPI") == string("Happi"));
    CHECK(find(text, "HaPpI") == string("Happi"));
    /* Add more checks here */
}

    TEST_CASE("Test replacement of lower-case and upper-case and v w") {  // 10
    string text = "well verses very world" ;
    CHECK(find(text, "werses") == string("verses"));
    CHECK(find(text, "Werses") == string("verses"));
    CHECK(find(text, "wery") == string("very"));
    CHECK(find(text, "Wery") == string("very"));
    CHECK(find(text, "vorld") == string("world"));
    CHECK(find(text, "Vorld") == string("world"));
    CHECK(find(text, "verses") == string("verses"));
    CHECK(find(text, "very") == string("very"));
    CHECK(find(text, "world") == string("world"));
    CHECK(find(text, "World") == string("world"));
}


TEST_CASE("Test replacement of lower-case and upper-case and p f b") { //10
    string text = "If sculptor but then ";
    CHECK(find(text, "ip") == string("if"));
    CHECK(find(text, "Ip") == string("if"));
    CHECK(find(text, "sculbtor") == string("sculptor"));
    CHECK(find(text, "put") == string("but"));
    CHECK(find(text, "SculBtor") == string("sculptor"));
    CHECK(find(text, "Fut") == string("but"));
    CHECK(find(text, "if") == string("if"));
    CHECK(find(text, "but") == string("but"));
    CHECK(find(text, "sculptor") == string("sculptor"));
    CHECK(find(text, "SCulptor") == string("sculptor"));
}

    TEST_CASE("Test replacement of lower-case and upper-case and g j") { // 10
    string text = " josh scored goal jenny bought jam" ;
    CHECK(find(text, "gosh") == string("josh"));
    CHECK(find(text, "Gosh") == string("josh"));
    CHECK(find(text, "joal") == string("goal"));
    CHECK(find(text, "Joal") == string("goal"));
    CHECK(find(text, "genny") == string("jenny"));
    CHECK(find(text, "Genny") == string("jenny"));
    CHECK(find(text, "boujht") == string("bought"));
    CHECK(find(text, "jam") == string("jam"));
    CHECK(find(text, "jenny") == string("jenny"));
    CHECK(find(text, "bought") == string("bought"));
}

    TEST_CASE("Test replacement of lower-case and upper-case and c k q") { //10
    string text = "cars been quite kind  " ;
    CHECK(find(text, "kars") == string("cars"));
    CHECK(find(text, "qars") == string("cars"));
    CHECK(find(text, "kuite") == string("quite"));
    CHECK(find(text, "cuite") == string("quite"));
    CHECK(find(text, "Cind") == string("kind"));
    CHECK(find(text, "Qind") == string("kind"));
    CHECK(find(text, "cars") == string("cars"));
    CHECK(find(text, "quite") == string("quite"));
    CHECK(find(text, "kind") == string("kind"));
    CHECK(find(text, "cind") == string("kind"));
}

    TEST_CASE("Test replacement of lower-case and upper-case and s z") { //10
    string text = "sorry zebra zoo slam  " ;
    CHECK(find(text, "zorry") == string("sorry"));
    CHECK(find(text, "Zorry") == string("sorry"));
    CHECK(find(text, "sebra") == string("zebra"));
    CHECK(find(text, "Sebra") == string("zebra"));
    CHECK(find(text, "soo") == string("zoo"));
    CHECK(find(text, "Soo") == string("zoo"));
    CHECK(find(text, "zlam") == string("slam"));
    CHECK(find(text, "Zlam") == string("slam"));
    CHECK(find(text, "Zebra") == string("zebra"));
    CHECK(find(text, "Sorry") == string("sorry"));
}

    TEST_CASE("Test replacement of lower-case and upper-case and d t") { // 10
    string text = "dani ID talked table " ;
    CHECK(find(text, "tani") == string("dani"));
    CHECK(find(text, "Tani") == string("dani"));
    CHECK(find(text, "IT") == string("ID"));
    CHECK(find(text, "It") == string("ID"));
    CHECK(find(text, "dalked") == string("talked"));
    CHECK(find(text, "Dalked") == string("talked"));
    CHECK(find(text, "batle") == string("table"));
    CHECK(find(text, "BaTle") == string("table"));
    CHECK(find(text, "ID") == string("ID"));
    CHECK(find(text, "table") == string("table"));
}

    TEST_CASE("Test replacement of lower-case and upper-case and  o u") { //10
    string text = "Hope you dont mind " ;
    CHECK(find(text, "hupe") == string("Hope"));
    CHECK(find(text, "hUpe") == string("Hope"));
    CHECK(find(text, "yuu") == string("you"));
    CHECK(find(text, "yuo") == string("you"));
    CHECK(find(text, "dunt") == string("dont"));
    CHECK(find(text, "dUnt") == string("dont"));
    CHECK(find(text, "hope") == string("Hope"));
    CHECK(find(text, "Dont") == string("dont"));
    CHECK(find(text, "YOU") == string("you"));
    CHECK(find(text, "DUNT") == string("dont"));
}


    
    TEST_CASE("Test replacement of lower-case and upper-case and i y") { //12
    string text = " Its like you yelled" ; 
    CHECK(find(text, "yts") == string("Its"));
    CHECK(find(text, "Yts") == string("Its"));
    CHECK(find(text, "lyke") == string("like"));
    CHECK(find(text, "LYKE") == string("like"));
    CHECK(find(text, "iou") == string("you"));
    CHECK(find(text, "IOU") == string("you"));
    CHECK(find(text, "ielled") == string("yelled"));
    CHECK(find(text, "IELLED") == string("yelled"));
    CHECK(find(text, "its") == string("Its"));
    CHECK(find(text, "lIKE") == string("like"));
    CHECK(find(text, "YOU") == string("you"));
    CHECK(find(text, "YELLED") == string("yelled"));
}

    TEST_CASE("Test replacement of lower-case and upper-case and concludes") { //22
    string text = "vulcano wont fear because pretty gabi jump called super top " ; 
    CHECK(find(text, "wulcano") == string("vulcano"));
    CHECK(find(text, "WULCANO") == string("vulcano"));
    CHECK(find(text, "VONT") == string("wont"));
    CHECK(find(text, "vunt") == string("wont"));
    CHECK(find(text, "bear") == string("fear"));
    CHECK(find(text, "pear") == string("fear"));
    CHECK(find(text, "pecause") == string("because"));
    CHECK(find(text, "fecause") == string("because"));
    CHECK(find(text, "bretty") == string("pretty"));
    CHECK(find(text, "fretti") == string("pretty"));
    CHECK(find(text, "jaby") == string("gabi"));
    CHECK(find(text, "jabi") == string("gabi"));
    CHECK(find(text, "gomp") == string("jump"));
    CHECK(find(text, "gump") == string("jump"));
    CHECK(find(text, "kalled") == string("called"));
    CHECK(find(text, "qalled") == string("called"));
    CHECK(find(text, "zuper") == string("super"));
    CHECK(find(text, "zuber") == string("super"));
    CHECK(find(text, "dop") == string("top"));
    CHECK(find(text, "TOP") == string("top"));
    CHECK(find(text, "JUMP") == string("jump"));
    CHECK(find(text, "VULCANO") == string("vulcano"));
}









