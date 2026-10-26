/*
 * FUN_00408570 at 00408570
 * undefined __register FUN_00408570(undefined4 param_1, int * param_2)
 * Address ranges: 00408570-00408583
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00408570(undefined4 param_1,int *param_2)

{
  short local_4;
  short sStack_2;
  
  local_4 = (short)param_1;
  *param_2 = (int)local_4;
  sStack_2 = (short)((uint)param_1 >> 0x10);
  param_2[1] = (int)sStack_2;
  return;
}

