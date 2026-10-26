/*
 * FUN_00494a28 at 00494a28
 * undefined __register FUN_00494a28(int * param_1, int param_2, char param_3, int * param_4, undefined4 * param_5, undefined4 * param_6)
 * Address ranges: 00494a28-00494b0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00494a28(int *param_1,int param_2,char param_3,int *param_4,undefined4 *param_5,
                 undefined4 *param_6)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int local_20;
  uint local_1c;
  int *local_14;
  
  iVar3 = FUN_0049411c(param_1,param_2);
  *param_4 = iVar3;
  *param_6 = *(undefined4 *)(*param_4 + 0x40);
  uVar4 = (int)*(short *)*param_4 - 2;
  if (SBORROW4((int)*(short *)*param_4,2)) {
    uVar4 = thunk_FUN_00402874(uVar4);
  }
  local_14 = param_1;
  if (-1 < (int)uVar4) {
    local_20 = uVar4 + 1;
    local_1c = 0;
    do {
      uVar4 = local_1c;
      if (9 < local_1c) {
        uVar4 = thunk_FUN_00402874(local_1c);
      }
      iVar3 = (int)*(short *)(*param_4 + 2 + uVar4 * 2);
      puVar5 = (undefined4 *)(iVar3 + (int)local_14);
      if (SCARRY4(iVar3,(int)local_14)) {
        puVar5 = (undefined4 *)thunk_FUN_00402874((uint)puVar5);
      }
      piVar1 = (int *)*puVar5;
      bVar2 = FUN_0047445c((int)piVar1);
      if ((!bVar2) && (param_3 == '\0')) {
        *param_5 = 0;
        return;
      }
      local_14 = (int *)FUN_004744a0(piVar1);
      local_1c = local_1c + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  uVar4 = (int)*(short *)*param_4 - 1;
  if (SBORROW4((int)*(short *)*param_4,1)) {
    uVar4 = thunk_FUN_00402874(uVar4);
  }
  if (9 < uVar4) {
    uVar4 = thunk_FUN_00402874(uVar4);
  }
  iVar3 = (int)*(short *)(*param_4 + 2 + uVar4 * 2);
  puVar5 = (undefined4 *)(iVar3 + (int)local_14);
  if (SCARRY4(iVar3,(int)local_14)) {
    puVar5 = (undefined4 *)thunk_FUN_00402874((uint)puVar5);
  }
  *param_5 = *puVar5;
  return;
}

