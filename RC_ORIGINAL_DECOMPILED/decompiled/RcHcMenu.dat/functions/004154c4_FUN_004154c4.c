/*
 * FUN_004154c4 at 004154c4
 * undefined __register FUN_004154c4(int param_1, char * param_2)
 * Address ranges: 004154c4-00415583;00415596-0041559c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004154c4(int param_1,char *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint uVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  code *in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  uint local_10;
  int *local_c;
  int local_8;
  
  puStack_18 = (undefined1 *)0x4154dd;
  local_8 = param_1;
  uVar1 = FUN_004097ac(param_2,*(char **)(param_1 + 0x70));
  if (((char)uVar1 != '\0') && (in_stack_0000000c._2_2_ != 0)) {
    puStack_18 = (undefined1 *)0x4154f8;
    uVar2 = FUN_00417010(local_8,extraout_EDX,extraout_ECX);
    uVar3 = extraout_ECX_00;
    if ((char)uVar2 != '\n') {
      *(int *)(local_8 + 0x10) = *(int *)(local_8 + 0x10) + -1;
      puStack_18 = (undefined1 *)0x41550a;
      FUN_00417170(local_8,extraout_EDX_00,extraout_ECX_00);
      *(undefined1 *)(local_8 + 0x74) = 1;
      puStack_18 = (undefined1 *)0x415516;
      FUN_00415400();
      uVar3 = extraout_ECX_01;
    }
    puStack_18 = (undefined1 *)0x415522;
    local_c = (int *)FUN_00403064((int *)&PTR_FUN_00410f54,'\x01',uVar3);
    puStack_1c = &LAB_00415584;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    puStack_18 = &stack0xfffffffc;
    FUN_0041586c(local_8,&local_10,4);
    (**(code **)*local_c)(local_c,local_10);
    FUN_0041586c(local_8,(undefined4 *)local_c[1],local_10);
    *(undefined1 *)(local_8 + 0x74) = 1;
    (*in_stack_0000000c)(in_stack_00000010,local_c);
    *in_FS_OFFSET = uStack_20;
    puStack_18 = &DAT_0041558b;
    puStack_1c = (undefined1 *)0x415583;
    FUN_00403094(local_c);
    return;
  }
  return;
}

