/*
 * FUN_00467688 at 00467688
 * undefined __register FUN_00467688(int * param_1, undefined4 param_2, undefined4 param_3, undefined * param_4, undefined4 param_5)
 * Address ranges: 00467688-004676d5;004676e4-004676e8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00467688(int *param_1,undefined4 param_2,undefined4 param_3,undefined *param_4,
                 undefined4 param_5)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int *local_8;
  
  if ((char)param_1[8] == '\0') {
    param_1[0xc] = param_1[0xc] + 1;
    puStack_c = (undefined1 *)0x4676a6;
    local_8 = param_1;
    (**(code **)(*param_1 + 0x14))();
    puStack_10 = &LAB_004676d6;
    uStack_14 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_14;
    puStack_c = &stack0xfffffffc;
    (*(code *)param_4)(param_5);
    puVar1 = puStack_c;
    *in_FS_OFFSET = uStack_14;
    puStack_c = &DAT_004676dd;
    puStack_10 = (undefined1 *)0x4676cf;
    (**(code **)(*local_8 + 0x18))(local_8,*local_8,puVar1);
    local_8[0xc] = local_8[0xc] + -1;
    return;
  }
  return;
}

