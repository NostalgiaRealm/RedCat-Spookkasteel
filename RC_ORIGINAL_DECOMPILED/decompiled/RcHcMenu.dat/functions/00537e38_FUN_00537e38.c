/*
 * FUN_00537e38 at 00537e38
 * undefined __register FUN_00537e38(int * param_1, char param_2)
 * Address ranges: 00537e38-00537f48
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00537e38(int *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int local_14;
  uint local_10;
  
  if (param_2 == '\0') {
    piVar1 = (int *)FUN_00537750(param_1);
    iVar2 = FUN_00538e94(piVar1);
    uVar3 = FUN_0051e5f0(iVar2);
    uVar4 = uVar3 - 1;
    if (SBORROW4(uVar3,1)) {
      uVar4 = thunk_FUN_00402874(uVar4);
    }
    if (param_1[0x80] < (int)uVar4) {
      local_10 = param_1[0x80] + 1;
      if (SCARRY4(param_1[0x80],1)) {
        local_10 = thunk_FUN_00402874(local_10);
      }
      piVar1 = (int *)FUN_00537750(param_1);
      iVar2 = FUN_00538e94(piVar1);
      uVar3 = FUN_0051e5f0(iVar2);
      uVar4 = uVar3 - 1;
      if (SBORROW4(uVar3,1)) {
        uVar4 = thunk_FUN_00402874(uVar4);
      }
      if ((int)local_10 <= (int)uVar4) {
        local_14 = (uVar4 - local_10) + 1;
        do {
          piVar1 = (int *)FUN_00537750(param_1);
          piVar1 = (int *)FUN_00538e94(piVar1);
          iVar2 = FUN_005375c0(piVar1,local_10);
          if (*(char *)(iVar2 + 0x60) != '\0') {
            FUN_00537904(param_1,local_10);
            return;
          }
          local_10 = local_10 + 1;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
    }
  }
  else if (0 < param_1[0x80]) {
    local_10 = param_1[0x80] - 1;
    if (SBORROW4(param_1[0x80],1)) {
      local_10 = thunk_FUN_00402874(local_10);
    }
    if (-1 < (int)local_10) {
      do {
        piVar1 = (int *)FUN_00537750(param_1);
        piVar1 = (int *)FUN_00538e94(piVar1);
        iVar2 = FUN_005375c0(piVar1,local_10);
        if (*(char *)(iVar2 + 0x60) != '\0') {
          FUN_00537904(param_1,local_10);
          return;
        }
        local_10 = local_10 - 1;
      } while (local_10 != 0xffffffff);
    }
  }
  return;
}

