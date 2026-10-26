/*
 * FUN_00498328 at 00498328
 * undefined __register FUN_00498328(int param_1, byte * param_2, byte * param_3, byte param_4)
 * Address ranges: 00498328-004983ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00498328(int param_1,byte *param_2,byte *param_3,byte param_4)

{
  uint uVar1;
  int iVar2;
  byte *local_24;
  byte *local_20;
  int local_14;
  
  local_14 = *(int *)(param_1 + 0x8c) + -1;
  local_24 = param_2;
  local_20 = param_3;
  if (-1 < local_14) {
    do {
      uVar1 = (uint)param_4 * (uint)local_24[3] >> 8;
      iVar2 = 0x100 - uVar1;
      local_20[2] = (byte)(local_24[2] * uVar1 + (uint)local_20[2] * iVar2 >> 8);
      local_20[1] = (byte)(local_24[1] * uVar1 + (uint)local_20[1] * iVar2 >> 8);
      *local_20 = (byte)(*local_24 * uVar1 + (uint)*local_20 * iVar2 >> 8);
      local_24 = local_24 + 4;
      local_20 = local_20 + 4;
      local_14 = local_14 + -1;
    } while (local_14 != -1);
  }
  return;
}

