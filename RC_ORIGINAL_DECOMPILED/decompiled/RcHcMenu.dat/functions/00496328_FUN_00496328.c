/*
 * FUN_00496328 at 00496328
 * undefined __register FUN_00496328(int * param_1, undefined4 * param_2)
 * Address ranges: 00496328-0049645e;0049648e-004964be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00496328(int *param_1,undefined4 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined2 extraout_var;
  int iVar5;
  VARIANT *pVVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  int local_30;
  _union_2683 local_2c;
  VARIANT local_1c;
  char local_b;
  undefined1 local_a;
  char local_9;
  int *local_8;
  
  local_30 = 0;
  local_2c._0_4_ = 0;
  local_2c.decVal.Hi32 = 0;
  local_2c._8_4_ = 0;
  local_2c._12_4_ = 0;
  pVVar6 = &local_1c;
  for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)&pVVar6->n1 = *param_2;
    param_2 = param_2 + 1;
    pVVar6 = (VARIANT *)((int)&pVVar6->n1 + 4);
  }
  puStack_40 = (undefined1 *)0x496359;
  local_8 = param_1;
  FUN_00405bd4(&local_1c);
  puStack_44 = &LAB_004964bf;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  local_b = '\0';
  local_a = (undefined1)local_8[0xc];
  puStack_4c = (undefined1 *)0x49637c;
  puStack_40 = &stack0xfffffffc;
  cVar1 = (**(code **)(*local_8 + 0x4c))();
  if (cVar1 != '\0') {
    puStack_4c = (undefined1 *)0x49638b;
    FUN_00496550(local_8,(VARIANT *)&local_2c.n2);
  }
  puStack_4c = (undefined1 *)0x496393;
  uVar4 = FUN_00405c08((short *)&local_1c);
  if ((char)uVar4 != '\0') {
    puStack_4c = (undefined1 *)0x49639f;
    local_9 = (**(code **)(*local_8 + 0x4c))();
    if (local_9 != '\0') {
      *(byte *)(local_8 + 0xc) = *(byte *)(local_8 + 0xc) & 0xfd;
    }
    goto LAB_00496433;
  }
  puStack_4c = (undefined1 *)0x4963bd;
  bVar2 = FUN_00405c2c((short *)&local_1c);
  if (!bVar2) {
    puStack_4c = (undefined1 *)0x4963c9;
    uVar3 = FUN_00405bf8((undefined2 *)&local_1c);
    if (CONCAT22(extraout_var,uVar3) == 0x100) {
      puStack_4c = (undefined1 *)0x4963db;
      FUN_004052a4(&local_30,&local_1c);
      if (local_30 == 0) {
        puStack_4c = (undefined1 *)0x4963e9;
        iVar5 = FUN_00496d84((int)local_8);
        if ((*(byte *)(iVar5 + 0x18) & 0x80) != 0) goto LAB_004963ef;
      }
    }
    puStack_4c = (undefined1 *)0x49642c;
    local_9 = (**(code **)(*local_8 + 0x34))(local_8,&local_1c);
    local_b = '\x01';
    goto LAB_00496433;
  }
LAB_004963ef:
  puStack_4c = (undefined1 *)0x4963f7;
  cVar1 = (**(code **)(*local_8 + 0x4c))();
  if (cVar1 == '\0') {
LAB_0049640b:
    local_9 = '\x01';
  }
  else {
    puStack_4c = (undefined1 *)0x496403;
    cVar1 = (**(code **)(*local_8 + 0x50))();
    if (cVar1 == '\0') goto LAB_0049640b;
    local_9 = '\0';
  }
  *(byte *)(local_8 + 0xc) = *(byte *)(local_8 + 0xc) & 0xfb;
  puStack_4c = (undefined1 *)0x49641f;
  FUN_004969bc((int)local_8);
LAB_00496433:
  if ((local_9 != '\0') && (local_b == '\0')) {
    puStack_50 = &LAB_0049645f;
    uStack_54 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_54;
    puStack_4c = &stack0xfffffffc;
    FUN_0045fa7c(local_8);
    *in_FS_OFFSET = uStack_54;
    puStack_4c = (undefined1 *)0x496496;
    FUN_0045f9d8(local_8);
  }
  *in_FS_OFFSET = uStack_48;
  puStack_40 = &LAB_004964c6;
  puStack_44 = (undefined1 *)0x4964ab;
  FUN_00403db0(&local_30);
  puStack_44 = (undefined1 *)0x4964be;
  FUN_00404878((VARIANTARG *)&local_2c.n2,&DAT_00401108,2);
  return;
}

