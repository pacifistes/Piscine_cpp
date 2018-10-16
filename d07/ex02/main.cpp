#include <iostream>

#include "Array.tpp"

int main( void ) {

  unsigned int i;




  Array<> empty;

  try {

    empty[0];

  } catch ( std::exception const& e ) {

    std::cout << "Error : " << e.what() << std::endl;
  }




  Array<> intArray( 5 );
  i = 0;

  try {

    std::cout << "int array of size " << intArray.size() << std::endl;
    while ( i < intArray.size() ) {
      intArray[i] = i + 1;
      std::cout << intArray[i] << std::endl;
      i++;
    }

  } catch ( std::exception const& e ) {

    std::cout << "Error : " << e.what() << std::endl;
  }




  Array< double > doubleArray( 6 );
  i = 0;

  doubleArray[0] = 42.42;
  doubleArray[1] = 2.442;
  doubleArray[2] = 45642.4642;
  doubleArray[3] = 1.00;
  doubleArray[4] = 100.02;
  doubleArray[5] = -8.25;

  try {

    std::cout << "double array of size " << doubleArray.size() << std::endl;
    while ( i < doubleArray.size() ) {
      std::cout << doubleArray[i] << std::endl;
      i++;
    }
    std::cout << std::endl;

    std::cout << doubleArray[-1] << std::endl;

  } catch ( std::exception const& e ) {

    std::cout << "Error : " << e.what() << std::endl;
  }

  Array<> intArrayAssign = intArray;

  i = 0;

  try {

    std::cout << "int array init" << std::endl;
    while ( i < intArray.size() ) {
      std::cout << intArray[i] << std::endl;
      i++;
    }
    i = 0;
    std::cout << "int array with assign" <<  intArrayAssign.size() << std::endl;
    while ( i < intArrayAssign.size() ) {
      std::cout << intArrayAssign[i] << std::endl;
      i++;
    }

    intArrayAssign[0] = -10;
    intArrayAssign[1] = -10;
    intArrayAssign[2] = -10;
    intArrayAssign[3] = -10;
    intArrayAssign[4] = -10;

    i = 0;

    std::cout << "int array init" << std::endl;
    while ( i < intArray.size() ) {
      std::cout << intArray[i] << std::endl;
      i++;
    }
    i = 0;
    std::cout << "int array with assign" <<  intArrayAssign.size() << std::endl;
    while ( i < intArrayAssign.size() ) {
      std::cout << intArrayAssign[i] << std::endl;
      i++;
    }

  } catch ( std::exception const& e ) {

    std::cout << "Error : " << e.what() << std::endl;
  }




  Array<> intArrayCopy( intArray );
  i = 0;

  try {

    std::cout << "int array init" << std::endl;
    while ( i < intArray.size() ) {
      std::cout << intArray[i] << std::endl;
      i++;
    }
    i = 0;
    std::cout << "int array with copy" <<  intArrayCopy.size() << std::endl;
    while ( i < intArrayCopy.size() ) {
      std::cout << intArrayCopy[i] << std::endl;
      i++;
    }

    intArrayCopy[0] = -10;
    intArrayCopy[1] = -10;
    intArrayCopy[2] = -10;
    intArrayCopy[3] = -10;
    intArrayCopy[4] = -10;

    i = 0;

    std::cout << "int array init" << std::endl;
    while ( i < intArray.size() ) {
      std::cout << intArray[i] << std::endl;
      i++;
    }
    i = 0;
    std::cout << "int array with copy" <<  intArrayCopy.size() << std::endl;
    while ( i < intArrayCopy.size() ) {
      std::cout << intArrayCopy[i] << std::endl;
      i++;
    }

  } catch ( std::exception const& e ) {

    std::cout << "Error : " << e.what() << std::endl;
  }


  return ( 0 );
}