/*
 * FUN_0052d774 at 0052d774
 * undefined __register FUN_0052d774(int * param_1, undefined1 param_2)
 * Address ranges: 0052d774-0052d8e8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0052d774(int *param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  char *pcStack_13c;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  _union_2683 local_124;
  byte local_114 [256];
  int local_14;
  int local_10;
  int *local_c;
  undefined1 local_5;
  
  puStack_128 = &stack0xfffffffc;
  local_124._0_4_ = 0;
  local_124.decVal.Hi32 = 0;
  local_124._8_4_ = 0;
  local_124._12_4_ = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_12c = &LAB_0052d8e9;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  puVar1 = &stack0xfffffffc;
  local_c = param_1;
  local_5 = param_2;
  if (param_1[0x22] != param_1[0x23]) {
    FUN_00402fe0(*param_1,local_114);
    FUN_00403fd4(&local_14,local_114);
    pcStack_13c = " Post-operation not at edit/insert-row";
    FUN_004040f0(&local_10,3);
    FUN_00403d94(local_10);
    puVar1 = puStack_128;
  }
  puStack_128 = puVar1;
  if ((char)local_c[0x10] == '\0') {
    FUN_0052d62c();
  }
  else if ((char)local_c[0x10] == '\x01') {
    FUN_0052d734();
  }
  else {
    FUN_00403d94("Assertion failure");
  }
  (**(code **)(*local_c + 0x5c))(local_c,0);
  if ((char)local_c[0x10] == '\0') {
    piVar2 = (int *)FUN_004e25c4((int *)local_c[0x20],local_c[0x22]);
    piVar2 = (int *)FUN_004949bc(piVar2);
    FUN_00496550(piVar2,(VARIANT *)&local_124.n2);
    piVar2 = (int *)FUN_00549b80((int)local_c);
    piVar2 = (int *)FUN_004949bc(piVar2);
    FUN_004964d0(piVar2,(undefined4 *)&local_124);
  }
  FUN_0052be28((int)local_c);
  FUN_0054b510((uint)local_c);
  uVar3 = FUN_00549b80((int)local_c);
  FUN_00548cf4(local_c,uVar3,1);
  FUN_0054b528(local_c);
  *in_FS_OFFSET = pcStack_13c;
  FUN_00405bcc((VARIANTARG *)&local_124.n2);
  FUN_00403dd4(&local_14,2);
  return;
}

