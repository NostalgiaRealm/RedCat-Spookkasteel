/*
 * FUN_00537af4 at 00537af4
 * undefined __register FUN_00537af4(int * param_1, int param_2, undefined4 * param_3)
 * Address ranges: 00537af4-00537b9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00537af4(int *param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int local_20;
  int local_18;
  uint local_14;
  
  *param_3 = 0;
  local_18 = 0;
  piVar1 = (int *)FUN_00537750(param_1);
  iVar2 = FUN_00538e94(piVar1);
  uVar3 = FUN_0051e5f0(iVar2);
  uVar4 = uVar3 - 1;
  if (SBORROW4(uVar3,1)) {
    uVar4 = thunk_FUN_00402874(uVar4);
  }
  if (-1 < (int)uVar4) {
    local_20 = uVar4 + 1;
    local_14 = 0;
    do {
      iVar2 = FUN_00537750(param_1);
      iVar2 = FUN_0051e404(*(int **)(iVar2 + 0x27c),local_14);
      uVar3 = *(uint *)(iVar2 + 0x34);
      if (SCARRY4(local_18,uVar3)) {
        thunk_FUN_00402874(uVar3);
      }
      if ((local_18 <= param_2) && (param_2 <= (int)(local_18 + uVar3))) {
        piVar1 = (int *)FUN_00537750(param_1);
        piVar1 = (int *)FUN_00538e94(piVar1);
        uVar5 = FUN_005375c0(piVar1,local_14);
        *param_3 = uVar5;
        return;
      }
      local_14 = local_14 + 1;
      local_20 = local_20 + -1;
      local_18 = local_18 + uVar3;
    } while (local_20 != 0);
  }
  return;
}

