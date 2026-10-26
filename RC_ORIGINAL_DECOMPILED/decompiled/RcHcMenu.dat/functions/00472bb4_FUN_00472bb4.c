/*
 * FUN_00472bb4 at 00472bb4
 * undefined __register FUN_00472bb4(int * param_1, int param_2, undefined4 param_3)
 * Address ranges: 00472bb4-00472c8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00472bb4(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_EDX;
  undefined4 extraout_EDX_00;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int local_c;
  
  puVar4 = &stack0xfffffffc;
  if (param_2 != param_1[0x10]) {
    if ((param_2 < param_1[0x10]) && (0 < param_1[0x11])) {
      iVar2 = param_1[0x12];
      for (iVar1 = param_1[0xf]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
        if ((*(char *)(iVar1 + 0x15) != '\0') && (*(int *)(iVar1 + 0x10) < iVar2)) {
          iVar2 = *(int *)(iVar1 + 0x10);
        }
      }
      iVar1 = param_2;
      if (-1 < param_2 + -1) {
        iVar3 = 0;
        local_c = param_2;
        do {
          FUN_00473080((int)param_1,iVar2 + iVar3,iVar3);
          iVar3 = iVar3 + 1;
          local_c = local_c + -1;
          param_3 = extraout_ECX;
          iVar1 = extraout_EDX;
        } while (local_c != 0);
      }
      param_1[0x12] = param_1[0x12] - iVar2;
      if (param_1[0x13] != -1) {
        param_1[0x13] = param_1[0x13] - iVar2;
      }
      if (param_2 < param_1[0x11]) {
        param_1[0x11] = param_2;
      }
      FUN_00472b8c(-iVar2,iVar1,param_3,(int)&stack0xfffffffc);
    }
    FUN_00472a0c(param_1,param_2 + 1);
    param_1[0x10] = param_2;
    if ((*(byte *)(param_1 + 8) & 8) == 0) {
      (**(code **)(*param_1 + 0x13c))();
      iVar1 = (**(code **)(*param_1 + 0x144))();
      FUN_00472b8c(iVar1,extraout_EDX_00,extraout_ECX_00,(int)puVar4);
    }
  }
  return;
}

