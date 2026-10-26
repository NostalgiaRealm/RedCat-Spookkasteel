/*
 * FUN_004223f8 at 004223f8
 * undefined __register FUN_004223f8(int * param_1, char param_2)
 * Address ranges: 004223f8-00422423
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004223f8(int *param_1,char param_2)

{
  uint uVar1;
  
  if (param_2 != (char)param_1[0xc]) {
    if (param_2 == '\0') {
      FUN_004223a8(param_1,0x20000000);
    }
    else {
      uVar1 = FUN_00421574(param_1);
      FUN_004223a8(param_1,uVar1);
    }
  }
  return;
}

