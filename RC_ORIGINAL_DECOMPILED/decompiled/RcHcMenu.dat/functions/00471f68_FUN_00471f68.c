/*
 * FUN_00471f68 at 00471f68
 * undefined __register FUN_00471f68(int param_1, char * param_2, VARIANTARG * param_3)
 * Address ranges: 00471f68-00472038;00472040-00472065
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00471f68(int param_1,char *param_2,VARIANTARG *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  uint uVar4;
  int iVar5;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  _union_2683 local_20;
  LONG local_10;
  int local_c;
  int *local_8;
  
  puStack_30 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  local_c = 0;
  local_10 = 0;
  local_20._12_4_ = 0;
  local_20._8_4_ = 0;
  local_20.decVal.Hi32 = 0;
  local_20._0_4_ = 0;
  puStack_34 = &LAB_00472066;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_3c = (undefined1 *)0x471f9c;
  iVar1 = FUN_0040431c(";",param_2);
  if (iVar1 != 0) {
    puStack_3c = (undefined1 *)0x471fb0;
    local_8 = (int *)FUN_00403064((int *)&PTR_FUN_0041077c,'\x01',extraout_ECX);
    puStack_40 = &LAB_00472039;
    uStack_44 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_44;
    puStack_3c = &stack0xfffffffc;
    FUN_00473b84(param_1,local_8,(int)param_2);
    local_10 = 0;
    local_c = local_8[2] + -1;
    FUN_00405cac(&local_10,1,0xc,param_3);
    iVar1 = local_8[2];
    if (-1 < iVar1 + -1) {
      iVar3 = 0;
      do {
        uVar4 = 1;
        iVar5 = iVar3;
        piVar2 = (int *)FUN_00412384(local_8,iVar3);
        (**(code **)(*piVar2 + 0x5c))(piVar2,&local_20,*piVar2,uVar4,iVar5);
        FUN_00405e94(&local_20,extraout_EDX,extraout_ECX_00,(ushort *)param_3,
                     (VARIANTARG *)&local_20,uVar4);
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    *in_FS_OFFSET = uStack_44;
    puStack_3c = (undefined1 *)0x472050;
    puStack_40 = (undefined1 *)0x472038;
    FUN_00403094(local_8);
    return;
  }
  puStack_3c = (undefined1 *)0x472049;
  piVar2 = (int *)FUN_00472080(param_1,param_2);
  puStack_3c = (undefined1 *)0x472050;
  (**(code **)(*piVar2 + 0x5c))(piVar2,param_3);
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_0047206d;
  puStack_34 = (undefined1 *)0x472065;
  FUN_00405bcc((VARIANTARG *)&local_20.n2);
  return;
}

