//
// Created by Grilo on 6/22/2019.
//

#ifndef BATTLESHIP_GENERAL_H
#define BATTLESHIP_GENERAL_H

#include <iostream>
#include "Ship.h"
#include "Carrier.h"
#include "Cruiser.h"
#include "HydroPlane.h"
#include "Destroyer.h"
#include "Submarine.h"

class General {

private:
    std::string m_name;
    std::string m_country;
    uint8_t m_remainingCarrier;
    uint8_t m_remainingCruiser;
    uint8_t m_remainingHydroPlane;
    uint8_t m_remainingDestroyer;
    uint8_t m_remainingSubmarine;

    int tryUseUnit(uint8_t remainingUnit);

public:
    General(const std::string& name, const std::string& city);
    std::string getName()const;
    std::string getCountry() const;
    int getRemaining(UnitType unitType) const;
    int getSumRemaining() const;

    Ship* makeShip(const UnitType& unitType, const Coordinate& position, const ShipDirection& direction);
    Ship* makeShip(const UnitType& unitType, const std::string& sPosition, const ShipDirection& direction);

    int operator-(const UnitType& unitType);
    friend std::ostream& operator<<(std::ostream& out, const General& general);
};


#endif //BATTLESHIP_GENERAL_H
