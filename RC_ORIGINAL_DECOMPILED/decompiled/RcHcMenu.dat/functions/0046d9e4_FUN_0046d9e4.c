/*
 * FUN_0046d9e4 at 0046d9e4
 * undefined __register FUN_0046d9e4(int * param_1, ushort * param_2)
 * Address ranges: 0046d9e4-0046da78
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046d9e4(int *param_1,ushort *param_2)

{
  LONG LVar1;
  int iVar2;
  VARIANTARG *extraout_ECX;
  VARIANTARG *extraout_ECX_00;
  VARIANTARG *pVVar3;
  VARIANTARG *extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  undefined4 extraout_EDX_01;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  _union_2683 local_1c;
  ushort *local_c;
  int *local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_1c._12_4_ = 0;
  local_1c._8_4_ = 0;
  local_1c.decVal.Hi32 = 0;
  local_1c._0_4_ = 0;
  puStack_30 = &LAB_0046da79;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_c = param_2;
  local_8 = param_1;
  LVar1 = FUN_00405d8c((int)param_2,1,0);
  iVar5 = LVar1 + 1;
  iVar2 = (**(code **)(*local_8 + 0x80))();
  pVVar3 = extraout_ECX;
  uVar4 = extraout_EDX;
  if (iVar2 < iVar5) {
    iVar5 = (**(code **)(*local_8 + 0x80))();
    pVVar3 = extraout_ECX_00;
    uVar4 = extraout_EDX_00;
  }
  if (-1 < iVar5 + -1) {
    iVar2 = 0;
    do {
      FUN_00405e00(&local_1c,uVar4,pVVar3,(VARIANTARG *)&local_1c,local_c,1);
      (**(code **)(*local_8 + 0xd8))(local_8,iVar2,&local_1c);
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 + -1;
      pVVar3 = extraout_ECX_01;
      uVar4 = extraout_EDX_01;
    } while (iVar5 != 0);
  }
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0046da80;
  puStack_30 = (undefined1 *)0x46da78;
  FUN_00405bcc((VARIANTARG *)&local_1c.n2);
  return;
}

