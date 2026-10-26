/*
 * FUN_005659c4 at 005659c4
 * undefined __register FUN_005659c4(int param_1, byte * param_2)
 * Address ranges: 005659c4-00565a34
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005659c4(int param_1,byte *param_2)

{
  byte *pbVar1;
  uint uVar2;
  bool bVar3;
  byte local_50 [39];
  byte local_29;
  byte abStack_28 [32];
  int local_8;
  
  local_29 = *param_2;
  if (0x1f < local_29) {
    local_29 = 0x20;
  }
  pbVar1 = abStack_28;
  for (uVar2 = (uint)local_29; param_2 = param_2 + 1, uVar2 != 0; uVar2 = uVar2 - 1) {
    *pbVar1 = *param_2;
    pbVar1 = pbVar1 + 1;
  }
  if (*(int *)(param_1 + 8) != 0) {
    pbVar1 = (byte *)(*(int *)(param_1 + 8) + 8);
    uVar2 = *pbVar1 + 1;
    bVar3 = uVar2 == 0;
    local_8 = param_1;
    FUN_00402c8c((int *)pbVar1,(int *)&local_29,uVar2);
    if (!bVar3) {
      FUN_004028e8(&local_29,1,0x12,local_50);
      FUN_00402bd8((byte *)(*(int *)(local_8 + 8) + 8),local_50,0x20);
    }
  }
  return;
}

