/*
 * FUN_004c4200 at 004c4200
 * undefined __register FUN_004c4200(int * param_1, int * param_2)
 * Address ranges: 004c4200-004c42f4;004c42fc-004c4329
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004c4200(int *param_1,int *param_2)

{
  VARIANTARG *pVVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 extraout_var;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 *local_30;
  VARIANTARG *local_2c;
  undefined1 local_28 [12];
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  local_14 = &stack0xfffffffc;
  local_10 = (int *)0x5;
  do {
    local_10 = (int *)((int)local_10 + -1);
  } while (local_10 != (int *)0x0);
  puStack_18 = &LAB_004c432a;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_28._8_4_ = 0x4c422c;
  local_c = param_2;
  local_8 = param_1;
  FUN_00403db0(param_2);
  local_28._8_4_ = 0x4c423a;
  uVar3 = FUN_0040320c(local_8,(int)&DAT_004b64c0);
  if ((char)uVar3 != '\0') {
    local_28._8_4_ = 0x4c4247;
    local_14 = (undefined1 *)FUN_004bcdbc();
    local_10 = (int *)0x0;
    local_28._4_4_ = &LAB_004c42f5;
    local_28._0_4_ = *in_FS_OFFSET;
    *in_FS_OFFSET = local_28;
    local_2c = (VARIANTARG *)0x4c4265;
    local_28._8_4_ = &stack0xfffffffc;
    iVar4 = FUN_004b7790((int)local_14);
    local_2c = (VARIANTARG *)0x4c426a;
    sVar2 = FUN_004b74a4(iVar4);
    iVar4 = sVar2 + -1;
    if (SBORROW4((int)sVar2,1)) {
      local_2c = (VARIANTARG *)0x4c4277;
      thunk_FUN_00402874(CONCAT22(extraout_var,sVar2));
      iVar4 = extraout_EDX;
    }
    local_2c = (VARIANTARG *)0x4c427f;
    FUN_004053dc((VARIANTARG *)(local_28 + 4),iVar4);
    local_2c = (VARIANTARG *)(local_28 + 4);
    local_30 = (undefined4 *)0x4c428b;
    iVar4 = FUN_004b7790((int)local_14);
    pVVar1 = local_2c;
    local_2c = (VARIANTARG *)0x4c4291;
    local_10 = (int *)FUN_004b7ce0(iVar4,pVVar1);
    local_2c = (VARIANTARG *)0x4c429c;
    uVar3 = FUN_004b7b68((int)local_10);
    local_2c = (VARIANTARG *)0x4c42a4;
    FUN_00409bd8(uVar3,(int *)&local_2c);
    local_2c = (VARIANTARG *)0x4c42b1;
    FUN_00404038((int *)&local_2c,(undefined4 *)&LAB_004c4340);
    pVVar1 = local_2c;
    local_2c = (VARIANTARG *)0x4c42bc;
    FUN_004045b8((BSTR)local_28,(LPCSTR)pVVar1);
    local_2c = (VARIANTARG *)local_28;
    local_30 = (undefined4 *)0x4c42cb;
    FUN_004b7c24((int)local_10,&local_30);
    pVVar1 = local_2c;
    local_2c = (VARIANTARG *)0x4c42d4;
    FUN_004045d4((int *)pVVar1,local_30);
    local_2c = (VARIANTARG *)0x4c42df;
    FUN_00403ff8(local_c,(LPCWSTR)local_28._0_4_);
    *in_FS_OFFSET = local_28._0_4_;
    local_28._8_4_ = 0x4c42fc;
    local_28._4_4_ = 0x4c42f4;
    FUN_00403094(local_10);
    return;
  }
  *in_FS_OFFSET = uStack_1c;
  local_14 = &LAB_004c4331;
  puStack_18 = (undefined1 *)0x4c4311;
  FUN_00404474(&local_30);
  puStack_18 = (undefined1 *)0x4c4319;
  FUN_00403db0((int *)&local_2c);
  puStack_18 = (undefined1 *)0x4c4321;
  FUN_00404474((undefined4 *)local_28);
  puStack_18 = (undefined1 *)0x4c4329;
  FUN_00405bcc((VARIANTARG *)(local_28 + 4));
  return;
}

