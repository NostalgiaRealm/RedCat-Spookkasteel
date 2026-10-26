/*
 * FUN_004ecb0c at 004ecb0c
 * undefined __register FUN_004ecb0c(int * param_1, int * param_2, undefined4 param_3, int * param_4, char param_5)
 * Address ranges: 004ecb0c-004ecc03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_004ecb0c(int *param_1,int *param_2,undefined4 param_3,int *param_4,char param_5)

{
  undefined2 uVar1;
  undefined2 extraout_var;
  int iVar2;
  undefined4 *unaff_EBX;
  undefined4 *in_FS_OFFSET;
  ULONG local_30;
  undefined1 local_2c [16];
  undefined1 *puStack_1c;
  undefined1 *local_18;
  
  local_18 = &stack0xfffffffc;
  iVar2 = 5;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  LOCK();
  UNLOCK();
  puStack_1c = &LAB_004ecc04;
  local_2c._12_4_ = *in_FS_OFFSET;
  *in_FS_OFFSET = (char **)((int)local_2c + 0xc);
  if (param_5 == '\0') {
    local_2c._8_4_ = 0x4ecb55;
    FUN_00496550(param_2,(VARIANT *)local_2c);
  }
  else {
    local_2c._8_4_ = 0x4ecb48;
    local_18 = &stack0xfffffffc;
    FUN_00495bcc(param_2,(VARIANT *)local_2c);
  }
  local_2c._8_4_ = 0x4ecb5d;
  uVar1 = FUN_00405bf8((undefined2 *)local_2c);
  if (CONCAT22(extraout_var,uVar1) == 1) {
    local_2c._8_4_ = (undefined *)0x4ecb6d;
    FUN_00403e04(param_4,(undefined4 *)&DAT_004ecc1c);
  }
  else {
    local_2c._8_4_ = &DAT_004ecc2c;
    local_2c._4_4_ = 0x4ecb81;
    FUN_00409bd8(*param_1,(int *)&local_30);
    local_2c._4_4_ = local_30;
    local_2c._0_4_ = "_Param";
    local_30 = 0x4ecb96;
    FUN_004040f0((int *)&stack0xffffffec,3);
    iVar2 = *param_1;
    *param_1 = *param_1 + 1;
    if (SCARRY4(iVar2,1)) {
      local_30 = 0x4ecba3;
      thunk_FUN_00402874((uint)param_1);
    }
    local_30 = 0x4ecbb3;
    FUN_0040407c(param_4,(undefined4 *)&LAB_004ecc48,unaff_EBX);
    local_30 = 0x4ecbc2;
    local_18 = (undefined1 *)FUN_004d4de4((int *)&PTR_FUN_004ccb54,'\x01',unaff_EBX);
    local_30 = 0x4ecbd0;
    FUN_004d4ebc((int)local_18,(undefined4 *)local_2c);
    local_30 = 0x4ecbde;
    (**(code **)(*piRam00000020 + 0xc))(piRam00000020,local_18);
  }
  *in_FS_OFFSET = local_2c._12_4_;
  local_18 = &LAB_004ecc0b;
  puStack_1c = (undefined1 *)0x4ecbf3;
  FUN_00403db0((int *)&local_30);
  puStack_1c = (undefined1 *)0x4ecbfb;
  FUN_00405bcc((VARIANTARG *)local_2c);
  puStack_1c = (undefined1 *)0x4ecc03;
  FUN_00403db0((int *)&stack0xffffffec);
  return;
}

