/*
 * FUN_00494b98 at 00494b98
 * undefined4 __register FUN_00494b98(int * param_1, int param_2)
 * Address ranges: 00494b98-00494c5a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00494b98(int *param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  short *psVar3;
  uint uVar4;
  undefined4 *puVar5;
  int local_20;
  uint local_18;
  int *local_14;
  
  psVar3 = (short *)FUN_0049411c(param_1,param_2);
  uVar4 = (int)*psVar3 - 2;
  if (SBORROW4((int)*psVar3,2)) {
    uVar4 = thunk_FUN_00402874(uVar4);
  }
  local_14 = param_1;
  if (-1 < (int)uVar4) {
    local_20 = uVar4 + 1;
    local_18 = 0;
    do {
      uVar4 = local_18;
      if (9 < local_18) {
        uVar4 = thunk_FUN_00402874(local_18);
      }
      puVar5 = (undefined4 *)((int)psVar3[uVar4 + 1] + (int)local_14);
      if (SCARRY4((int)psVar3[uVar4 + 1],(int)local_14)) {
        puVar5 = (undefined4 *)thunk_FUN_00402874((uint)puVar5);
      }
      piVar1 = (int *)*puVar5;
      bVar2 = FUN_0047445c((int)piVar1);
      if (!bVar2) {
        return 0;
      }
      local_14 = (int *)FUN_004744a0(piVar1);
      local_18 = local_18 + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  uVar4 = (int)*psVar3 - 1;
  if (SBORROW4((int)*psVar3,1)) {
    uVar4 = thunk_FUN_00402874(uVar4);
  }
  if (9 < uVar4) {
    uVar4 = thunk_FUN_00402874(uVar4);
  }
  puVar5 = (undefined4 *)((int)psVar3[uVar4 + 1] + (int)local_14);
  if (SCARRY4((int)psVar3[uVar4 + 1],(int)local_14)) {
    puVar5 = (undefined4 *)thunk_FUN_00402874((uint)puVar5);
  }
  return *puVar5;
}

