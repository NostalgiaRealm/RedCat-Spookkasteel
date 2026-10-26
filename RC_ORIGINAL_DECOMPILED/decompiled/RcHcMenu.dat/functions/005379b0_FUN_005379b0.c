/*
 * FUN_005379b0 at 005379b0
 * undefined __register FUN_005379b0(int * param_1)
 * Address ranges: 005379b0-00537a96
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005379b0(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int local_14;
  uint local_10;
  
  iVar1 = FUN_00537750(param_1);
  if (*(int *)(iVar1 + 0x290) != 0) {
    param_1[0x80] = 0;
    piVar2 = (int *)FUN_00537750(param_1);
    iVar1 = FUN_00538e94(piVar2);
    uVar3 = FUN_0051e5f0(iVar1);
    uVar4 = uVar3 - 1;
    if (SBORROW4(uVar3,1)) {
      uVar4 = thunk_FUN_00402874(uVar4);
    }
    if (-1 < (int)uVar4) {
      local_14 = uVar4 + 1;
      local_10 = 0;
      do {
        piVar2 = (int *)FUN_00537750(param_1);
        piVar2 = (int *)FUN_00538e94(piVar2);
        iVar1 = FUN_005375c0(piVar2,local_10);
        iVar5 = FUN_00537750(param_1);
        piVar2 = (int *)FUN_00549b64(*(int *)(iVar5 + 0x290));
        piVar2 = (int *)FUN_00492440(piVar2,(byte *)(iVar1 + 0x44));
        uVar6 = FUN_0040320c(piVar2,(int)&PTR_FUN_00489774);
        if ((char)uVar6 != '\0') {
          piVar2 = (int *)FUN_00537750(param_1);
          piVar2 = (int *)FUN_00538e94(piVar2);
          iVar1 = FUN_005375c0(piVar2,local_10);
          if (*(char *)(iVar1 + 0x60) != '\0') {
            param_1[0x80] = local_10;
            break;
          }
        }
        local_10 = local_10 + 1;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
    (**(code **)(*param_1 + 0xb8))();
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}

