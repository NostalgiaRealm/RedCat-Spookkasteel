/*
 * FUN_00475d68 at 00475d68
 * undefined __register FUN_00475d68(int param_1, char param_2, undefined1 param_3, undefined4 param_4, undefined4 param_5, VARIANTARG * param_6)
 * Address ranges: 00475d68-00475e48
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00475d68(int param_1,char param_2,undefined1 param_3,undefined4 param_4,undefined4 param_5,
                 VARIANTARG *param_6)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  int iVar4;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  VARIANTARG *local_18;
  undefined1 local_14;
  byte *local_10;
  undefined *local_c;
  undefined1 local_6;
  char local_5;
  
  puStack_28 = &stack0xfffffffc;
  local_10 = (byte *)0x0;
  local_c = (undefined *)0x0;
  puStack_2c = &LAB_00475e49;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_6 = param_3;
  local_5 = param_2;
  puVar1 = FUN_00404c74(0x30,"\x0e\tTExprNode0");
  *puVar1 = *(undefined4 *)(param_1 + 0x30);
  *(char *)(puVar1 + 1) = local_5;
  *(undefined1 *)((int)puVar1 + 5) = 0;
  *(undefined1 *)((int)puVar1 + 6) = local_6;
  FUN_00404e28((VARIANT *)(puVar1 + 2),param_6);
  puVar1[6] = param_5;
  puVar1[7] = param_4;
  *(undefined4 **)(param_1 + 0x30) = puVar1;
  if (local_5 == '\0') {
    FUN_004052a4((int *)&local_c,param_6);
    piVar2 = (int *)FUN_00476b8c(param_1,local_c);
    if (piVar2 == (int *)0x0) {
      iVar4 = 0;
      FUN_00406a48((undefined4 *)PTR_PTR_005724e0,(int *)&local_10);
      local_18 = param_6;
      local_14 = 0xd;
      FUN_00466e30(local_10,&local_18,0,iVar4);
    }
    *(char *)(puVar1 + 8) = (char)piVar2[0xd];
    uVar3 = (**(code **)(*piVar2 + 0x80))();
    puVar1[9] = uVar3;
  }
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_00475e50;
  puStack_2c = (undefined1 *)0x475e48;
  FUN_00403dd4((int *)&local_10,2);
  return;
}

