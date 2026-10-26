/*
 * FUN_004b00e4 at 004b00e4
 * undefined __register FUN_004b00e4(int * param_1, int param_2)
 * Address ranges: 004b00e4-004b0122
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b00e4(int *param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = FUN_004afeec((int)param_1);
  if ((bVar1) || ((char)param_1[0x7e] == '\0')) {
    FUN_00436c7c(param_1,param_2);
  }
  else {
    *(undefined4 *)(param_2 + 0xc) = 0xffffffff;
  }
  return;
}

