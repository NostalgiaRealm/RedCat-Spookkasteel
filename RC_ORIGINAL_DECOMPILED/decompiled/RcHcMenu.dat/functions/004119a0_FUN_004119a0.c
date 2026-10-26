/*
 * FUN_004119a0 at 004119a0
 * undefined __register FUN_004119a0(PVOID param_1)
 * Address ranges: 004119a0-00411a57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004119a0(PVOID param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  LPCVOID pvVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  _MEMORY_BASIC_INFORMATION *p_Var5;
  SIZE_T SVar6;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  _MEMORY_BASIC_INFORMATION local_20;
  
  puStack_30 = (undefined1 *)0x4119b5;
  piVar2 = (int *)FUN_00412824(DAT_00573624);
  puStack_34 = &LAB_00411a58;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  iVar4 = piVar2[2] + -1;
  puStack_30 = &stack0xfffffffc;
  puVar1 = &stack0xfffffffc;
  if (-1 < iVar4) {
    do {
      SVar6 = 0x1c;
      p_Var5 = &local_20;
      pvVar3 = (LPCVOID)FUN_00412384(piVar2,iVar4);
      VirtualQuery(pvVar3,p_Var5,SVar6);
      if ((param_1 == (PVOID)0x0) || (param_1 == local_20.AllocationBase)) {
        FUN_00412224(piVar2,iVar4);
      }
      iVar4 = iVar4 + -1;
      puVar1 = puStack_30;
    } while (iVar4 != -1);
  }
  puStack_30 = puVar1;
  iVar4 = (**(code **)(*DAT_00573628 + 0x14))();
  iVar4 = iVar4 + -1;
  if (-1 < iVar4) {
    do {
      SVar6 = 0x1c;
      p_Var5 = &local_20;
      pvVar3 = (LPCVOID)(**(code **)(*DAT_00573628 + 0x18))(DAT_00573628,iVar4);
      VirtualQuery(pvVar3,p_Var5,SVar6);
      if ((param_1 == (PVOID)0x0) || (param_1 == local_20.AllocationBase)) {
        (**(code **)(*DAT_00573628 + 0x44))(DAT_00573628,iVar4);
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != -1);
  }
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_00411a5f;
  puStack_34 = (undefined1 *)0x411a57;
  FUN_00412888(DAT_00573624);
  return;
}

