/*
 * FUN_005275fc at 005275fc
 * undefined1 __register FUN_005275fc(int param_1, undefined4 * param_2)
 * Address ranges: 005275fc-00527668
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_005275fc(int param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  byte local_30 [28];
  int local_14;
  int local_10;
  undefined1 local_9;
  int local_8;
  
  pbVar4 = local_30;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pbVar4 = *param_2;
    param_2 = param_2 + 1;
    pbVar4 = pbVar4 + 4;
  }
  local_9 = 0;
  local_8 = param_1;
  iVar3 = FUN_0051e160(param_1);
  uVar2 = iVar3 - 1;
  if (SBORROW4(iVar3,1)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_14 = uVar2 + 1;
    local_10 = 0;
    do {
      iVar3 = FUN_00527084(local_8,local_10);
      cVar1 = FUN_0048d3ac((byte *)(iVar3 + 0x44),local_30);
      if (cVar1 != '\0') {
        return 1;
      }
      local_10 = local_10 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return local_9;
}

