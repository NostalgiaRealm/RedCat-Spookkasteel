/*
 * FUN_005445a4 at 005445a4
 * undefined __register FUN_005445a4(int param_1)
 * Address ranges: 005445a4-00544736
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005445a4(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  _union_2683 local_40;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  _union_2683 *local_18;
  undefined1 local_14;
  undefined4 local_10;
  undefined1 local_c;
  int local_8;
  
  puStack_44 = &stack0xfffffffc;
  local_40._0_4_ = 0;
  local_40.decVal.Hi32 = 0;
  local_40._8_4_ = 0;
  local_40._12_4_ = 0;
  puStack_48 = &LAB_00544737;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  local_8 = param_1;
  (**(code **)(**(int **)(param_1 + 0x300) + 0x5c))
            (*(int **)(param_1 + 0x300),(*(byte *)(param_1 + 0x30c) & 4) != 0);
  (**(code **)(**(int **)(local_8 + 0x2fc) + 0x5c))
            (*(int **)(local_8 + 0x2fc),(*(byte *)(local_8 + 0x30c) & 4) != 0);
  if ((*(byte *)(local_8 + 0x30c) & 4) == 0) {
    FUN_00541e48(*(int *)(local_8 + 0x300),(uint *)0x0);
  }
  else {
    iVar1 = FUN_00494c5c(*(int **)(local_8 + 0x330),(byte *)(local_8 + 0x314));
    FUN_00543a50(*(int **)(local_8 + 0x300),iVar1);
    FUN_00541d84(*(int *)(local_8 + 0x300),*(int *)(local_8 + 0x308));
    piVar2 = (int *)FUN_00494858(*(int **)(local_8 + 0x348));
    iVar1 = FUN_0049278c(piVar2);
    FUN_00541ec0(*(int **)(local_8 + 0x300),iVar1);
    local_30 = *(undefined4 *)PTR_DAT_00572470;
    local_2c = 7;
    local_28 = FUN_004949bc(*(int **)(local_8 + 0x348));
    local_24 = 7;
    local_20 = *(undefined4 *)PTR_DAT_00572258;
    local_1c = 7;
    piVar2 = (int *)FUN_004949bc(*(int **)(local_8 + 0x348));
    FUN_00496550(piVar2,(VARIANT *)&local_40.n2);
    local_18 = &local_40;
    local_14 = 0xd;
    local_10 = *(undefined4 *)PTR_DAT_005725b8;
    local_c = 7;
    piVar2 = (int *)FUN_00541740(*(int *)(local_8 + 0x300));
    FUN_004b5ce8(piVar2,&local_30,4);
    FUN_005418e0(*(int **)(local_8 + 0x300),'\x01');
    FUN_00541e48(*(int *)(local_8 + 0x300),(uint *)&DAT_0054474c);
  }
  *in_FS_OFFSET = uStack_4c;
  puStack_44 = &LAB_0054473e;
  puStack_48 = (undefined1 *)0x544736;
  FUN_00405bcc((VARIANTARG *)&local_40.n2);
  return;
}

