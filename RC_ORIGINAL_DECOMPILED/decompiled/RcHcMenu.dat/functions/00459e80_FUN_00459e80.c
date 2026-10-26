/*
 * FUN_00459e80 at 00459e80
 * undefined __register FUN_00459e80(int param_1, char * param_2, int * param_3)
 * Address ranges: 00459e80-00459f76
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00459e80(int param_1,char *param_2,int *param_3)

{
  int iVar1;
  undefined4 **ppuVar2;
  char **ppcVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  uint uVar4;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 *local_24;
  char *local_20;
  undefined4 *local_1c;
  int local_18;
  int local_14;
  int *local_10;
  char *local_c;
  int local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_24 = (undefined4 *)0x0;
  local_20 = (char *)0x0;
  local_1c = (undefined4 *)0x0;
  puStack_30 = &LAB_00459f77;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_00403db0(param_3);
  iVar1 = FUN_00404030(local_8);
  if (0 < iVar1) {
    local_14 = 1;
    local_18 = iVar1;
    do {
      ppuVar2 = &local_1c;
      uVar4 = local_14 - 1;
      iVar1 = local_8;
      if (*(uint *)(local_8 + -4) <= uVar4) {
        ppuVar2 = (undefined4 **)thunk_FUN_00402874((uint)ppuVar2);
        iVar1 = extraout_ECX;
        uVar4 = extraout_EDX;
      }
      FUN_00403f58((int *)ppuVar2,
                   CONCAT31((int3)(uVar4 + 1 >> 8),*(undefined1 *)(iVar1 + -1 + uVar4 + 1)));
      FUN_00404038(local_10,local_1c);
      ppcVar3 = &local_20;
      uVar4 = local_14 - 1;
      iVar1 = local_8;
      if (*(uint *)(local_8 + -4) <= uVar4) {
        ppcVar3 = (char **)thunk_FUN_00402874((uint)ppcVar3);
        iVar1 = extraout_ECX_00;
        uVar4 = extraout_EDX_00;
      }
      FUN_00403f58((int *)ppcVar3,
                   CONCAT31((int3)(uVar4 + 1 >> 8),*(undefined1 *)(iVar1 + -1 + uVar4 + 1)));
      iVar1 = FUN_0040431c(local_20,local_c);
      if (iVar1 != 0) {
        ppuVar2 = &local_24;
        uVar4 = local_14 - 1;
        iVar1 = local_8;
        if (*(uint *)(local_8 + -4) <= uVar4) {
          ppuVar2 = (undefined4 **)thunk_FUN_00402874((uint)ppuVar2);
          iVar1 = extraout_ECX_01;
          uVar4 = extraout_EDX_01;
        }
        FUN_00403f58((int *)ppuVar2,
                     CONCAT31((int3)(uVar4 + 1 >> 8),*(undefined1 *)(iVar1 + -1 + uVar4 + 1)));
        FUN_00404038(local_10,local_24);
      }
      local_14 = local_14 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_00459f7e;
  puStack_30 = (undefined1 *)0x459f76;
  FUN_00403dd4((int *)&local_24,3);
  return;
}

