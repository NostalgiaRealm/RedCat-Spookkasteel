/*
 * FUN_0052e734 at 0052e734
 * bool __register FUN_0052e734(int param_1, undefined4 * param_2)
 * Address ranges: 0052e734-0052e773
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_0052e734(int param_1,undefined4 *param_2)

{
  int iVar1;
  byte *pbVar2;
  byte local_2c [36];
  int local_8;
  
  pbVar2 = local_2c;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pbVar2 = *param_2;
    param_2 = param_2 + 1;
    pbVar2 = pbVar2 + 4;
  }
  local_8 = param_1;
  iVar1 = FUN_00492440(*(int **)(param_1 + 0x1c),local_2c);
  return (*(byte *)(iVar1 + 0x19) & 0x10) == 0;
}

