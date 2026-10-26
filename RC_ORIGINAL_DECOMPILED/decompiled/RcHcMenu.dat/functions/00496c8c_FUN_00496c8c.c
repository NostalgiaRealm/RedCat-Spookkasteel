/*
 * FUN_00496c8c at 00496c8c
 * undefined __register FUN_00496c8c(int * param_1)
 * Address ranges: 00496c8c-00496d50
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00496c8c(int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  _union_2683 local_1c;
  undefined4 uStack_c;
  int *local_8;
  
  puStack_20 = &stack0xfffffffc;
  uStack_c = 0;
  local_1c._12_4_ = 0;
  local_1c._8_4_ = 0;
  local_1c.decVal.Hi32 = 0;
  local_1c._0_4_ = 0;
  puStack_24 = &LAB_00496d51;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_8 = param_1;
  cVar1 = (**(code **)(*param_1 + 0x4c))();
  if (cVar1 == '\0') {
    uVar4 = FUN_00405c08((short *)(local_8 + 8));
    uStack_c = CONCAT13((char)uVar4,(undefined3)uStack_c) ^ 0x1000000;
  }
  else {
    uVar4 = FUN_00405c08((short *)(local_8 + 8));
    if ((char)uVar4 == '\0') {
      cVar1 = (**(code **)(*local_8 + 0x50))();
      if (cVar1 == '\0') {
        bVar3 = FUN_00405c2c((short *)(local_8 + 8));
        if (bVar3) {
          uVar2 = (**(code **)(*local_8 + 0x50))();
          uStack_c = CONCAT13(uVar2,(undefined3)uStack_c) ^ 0x1000000;
        }
        else {
          FUN_00496550(local_8,(VARIANT *)&local_1c.n2);
          bVar3 = (VARIANTARG *)(local_8 + 8) == (VARIANTARG *)0x0;
          FUN_00405abc((VARIANTARG *)(local_8 + 8),(VARIANTARG *)&local_1c.n2);
          uStack_c = CONCAT13(!bVar3,(undefined3)uStack_c);
        }
      }
      else {
        bVar3 = FUN_00405c2c((short *)(local_8 + 8));
        uStack_c = CONCAT13(!bVar3,(undefined3)uStack_c);
      }
    }
    else {
      uVar2 = (**(code **)(*local_8 + 0x4c))();
      uStack_c = CONCAT13(uVar2,(undefined3)uStack_c);
    }
  }
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00496d58;
  puStack_24 = (undefined1 *)0x496d50;
  FUN_00405bcc((VARIANTARG *)&local_1c.n2);
  return;
}

