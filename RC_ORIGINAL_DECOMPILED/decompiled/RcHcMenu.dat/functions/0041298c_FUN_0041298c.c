/*
 * FUN_0041298c at 0041298c
 * undefined __register FUN_0041298c(int param_1, uint param_2, char param_3)
 * Address ranges: 0041298c-004129b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041298c(int param_1,uint param_2,char param_3)

{
  byte *pbVar1;
  int *piVar2;
  
  if (*(uint *)(param_1 + 4) <= param_2) {
    if ((int)param_2 < 0) {
      piVar2 = FUN_0040cfa8((int *)&DAT_004105ac,'\x01',(undefined4 *)PTR_PTR_00572518);
      FUN_0040382c(piVar2);
      return;
    }
    FUN_004128e8(param_1,param_2 + 1);
  }
  if (param_3 != '\0') {
    pbVar1 = (byte *)(*(int *)(param_1 + 8) + ((int)param_2 >> 3));
    *pbVar1 = *pbVar1 | '\x01' << (param_2 & 7);
    return;
  }
  pbVar1 = (byte *)(*(int *)(param_1 + 8) + ((int)param_2 >> 3));
  *pbVar1 = *pbVar1 & ~('\x01' << (param_2 & 7));
  return;
}

