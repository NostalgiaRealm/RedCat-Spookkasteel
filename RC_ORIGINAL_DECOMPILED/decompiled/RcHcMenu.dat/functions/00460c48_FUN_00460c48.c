/*
 * FUN_00460c48 at 00460c48
 * undefined __register FUN_00460c48(char param_1, int * param_2)
 * Address ranges: 00460c48-00460cba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00460c48(char param_1,int *param_2)

{
  if (param_1 == '\0') {
    FUN_00406a48(&PTR_DAT_00460c28,param_2);
  }
  else if (param_1 == '\x01') {
    FUN_00406a48(&PTR_DAT_00460c30,param_2);
  }
  else if (param_1 == '\x02') {
    FUN_00406a48(&PTR_DAT_00460c38,param_2);
  }
  else if (param_1 == '\x03') {
    FUN_00406a48(&PTR_DAT_00460c40,param_2);
  }
  else {
    FUN_00403d94("GetNumeralOneString Unhandled case-part");
  }
  return;
}

