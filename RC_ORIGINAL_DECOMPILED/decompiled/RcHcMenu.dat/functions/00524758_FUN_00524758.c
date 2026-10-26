/*
 * FUN_00524758 at 00524758
 * undefined __register FUN_00524758(int * param_1, int param_2, int param_3, undefined4 * param_4)
 * Address ranges: 00524758-0052485b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00524758(int *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int local_20;
  int local_18;
  uint local_14;
  
  *param_4 = 0;
  local_18 = 0;
  iVar1 = FUN_0052361c(param_1);
  uVar2 = FUN_0051e5f0(*(int *)(iVar1 + 0x27c));
  uVar3 = uVar2 - 1;
  if (SBORROW4(uVar2,1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  if (-1 < (int)uVar3) {
    local_20 = uVar3 + 1;
    local_14 = 0;
    do {
      iVar1 = FUN_0052361c(param_1);
      iVar1 = FUN_0051e404(*(int **)(iVar1 + 0x27c),local_14);
      uVar2 = *(uint *)(iVar1 + 0x34);
      if (SCARRY4(local_18,uVar2)) {
        thunk_FUN_00402874(uVar2);
      }
      if ((local_18 <= param_2) && (param_2 <= (int)(local_18 + uVar2))) {
        iVar1 = FUN_0052361c(param_1);
        uVar4 = FUN_0051e404(*(int **)(iVar1 + 0x27c),local_14);
        *param_4 = uVar4;
        break;
      }
      local_14 = local_14 + 1;
      local_20 = local_20 + -1;
      local_18 = local_18 + uVar2;
    } while (local_20 != 0);
  }
  iVar1 = FUN_005235f8(param_1);
  uVar2 = param_3 / iVar1 + param_1[0x84];
  if (SCARRY4(param_3 / iVar1,param_1[0x84])) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  param_4[1] = uVar2;
  if ((param_1[0x81] <= (int)param_4[1]) || ((int)param_4[1] < param_1[0x84])) {
    param_4[1] = 0xffffffff;
  }
  return;
}

