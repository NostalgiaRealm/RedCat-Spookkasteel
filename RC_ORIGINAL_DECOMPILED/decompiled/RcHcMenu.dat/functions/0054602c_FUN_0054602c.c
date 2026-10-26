/*
 * FUN_0054602c at 0054602c
 * undefined __register FUN_0054602c(int * param_1, undefined4 * param_2)
 * Address ranges: 0054602c-00546121
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x54580c slot 12 for TAppObjQueryList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x54580c slot 12 for
   TAppObjQueryList. Original bytes unchanged; names and types still inferred. */

void FUN_0054602c(int *param_1,undefined4 *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 extraout_ECX;
  VARIANT *pVVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  _union_2683 local_34;
  VARIANT local_24;
  int *local_14;
  int *local_10;
  undefined1 local_9;
  int *local_8;
  
  local_34._0_4_ = 0;
  local_34.decVal.Hi32 = 0;
  local_34._8_4_ = 0;
  local_34._12_4_ = 0;
  pVVar4 = &local_24;
  for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)&pVVar4->n1 = *param_2;
    param_2 = param_2 + 1;
    pVVar4 = (VARIANT *)((int)&pVVar4->n1 + 4);
  }
  puStack_40 = (undefined1 *)0x546059;
  local_8 = param_1;
  FUN_00405bd4(&local_24);
  puStack_44 = &LAB_00546152;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  local_10 = (int *)0x0;
  puStack_4c = (undefined1 *)0x546077;
  puStack_40 = &stack0xfffffffc;
  local_14 = (int *)FUN_0049206c((int *)local_8[7]);
  puStack_4c = (undefined1 *)0x546082;
  piVar2 = (int *)FUN_004949bc(local_14);
  puStack_4c = (undefined1 *)0x54608a;
  FUN_004964d0(piVar2,(undefined4 *)&local_24);
  puStack_50 = &LAB_00546122;
  uStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_54;
  puStack_4c = &stack0xfffffffc;
  local_10 = FUN_0048ea9c((int *)&PTR_FUN_0048e30c,'\x01',extraout_ECX);
  FUN_0048ed90(local_10,*(int **)(local_8[0xf] + 0x18));
  cVar1 = FUN_004d28c0((int *)local_8[0xd],local_14,local_10);
  local_9 = cVar1 == '\0';
  if ((bool)local_9) {
    local_9 = 0;
  }
  else {
    FUN_00548cf4(local_8,local_14,1);
    piVar2 = (int *)FUN_00549b80((int)local_8);
    piVar2 = (int *)FUN_004949bc(piVar2);
    FUN_00496550(piVar2,(VARIANT *)&local_34.n2);
    FUN_00405abc((VARIANTARG *)&local_34.n2,&local_24);
  }
  *in_FS_OFFSET = uStack_54;
  puStack_4c = &LAB_00546129;
  puStack_50 = (undefined1 *)0x546119;
  FUN_00403094(local_14);
  puStack_50 = (undefined1 *)0x546121;
  FUN_00403094(local_10);
  return;
}

