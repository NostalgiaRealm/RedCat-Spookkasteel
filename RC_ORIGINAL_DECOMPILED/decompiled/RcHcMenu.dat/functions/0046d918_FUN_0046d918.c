/*
 * FUN_0046d918 at 0046d918
 * undefined __register FUN_0046d918(int * param_1, VARIANT * param_2)
 * Address ranges: 0046d918-0046d9d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046d918(int *param_1,VARIANT *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  uint uVar4;
  VARIANT *pVVar5;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  _union_2683 local_24;
  LONG local_14;
  int local_10;
  VARIANT *local_c;
  int *local_8;
  
  puStack_34 = &stack0xfffffffc;
  local_24._0_4_ = 0;
  local_24.decVal.Hi32 = 0;
  local_24._8_4_ = 0;
  local_24._12_4_ = 0;
  puStack_38 = &LAB_0046d9d5;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  local_c = param_2;
  local_8 = param_1;
  cVar1 = (**(code **)(*param_1 + 0x7c))();
  if (cVar1 == '\0') {
    local_14 = 0;
    pVVar5 = local_c;
    local_10 = FUN_0046d6bc(local_8);
    local_10 = local_10 + -1;
    FUN_00405cac(&local_14,1,0xc,pVVar5);
    iVar2 = FUN_0046d6bc(local_8);
    if (-1 < iVar2 + -1) {
      iVar3 = 0;
      do {
        uVar4 = 1;
        (**(code **)(*local_8 + 0xd4))(local_8,iVar3,&local_24,1,iVar3);
        FUN_00405e94(local_c,extraout_EDX,extraout_ECX,(ushort *)local_c,(VARIANTARG *)&local_24.n2,
                     uVar4);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  else {
    FUN_00404e28(local_c,(VARIANTARG *)PTR_DAT_00572068);
  }
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_0046d9dc;
  puStack_38 = (undefined1 *)0x46d9d4;
  FUN_00405bcc((VARIANTARG *)&local_24.n2);
  return;
}

