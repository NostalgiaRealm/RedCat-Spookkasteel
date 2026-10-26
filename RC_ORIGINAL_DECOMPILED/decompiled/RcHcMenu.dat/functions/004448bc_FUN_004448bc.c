/*
 * FUN_004448bc at 004448bc
 * undefined __register FUN_004448bc(int * param_1)
 * Address ranges: 004448bc-0044492b;00444933-00444936
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004448bc(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined1 local_a;
  char local_9;
  int *local_8;
  
  puStack_10 = &stack0xfffffffc;
  if (PTR_DAT_0057261c[9] != '\0') {
    local_9 = (char)param_1[9];
    local_a = *(undefined1 *)((int)param_1 + 0x35);
    puStack_14 = &LAB_0044492c;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    local_8 = param_1;
    if (local_9 == '\0') {
      puStack_10 = &stack0xfffffffc;
      FUN_00444dcc(param_1,'\x01');
    }
    else {
      FUN_00444dcc(param_1,'\0');
    }
    *in_FS_OFFSET = uStack_18;
    puStack_10 = (undefined1 *)0x444933;
    puStack_14 = (undefined1 *)0x444922;
    FUN_00444dcc(local_8,local_9);
    *(undefined1 *)((int)local_8 + 0x35) = local_a;
    return;
  }
  return;
}

