/*
 * FUN_004b2a7c at 004b2a7c
 * undefined __register FUN_004b2a7c(char param_1, int * param_2)
 * Address ranges: 004b2a7c-004b2af0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b2a7c(char param_1,int *param_2)

{
  if ((param_1 != '\x02') && (param_1 != '\x01')) {
    FUN_00403d94("SortorderFlagToSQLString:  Parameter has an illegal value");
  }
  if (param_1 == '\x01') {
    FUN_00403e04(param_2,(undefined4 *)" DESC");
  }
  else if (param_1 == '\x02') {
    FUN_00403e04(param_2,(undefined4 *)&DAT_004b2b68);
  }
  else {
    FUN_00403d94("Assertion failure");
    FUN_00403db0(param_2);
  }
  return;
}

