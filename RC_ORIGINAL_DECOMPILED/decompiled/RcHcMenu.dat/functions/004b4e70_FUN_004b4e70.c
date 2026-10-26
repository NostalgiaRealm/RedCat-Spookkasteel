/*
 * FUN_004b4e70 at 004b4e70
 * undefined __register FUN_004b4e70(int param_1, int * param_2)
 * Address ranges: 004b4e70-004b4f0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b4e70(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_1c;
  undefined1 local_18;
  int local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  if (param_2 != (int *)0x0) {
    local_c = param_2;
    local_8 = param_1;
    iVar1 = FUN_004b17b8((int)param_2);
    if (0 < iVar1) {
      local_1c = DAT_00574464;
      local_18 = 7;
      FUN_004b4e04(local_8,&local_1c,0);
      iVar1 = FUN_004b17b8((int)local_c);
      uVar2 = iVar1 - 1;
      if (SBORROW4(iVar1,1)) {
        uVar2 = thunk_FUN_00402874(uVar2);
      }
      if (-1 < (int)uVar2) {
        local_14 = uVar2 + 1;
        local_10 = 0;
        do {
          puVar3 = (undefined4 *)FUN_004b60b8(local_c,local_10);
          uVar4 = (**(code **)*puVar3)();
          FUN_004b60dc(*(int **)(local_8 + 0x20),uVar4);
          local_10 = local_10 + 1;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
      local_1c = DAT_00574468;
      local_18 = 7;
      FUN_004b4e04(local_8,&local_1c,0);
    }
  }
  return;
}

