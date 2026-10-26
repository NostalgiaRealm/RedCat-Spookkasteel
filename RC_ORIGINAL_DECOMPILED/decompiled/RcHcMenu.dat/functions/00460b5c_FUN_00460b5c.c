/*
 * FUN_00460b5c at 00460b5c
 * undefined __register FUN_00460b5c(char param_1, int * param_2)
 * Address ranges: 00460b5c-00460bce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00460b5c(char param_1,int *param_2)

{
  if (param_1 == '\0') {
    FUN_00406a48(&PTR_DAT_00460b3c,param_2);
  }
  else if (param_1 == '\x01') {
    FUN_00406a48(&PTR_DAT_00460b44,param_2);
  }
  else if (param_1 == '\x02') {
    FUN_00406a48(&PTR_DAT_00460b4c,param_2);
  }
  else if (param_1 == '\x03') {
    FUN_00406a48(&PTR_DAT_00460b54,param_2);
  }
  else {
    FUN_00403d94("GetRelavitePronoun Unhandled case-part");
  }
  return;
}

