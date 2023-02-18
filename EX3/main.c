/*
 * We can calculate a baseball player's OBP (On-base plus Slugging) Percentage
 * using the following formula given here:
 * https://en.wikipedia.org/wiki/On-base_percentage#Overview
 *
 * We can calculate their SLG (Slugging Percentage) by the formula given here:
 * https://en.wikipedia.org/wiki/Slugging_percentage
 *
 * We can calculate their OPS (On-base Plus Slugging) by simply adding the OBP and SLG
 *
 * Use these variable values (MAKE SURE TO DECLARE THEM AS INT DATA TYPES):
 *      At-bats: 600
 *      Hits: 200
 *      Singles: 124
 *      Doubles: 40
 *      Triples 6
 *      Homeruns: 30
 *      Walks: 40
 *      Hit-by-Pitches: 5
 *      Sacrifice-Flies: 8
 *
 * Output all three values OBP, SLG, and OPS on three different lines so all tests pass.
 * It is okay to have more decimal places than the test is looking for (only 3).
 *
 * INFO: Any OPS over .900 is considered great (i.e. Josh Donaldson had .939 the year he
 * won the MVP for the Blue Jays, although Mike Trout had a .991 that year)
 */

#include <stdio.h>

int main() {

    //Declare variables with data types
    int At_bats = 600;
    int Hits= 200;
    int Singles = 124;
    int Doubles= 40;
    int Triples = 6;
    int Homeruns = 30;
    int Walks = 40;
    int Hit_by_Pitches = 5;
    int Sacrifice_Flies = 8;

    //Calculate OBP
    float obp = (float) (Hits + Walks + Hit_by_Pitches) / (At_bats + Walks + Hit_by_Pitches + Sacrifice_Flies);
    printf("The hitter's OBP is: %f\n", obp);


    //Calculate SLG
    float slg = (float) ((Singles) + (2*(Doubles)) + (3*(Triples) + (4*Homeruns)) )/ At_bats;
    printf("The hitter's SLG is: %f\n", slg);


    //Calculate OPS
    float ops = obp + slg;
    printf("The hitter's OPS is: %f\n", ops);


    return 0;
}
