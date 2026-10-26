/*
 * FUN_0043262c at 0043262c
 * undefined __register FUN_0043262c(int * param_1, uint param_2, undefined4 param_3)
 * Address ranges: 0043262c-0043266f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043262c(int *param_1,uint param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (*(char *)((int)param_1 + 0x47) != (char)param_2) {
    FUN_00403270(param_1,param_2,param_3);
    *(char *)((int)param_1 + 0x47) = (char)param_2;
    FUN_00433700((int)param_1,0xb00b,param_2 & 0xff,0);
    FUN_00403270(param_1,extraout_EDX,extraout_ECX);
  }
  return;
}

