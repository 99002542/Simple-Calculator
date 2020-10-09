#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_modulo(void);
void test_power(void);
void test_cuberoot(void);
void test_inverse(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "add", test_add);
  CU_add_test(suite, "subtract", test_subtract);
  CU_add_test(suite, "multiply", test_multiply);
  CU_add_test(suite, "divide", test_divide);
  CU_add_test(suite, "modulo", test_modulo);
  CU_add_test(suite, "power", test_power);
  CU_add_test(suite, "cuberoot", test_cuberoot);
  CU_add_test(suite, "inverse", test_inverse);
 


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 
void test_add(void) {
  CU_ASSERT(30 == add(10, 20));
  
  /* Dummy fail*/
  CU_ASSERT(1500 == add(750, 7500));
}

void test_subtract(void) {
  CU_ASSERT(-3 == subtract(0, 3));
  
  /* Dummy fail*/
  CU_ASSERT(1 == subtract(1000, 900));
}

void test_multiply(void) {
  CU_ASSERT(0 == multiply(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(2 == multiply(2, 5));
}

void test_divide(void) {
  CU_ASSERT(0 == divide(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(3 == divide(2, 2));
}

void test_modulo(void) {
  CU_ASSERT(0 == modulo(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(3 == modulo(2, 2));
}

void test_power(void) {
  CU_ASSERT(100 == power(10, 2));
  
  /* Dummy fail*/
  CU_ASSERT(9 == power(3, 3));
}

void test_cuberoot(void) {
  CU_ASSERT(10 == cuberoot(100));
  
  /* Dummy fail*/
  CU_ASSERT(3 == cuberoot(25));
}


void test_inverse(void) {
  CU_ASSERT(1== inverse(1));
  
  /* Dummy fail*/
  CU_ASSERT(2==inverse(3));
}


