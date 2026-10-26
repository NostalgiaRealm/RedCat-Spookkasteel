/*
 * FUN_0045a690 at 0045a690
 * int __register FUN_0045a690(int param_1, int param_2)
 * Address ranges: 0045a690-0045a77e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0045a690(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  byte extraout_DL;
  byte bVar4;
  int extraout_EDX;
  int local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = param_2;
  local_8 = param_1;
  local_28 = FUN_00404030(param_1);
  local_24 = FUN_00404030(local_c);
  local_1c = FUN_00424280(&local_28,1);
  local_10 = 0;
  if (0 < local_1c) {
    local_14 = 1;
    local_20 = local_1c;
    do {
      uVar1 = local_14 - 1;
      iVar2 = local_c;
      if (*(uint *)(local_c + -4) <= uVar1) {
        uVar1 = thunk_FUN_00402874(uVar1);
        iVar2 = extraout_EDX;
      }
      bVar4 = *(byte *)(iVar2 + uVar1);
      uVar1 = local_14 - 1;
      iVar2 = local_8;
      if (*(uint *)(local_8 + -4) <= uVar1) {
        uVar1 = thunk_FUN_00402874(uVar1);
        iVar2 = extraout_ECX;
        bVar4 = extraout_DL;
      }
      local_18 = FUN_0045a658(*(byte *)(iVar2 + uVar1),bVar4);
      if ((int)local_18 < 0) {
        local_10 = -1;
        break;
      }
      if (0 < (int)local_18) {
        local_10 = 1;
        break;
      }
      local_14 = local_14 + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  if (local_10 == 0) {
    iVar2 = FUN_00404030(local_8);
    iVar3 = FUN_00404030(local_c);
    if (iVar2 < iVar3) {
      local_10 = -1;
    }
    else {
      iVar2 = FUN_00404030(local_8);
      iVar3 = FUN_00404030(local_c);
      if (iVar3 < iVar2) {
        local_10 = 1;
      }
    }
  }
  return local_10;
}

